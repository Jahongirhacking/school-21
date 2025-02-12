CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11
BUILD = ../build
DYNAMIC_LIBRARY = $(BUILD)/libs21_string.so
QUEST1_OUTPUT = $(BUILD)/Quest1

all: $(QUEST1_OUTPUT)

$(QUEST1_OUTPUT): s21_string_test.c $(DYNAMIC_LIBRARY)
	$(CC) s21_string_test.c -L$(BUILD) -ls21_string -Wl,-rpath,$(BUILD) -ldl -o $(QUEST1_OUTPUT)

$(DYNAMIC_LIBRARY):
	$(CC) s21_string.c -fPIC -shared -o $(DYNAMIC_LIBRARY)

clean:
	rm -f $(DYNAMIC_LIBRARY) $(QUEST1_OUTPUT)

rebuild: clean all

format:
	clang-format -i s21_string.c
	clang-format -i s21_string_test.c

memory: $(QUEST1_OUTPUT)
	valgrind --tool=memcheck --leak-check=yes $(QUEST1_OUTPUT)