CC = gcc
CFLAGS = -Wall -Wextra -Werror -Wpedantic
TARGET = data_buffer
SRC = buffer.c main.c
OBJ = $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET)