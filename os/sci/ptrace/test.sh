#!/bin/sh

gcc main.c -I/usr/include/x86_64-linux-musl
./a.out
rm -f a.out