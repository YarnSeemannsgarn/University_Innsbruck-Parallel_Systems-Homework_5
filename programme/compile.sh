#!/bin/sh

CC=icc
CFLAGS="-O2 -parallel -par-report3 -par-threshold0 -ipo"

for i in {01..15}; do 
	i=$(printf "%02d" $i)
	$CC $CFLAGS -o $i $i.c
done
