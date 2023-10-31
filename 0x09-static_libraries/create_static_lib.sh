#!/bin/bash
#Create static library bash script
pwd
gcc -c *.c
ar rc liballa.a *.o
ls *.a
ar -t liballa.a
