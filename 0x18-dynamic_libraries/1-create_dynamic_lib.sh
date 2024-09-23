#!/bin/bash
gcc -fPIC -g -c -Wall -pedantic -Wextra functions.c
gcc -shared -Wl,-soname,liball.so functions.o
