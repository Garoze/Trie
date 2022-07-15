# _*_ MakeFile _*_

CC     := g++
CFLAGS := -w -g -Wall -std=c++17

SRC    := src
BUILD  := build

SOURCES := $(shell find $(SRC/**) -type f -regex ".*\.cpp")
HEADERS := $(shell find $(SRC/include/**) -type f -regex ".*\.hpp")
OBJECTS := $(patsubst %, $(BUILD)/%, $(notdir $(SOURCES:.cpp=.cpp.o)))

.PHONY: default config all clean

TARGET := trie

all: $(TARGET)

$(BUILD)/%.cpp.o: $(SRC)/%.cpp $(HEADERS)
	@echo "Building: $@"; $(CC) $(CFLAGS) $(INC) -o $@ -c $<

$(TARGET): $(OBJECT)
	@echo "Linking: $@"; $(CC) $^ -o $(TARGET) $(LIB)

config: $(eval SHELL:=/usr/bin/env bash)
	@echo $(shell ./configure.sh)

clean:
	@echo "Cleaning $(TARGET), $(BUILD)"; $(RM) -rf $(OBJECT) $(TARGET)

