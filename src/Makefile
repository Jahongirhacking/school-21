CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11
BUILD_DIR = ../build
QUEST1_OUTPUT = $(BUILD_DIR)/Quest_1

door_struct: $(QUEST1_OUTPUT)
	$(QUEST1_OUTPUT)

$(QUEST1_OUTPUT): dmanager_module.c
	$(CC) dmanager_module.c -o $(QUEST1_OUTPUT)

clean:
	rm -f $(QUEST1_OUTPUT)

format:
	clang-format -i dmanager_module.c