CC = g++
FLAGS = -std=c++20 -Wpedantic
TARGET=decorated_string

$(TARGET) : $(TARGET).hpp $(TARGET).cpp
	$(CC) $(FLAGS) -o $(TARGET).o -c $(TARGET).cpp
