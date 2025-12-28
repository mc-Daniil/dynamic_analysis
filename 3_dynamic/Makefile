.PHONY: clean dynamic static

CC = gcc
CFLAGS = -g
SRC = main.c
TARGET = main
LIBSRC = utils.c
LIBNAME = utils

# ===== динамическая сборка =====
dynamic: lib$(LIBNAME).so $(SRC)
	$(CC) $(CFLAGS) $(SRC) -L. -Wl,-rpath,. -l$(LIBNAME) -o $(TARGET)

lib$(LIBNAME).so: $(LIBSRC)
	$(CC) -fPIC -shared -g $(LIBSRC) -o lib$(LIBNAME).so

# ===== статическая сборка =====
static: lib$(LIBNAME).a $(SRC)
	$(CC) $(CFLAGS) $(SRC) lib$(LIBNAME).a -o $(TARGET)

lib$(LIBNAME).a: $(LIBSRC)
	$(CC) -c -g $(LIBSRC)
	ar rcs lib$(LIBNAME).a $(LIBNAME).o

clean:
	rm -f $(TARGET) *.o *.so *.a
