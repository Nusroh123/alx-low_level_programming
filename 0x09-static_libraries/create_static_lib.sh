#!/bin/bash
gcc -c *.c
ar rcs liball.a *.o
nm liball.a
rm *.o
