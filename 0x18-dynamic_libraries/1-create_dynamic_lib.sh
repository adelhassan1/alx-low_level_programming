#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o liball.so *.o
ar -rc liball.so *.o
ranlib liball.so
