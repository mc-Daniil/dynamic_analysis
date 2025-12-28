.PHONY: clean dynamic

CC = gcc
CFLAGS = -g
SRC = main.c
TARGET = main
LIBSRC = utils.c
LIBNAME = utils

dynamic: lib$(LIBNAME).so $(SRC)
	$(CC) $(CFLAGS) $(SRC) -L. -l$(LIBNAME) -o $(TARGET)

lib$(LIBNAME).so: $(LIBSRC)
	$(CC) -fPIC -shared -g $(LIBSRC) -o lib$(LIBNAME).so

clean:
	rm -f $(TARGET) *.o *.so *.a
