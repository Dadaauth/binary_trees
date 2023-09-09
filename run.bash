#!/usr/bin/env bash
#
#	Usage: ./run.bash 
#
#	"arguments to gcc / files to compile"
#
#	NULL[if and only
#	if you want gcc to output you file as a.out]
#
#	betty [optional argument
#	whether to run the betty check or now]
#
empty="NULL"

if [ "$2" = "$empty" ]; then
	gcc -Wall -Werror -pedantic -Wextra -std=gnu89 $1
elif [ "$2" = "" ]; then
	gcc -Wall -Werror -pedantic -Wextra -std=gnu89 $1
else
	gcc -Wall -Werror -pedantic -Wextra -std=gnu89 $1 -o $2
fi

if [ "$3" = "" ]; then
	echo "betty check ommitted!"
elif [ "$3" = "betty" ]; then
	betty *.c;
else
	echo "betty check ommitted!"
fi

if [ "$2" = "" ]; then
	./a.out;
elif [ "$2" = "$empty" ]; then
	./a.out;
else
	./$2;
fi
