SOURCES = $(shell find . -type f -name '*.cpp')
HEADERS = $(shell find . -type f -name '*.hpp')
OBJECTS = $(SOURCES:cpp=o)

BIN_DIR = ./bin
SRC_DIR = ./src
EXE_NAME = physis
GXX = g++

.PHONY: all run clean

all: $(OBJECTS)
	$(GXX) $(BIN_DIR)/*.o -o $(BIN_DIR)/$(EXE_NAME)

run: all
	$(BIN_DIR)/$(EXE_NAME)

clean:
	rm -r $(BIN_DIR)/*

%.o: %.cpp
	$(GXX) -c $< -o bin/$(notdir $@)