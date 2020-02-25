P=mm1
OBJECTS=f_print.o
CFLAGS = -g -Wall -O2 -std=gnu11 -include allhead.h
LDLIBS=
cc=gcc
${P}:${OBJECTS}
