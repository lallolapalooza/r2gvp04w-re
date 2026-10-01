CC      ?= gcc
CFLAGS  ?= -std=c11 -O2 -Wall -Wextra -Werror
TARGET   = vpu_fw_verify
SRC      = vpu_fw_verify.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $(SRC)

clean:
	rm -f $(TARGET)

.PHONY: all clean
