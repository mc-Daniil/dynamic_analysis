.PHONY: all clean debug run # объявление целей, которые не являются файлами
.DEFAULT_GOAL := run # цель по умолчанию

CC = gcc # переменная с компилятором
CFLAGS = -g # флаги
TARGET = main # Название бинаря
SRC = main.c # файл с исходным кодом

all: clean $(TARGET) # запустится по дефолту, запускает clean и сборку

$(TARGET): $(SRC) # запускает сборку, требует исходник
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean: # удаляет бинарь
	rm -f $(TARGET)

debug: $(TARGET) # билдит и запускает бинарь в отладчике
	gdb ./$(TARGET)

run: $(TARGET) # билдит и запускает бинарь
	./$(TARGET)
