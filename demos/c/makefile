OUTNAME = demo

SRCDIR = ./src/
INCDIR = -Iinclude/

SRC = $(SRCDIR)demo/* $(SRCDIR)sort/*
INC = $(INCDIR)demo $(INCDIR)sort

all:
	gcc main.c $(SRC) $(INC) -o $(OUTNAME)

clean:
	rm $(OUTNAME)
