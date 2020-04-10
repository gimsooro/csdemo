OUTNAME = demo

SRCDIR = ./src/
INCDIR = ./include/

SRC = $(SRCDIR)demo/* $(SRCDIR)compare/* $(SRCDIR)sort/*
INC = $(INCDIR)demo/* $(INCDIR)compare/* $(INCDIR)sort/*

INCFLAG = -I$(INCDIR)demo -I$(INCDIR)compare -I$(INCDIR)sort

CC = gcc
FLAGS = -Wall -pedantic -std=c11

all: $(OUTNAME)

$(OUTNAME): main.c $(SRC) $(INC)
	$(CC) $(FLAGS) main.c $(SRC) $(INCFLAG) -o $(OUTNAME)

clean:
	rm $(OUTNAME)
