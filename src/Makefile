CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11
BUILD = ../build
DYNAMIC_LIBRARY = $(BUILD)/libs21_string.so
QUEST1_OUTPUT = $(BUILD)/Quest1
QUEST2_OUTPUT = $(BUILD)/Quest2
QUEST3_OUTPUT = $(BUILD)/Quest3

# Default target to build the executables
all: s21_string_test.c $(DYNAMIC_LIBRARY)
	$(CC) s21_string_test.c -L$(BUILD) -ls21_string -Wl,-rpath,$(BUILD) -ldl -o $(TARGET)

# Targets for each of the tests
strlen_tests: $(QUEST1_OUTPUT)
	$(QUEST1_OUTPUT) 1

strcmp_tests: $(QUEST2_OUTPUT)
	$(QUEST2_OUTPUT) 2

strcpy_tests: $(QUEST3_OUTPUT)
	LD_LIBRARY_PATH=$(BUILD) $(QUEST3_OUTPUT) 3  # Set LD_LIBRARY_PATH to point to the build directory

# Compilation rule for each test
$(QUEST1_OUTPUT):
	$(MAKE) TARGET=$(QUEST1_OUTPUT) all

$(QUEST2_OUTPUT):
	$(MAKE) TARGET=$(QUEST2_OUTPUT) all

$(QUEST3_OUTPUT):
	$(MAKE) TARGET=$(QUEST3_OUTPUT) all

# Rule to compile the shared library
$(DYNAMIC_LIBRARY):
	$(CC) s21_string.c -fPIC -shared -o $(DYNAMIC_LIBRARY)

# Clean up
clean:
	rm -f $(DYNAMIC_LIBRARY) $(QUEST1_OUTPUT) $(QUEST2_OUTPUT) $(QUEST3_OUTPUT)

# Rebuild everything
rebuild: clean all

# Format the code
format:
	clang-format -i s21_string.c
	clang-format -i s21_string_test.c

# Run memory checks
memory: $(QUEST1_OUTPUT)
	valgrind --tool=memcheck --leak-check=yes $(QUEST1_OUTPUT)
