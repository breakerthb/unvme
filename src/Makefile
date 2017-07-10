# Which Compiler
CC=gcc

# Debug option
CFLAGS=-g -c -Wall -fPIC
# Release option
#CFLAGS=-O -c -Wall
#CFLAGS+=-std=c++11

DEFINE=-DUNVME_DEBUG

#ALL_CPP=$(shell ls ./*.c)
ALL_CPP=$(wildcard *.c)
ALL_HPP=-I ../../src 

SOURCES=$(ALL_CPP)
INCDIR=$(ALL_HPP)

# Replace SOURCES '.cpp' -> '.o'
OBJS=$(SOURCES:.c=.o)

# Libs
LIB_PATH=

TARGET=logtest

all:$(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(INCDIR) $^ -o $@

%.o: %.c
	$(CC) $(INCDIR) $(DEFINE) -fPIC -c -o $@ $^
	


clean:
	rm -f $(OBJS) $(TARGET)

