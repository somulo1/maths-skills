# Compiler and flags
CC = gcc
CFLAGS = -Wall -g
LIBS = -lm  # Link with the math library

# Directories
SRCDIR = helperfunctions

# Source files
SRCS_MAIN = main.c
SRCS_TEST = test_file.c
SRCS_ALL = $(wildcard $(SRCDIR)/*.c)

# Object files
OBJS_MAIN = $(SRCS_MAIN:.c=.o)
OBJS_TEST = $(SRCS_TEST:.c=.o)
OBJS_ALL = $(SRCS_ALL:.c=.o)

# Executables
EXEC_MAIN = main_executable
EXEC_TEST = test_executable

# Default target
all: $(EXEC_MAIN) $(EXEC_TEST)

# Rule for linking the main executable
$(EXEC_MAIN): $(OBJS_MAIN) $(OBJS_ALL)
	$(CC) $(CFLAGS) $^ -o $@ $(LIBS)

# Rule for linking the test executable
$(EXEC_TEST): $(OBJS_TEST) $(OBJS_ALL)
	$(CC) $(CFLAGS) $^ -o $@ $(LIBS)

# Rule for compiling C source files
%.o: %.c
	$(CC) $(CFLAGS) -I. -c $< -o $@

# Target to run the main executable
run_main: $(EXEC_MAIN)
	./$(EXEC_MAIN)

# Target to run the test executable
run_test: $(EXEC_TEST)
	./$(EXEC_TEST)

# Clean target to remove object files and executables
clean:
	rm -f $(OBJS_MAIN) $(OBJS_TEST) $(OBJS_ALL) $(EXEC_MAIN) $(EXEC_TEST)
