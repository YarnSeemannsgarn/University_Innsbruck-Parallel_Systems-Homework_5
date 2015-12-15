#!/bin/sh

CC=icc
CFLAGS="-parallel -par-report3 -par-threshold0 -ipo"

module load intel/13.0

for i in {01..15}; do 
	i=$(printf "%02d" $i)
	$CC $CFLAGS -o $i $i.c
done
