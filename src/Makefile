CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11
BUILD_DIR = ../build
QUEST1_OUTPUT = $(BUILD_DIR)/Quest_1
QUEST2_OUTPUT = $(BUILD_DIR)/Quest_2
QUEST3_OUTPUT = $(BUILD_DIR)/Quest_3

door_struct: $(QUEST1_OUTPUT)
	$(QUEST1_OUTPUT)

$(QUEST1_OUTPUT): dmanager_module.c
	$(CC) dmanager_module.c -o $(QUEST1_OUTPUT)

list_test: $(QUEST2_OUTPUT)
	$(QUEST2_OUTPUT)

$(QUEST2_OUTPUT): list_test.c list.c
	$(CC) list_test.c list.c -o $(QUEST2_OUTPUT)

stack_test: $(QUEST3_OUTPUT)
	$(QUEST3_OUTPUT)

$(QUEST3_OUTPUT): stack_test.c stack.c
	$(CC) stack_test.c stack.c -o $(QUEST3_OUTPUT)

clean:
	rm -f $(QUEST1_OUTPUT) $(QUEST2_OUTPUT)

format:
	clang-format -i dmanager_module.c
	clang-format -i list_test.c
	clang-format -i list.c
	clang-format -i stack_test.c
	clang-format -i stack.c

memory_check: list_test door_struct
	valgrind --tool=memcheck --leak-check=yes $(QUEST1_OUTPUT)
	valgrind --tool=memcheck --leak-check=yes $(QUEST2_OUTPUT)
	valgrind --tool=memcheck --leak-check=yes $(QUEST3_OUTPUT)

cpp_check:
	cppcheck --enable=all --inconclusive --quiet --std=c11 --suppress=missingIncludeSystem ./