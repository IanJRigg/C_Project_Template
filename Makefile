# Directory Locations
SRC_DIR := src
OBJ_DIR := obj

# Files Lists
C_FILES   := $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(C_FILES))

# Compiler options
LD_FLAGS  := $(LDFLAGS)
CPPFLAGS  := $(CPPFLAGS)
CFLAGS    := $(CFLAGS) -Wall -Wextra -Wpedantic

all: $(OBJ_DIR) scan

scan: $(OBJ_FILES)
	$(info $(OBJ_FILES))
	$(info $(C_FILES))
	$(CC) $(LDFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) scan
	$(RM) -rf $(OBJ_DIR)


$(OBJ_DIR):
	mkdir -p $@