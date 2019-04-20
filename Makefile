FLAGS := -std=99
BIN_DIR := ./bin
BUILD_DIR := ./build
SRC_DIR := ./src
CC := gcc -Wall -Werror
.PHONY: clean

all: $(BIN_DIR)/main

$(BIN_DIR)/main: $(BUILD_DIR)/main.o $(BUILD_DIR)/geometry.o $(BUILD_DIR)/input.o
	$(CC) $(BUILD_DIR)/main.o $(BUILD_DIR)/geometry.o $(BUILD_DIR)/input.o -o $(BIN_DIR)/main -lm $(FLAG)

$(BUILD_DIR)/main.o: $(SRC_DIR)/main.c
	$(CC) -c $(SRC_DIR)/main.c -o $(BUILD_DIR)/main.o $(FLAG)

$(BUILD_DIR)/geometry.o: $(SRC_DIR)/geometry.c
	$(CC) -c $(SRC_DIR)/geometry.c -o $(BUILD_DIR)/geometry.o $(FLAG)

$(BUILD_DIR)/input.o: $(SRC_DIR)/input.c
	$(CC) -c $(SRC_DIR)/input.c -o $(BUILD_DIR)/input.o $(FLAG)

clean:
	rm -rf $(BIN_DIR)/main
	rm -rf $(BUILD_DIR)/*.o
