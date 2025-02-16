CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11
BUILD_DIR = ../build
OUTPUT = $(BUILD_DIR)/graph
SOURCE_FILES = main.c parse.c stack.c calculate.c graph.c
HEADER_FILES = parse.h stack.h calculate.h graph.h

all: $(OUTPUT)
	$(OUTPUT)

$(OUTPUT): $(SOURCE_FILES)
	$(CC) $(CFLAGS) $(SOURCE_FILES) -lm -o $(OUTPUT)

clean:
	rm -f $(OUTPUT)

format:
	clang-format -i $(SOURCE_FILES) $(HEADER_FILES)

memory_check: list_test door_struct
	valgrind --tool=memcheck --leak-check=yes $(OUTPUT)

cpp_check:
	cppcheck --enable=all --inconclusive --quiet --std=c11 --suppress=missingIncludeSystem ./