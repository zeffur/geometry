FLAG := -std=c99
FLAGS := -std=c11
BIN_DIR := ./bin
BUILD_DIR := ./build
BUILDTEST_DIR := ./build/test
SRC_DIR := ./src
BINTEST_DIR := ./bin/test
TEST_DIR := ./test
CC := gcc -Wall -Werror
C := gcc
.PHONY: clean all test_run

all: $(BIN_DIR)/main $(BINTEST_DIR)/testing

$(BIN_DIR)/main: $(BUILD_DIR)/main.o $(BUILD_DIR)/geometry.o $(BUILD_DIR)/input.o
	$(CC) $(BUILD_DIR)/main.o $(BUILD_DIR)/geometry.o $(BUILD_DIR)/input.o -o $(BIN_DIR)/main -lm $(FLAG)

$(BUILD_DIR)/main.o: $(SRC_DIR)/main.c
	$(CC) -c $(SRC_DIR)/main.c -o $(BUILD_DIR)/main.o $(FLAG)

$(BUILD_DIR)/geometry.o: $(SRC_DIR)/geometry.c
	$(CC) -c $(SRC_DIR)/geometry.c -o $(BUILD_DIR)/geometry.o $(FLAG)

$(BUILD_DIR)/input.o: $(SRC_DIR)/input.c
	$(CC) -c $(SRC_DIR)/input.c -o $(BUILD_DIR)/input.o $(FLAG)



$(BINTEST_DIR)/testing: $(BUILDTEST_DIR)/main.o $(BUILDTEST_DIR)/geometry.o $(BUILD_DIR)/geometry.o $(BUILDTEST_DIR)/input.o
	$(C) $(BUILDTEST_DIR)/main.o $(BUILDTEST_DIR)/geometry.o $(BUILD_DIR)/geometry.o $(BUILDTEST_DIR)/input.o -o $(BINTEST_DIR)/testing -lm $(FLAGS)

$(BUILDTEST_DIR)/main.o: $(TEST_DIR)/main.c
	$(C) -c $(TEST_DIR)/main.c -o $(BUILDTEST_DIR)/main.o $(FLAGS)

$(BUILDTEST_DIR)/geometry.o: $(TEST_DIR)/geometry.c
	$(C) -c $(TEST_DIR)/geometry.c -o $(BUILDTEST_DIR)/geometry.o $(FLAGS)

$(BUILDTEST_DIR)/input.o: $(TEST_DIR)/input.c
	$(C) -c $(TEST_DIR)/input.c -o $(BUILDTEST_DIR)/input.o $(FLAGS)

clean:
	rm -rf $(BIN_DIR)/main
	rm -rf $(BINTEST_DIR)/testing
	rm -rf $(BUILD_DIR)/*.o
	rm -rf $(BUILDTEST_DIR)/*.o

test_run: all
	$(BINTEST_DIR)/testing
