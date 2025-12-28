.PHONY: clean dynamic run

CC = gcc
CFLAGS = -g
SRC = main.c
LIBSRC = util.c
LIBNAME = util

dynamic: lib$(LIBNAME).so $(SRC)
	$(CC) $(CFLAGS) $(SRC) -L. -l$(LIBNAME) -o $(DYN_TARGET)

lib$(LIBNAME).so: $(LIBSRC)
