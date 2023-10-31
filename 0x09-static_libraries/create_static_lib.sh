#!/bin/bash
# Create static library bash script

gcc -c *.c

ar rc liballa.a *.o

cc main.o -L. -lalla -o program
