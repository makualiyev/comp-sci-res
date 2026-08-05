# Build the exercise programs in this repository.
#
# Every .c file here is a self-contained exercise from one of the books listed
# in README.md, so each one compiles to its own binary under build/, mirroring
# the source layout. Sources are discovered automatically -- adding a new
# exercise needs no change to this file.
#
#   make                 build every runnable exercise
#   make list            show what will and will not be built
#   make run BIN=...     build and run one exercise
#   make asm SRC=...     emit readable assembly for one source
#   make clean           remove build/
#
# The warning flags are deliberate: CSAPP chapter 2 is largely about signed
# vs. unsigned conversion, and -Wall -Wextra names those bugs as you make them.

CC     ?= gcc
CFLAGS ?= -Og -g -Wall -Wextra -std=c11
BUILD  := build

# ---- sources ---------------------------------------------------------------

SRCS := $(patsubst ./%,%,$(shell find . -path ./.git -prune -o -name '*.c' -print))

# Exercises that do not link into a runnable program:
#
#   csapp_3_2_2.c   has no main -- it exists to be read as compiler output,
#                   which is what `make asm` is for.
#   tcpip_in_c/*    #include "Practical.h", the error-handling helpers from
#                   Donahoo's book, which are not in this repository yet.
#
NOLINK := computer-architecture/csapp/csapp_3_2_2.c
NOLINK += $(wildcard computer-networking/tcpip_in_c/*.c)

RUNNABLE := $(filter-out $(NOLINK),$(SRCS))
BINS     := $(patsubst %.c,$(BUILD)/%,$(RUNNABLE))

# ---- rules -----------------------------------------------------------------

.PHONY: all
all: $(BINS)

$(BUILD)/%: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ $<

.PHONY: list
list:
	@echo "runnable ($(words $(BINS))):"
	@printf '  %s\n' $(patsubst $(BUILD)/%,%,$(BINS))
	@echo "not linked ($(words $(NOLINK))) -- see NOLINK in the Makefile:"
	@printf '  %s\n' $(NOLINK)

# make run BIN=operating-systems/ostep/p2
# make run BIN=computer-architecture/csapp/csapp_2_1_1 ARGS="12345"
.PHONY: run
run:
	@test -n "$(BIN)" || { \
	    echo "usage: make run BIN=<path without .c> [ARGS='...']" >&2; \
	    echo "       make list   to see the available names" >&2; exit 2; }
	@$(MAKE) --no-print-directory $(BUILD)/$(BIN)
	@echo "----- $(BIN) -----"
	@./$(BUILD)/$(BIN) $(ARGS)

# make asm SRC=computer-architecture/csapp/csapp_3_2_2.c
#
# Drops -g and the unwind tables so the listing is instructions rather than
# .loc/.cfi debug directives -- what CSAPP chapter 3 actually asks you to read.
ASMFLAGS := $(filter-out -g,$(CFLAGS)) -fno-asynchronous-unwind-tables

.PHONY: asm
asm:
	@test -n "$(SRC)" || { \
	    echo "usage: make asm SRC=<path to .c file>" >&2; exit 2; }
	@mkdir -p $(dir $(BUILD)/$(SRC))
	$(CC) $(ASMFLAGS) -S -o $(BUILD)/$(SRC:.c=.s) $(SRC)
	@echo "wrote $(BUILD)/$(SRC:.c=.s)"

.PHONY: clean
clean:
	rm -rf $(BUILD)
