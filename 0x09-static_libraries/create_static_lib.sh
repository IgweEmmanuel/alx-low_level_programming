#!/bin/bash
# Create static library bash script

pwd

gcc -c *.c

ar rc liballa.a *.o

cc main.o -L. -lalla -o program
