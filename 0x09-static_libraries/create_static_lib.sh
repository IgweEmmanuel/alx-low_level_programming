#!/bin/bash

pwd
gcc -c *.c
ar rc liballa.a *.o
ls *.a
ar -t liballa.a
