CC = clang
CFLAGS = -Wall -Wextra -g
TARGET = super_trunfo_exec
SRC = super_trunfo.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
