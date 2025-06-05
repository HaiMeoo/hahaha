LIB_NAME = libmymath.a
TEST_NAME = test-mymath

SRC = libmymath.c
OBJ = libmymath.o

CC = gcc
AR = ar rcs

all: mymath test

mymath: $(OBJ)
	$(AR) $(LIB_NAME) $(OBJ)
test: test-mymath.c mymath
	$(CC) $(TEST_NAME) test-mymath.c -L. -lmymath
clean: 
	rm -f $(OBJ) $(LIB_NAME) $(TEST_NAME)
	
	
$(OBJ) : $(SRC)
	$(CC) -c $(SRC)
	
