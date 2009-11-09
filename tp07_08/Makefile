# Makefile
#
# It uses implicit rules to compile .c files using the
# values assigned to macros CC and CFLAGS
#

CC = gcc
CFLAGS = -g -Wall

ex4a: ex4_a.o
	gcc -o ex4_a ex4_a.o -lpthread

thread: thread.o
	gcc -o thread thread.o -lpthread

clean:
	rm -f *.o thread 
