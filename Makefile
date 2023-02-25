EXEC = simple-compiler
BUILD_DIR = ./build
SRC_DIR = ./src

SOURCES = $(shell find $(SRC_DIR) -name '*.cpp')
HEADERS = $(shell find $(SRC_DIR) -name '*.hpp')
OBJECTS = $(SOURCES:%=$(BUILD_DIR)/%.o)

CXX = g++
CFLAGS = -std=c++20
LDFLAGS = 

$(BUILD_DIR)/$(EXEC): $(OBJECTS) 
	$(CXX) $^ -o $@ $(LDFLAGS)


$(BUILD_DIR)/%.cpp.o: %.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CFLAGS) -c $< -o $@


.PHONY: clean

clean:
	rm -r $(BUILD_DIR)