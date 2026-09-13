# Computer Networking

## Resources

* [Beej's Guide to Network Programming](https://beej.us/guide/bgnet/html/)
* [TCP/IP Sockets in C, 2nd Edition -- M. Donahoo](https://www.amazon.com/TCP-IP-Sockets-Practical-Programmers/dp/0123745403)

## Book: TCP/IP Sockets in C (Donahoo)

TCP echo client examples. These files depend on `Practical.h` (the
error-handling helpers from the book), which is not in this repository yet,
so they are excluded from the default `make` build (see `NOLINK` in the
Makefile).

| File | Topic |
| ---- | ----- |
| `tcpip_in_c/client.c` | TCP echo client -- IPv4, `socket`/`connect`/`send`/`recv` |
| `tcpip_in_c/TCPEchoClient4.c` | Same TCP echo client (book's original naming) |

------------------------------------------------
[<- Table of Contents](../README.md)
