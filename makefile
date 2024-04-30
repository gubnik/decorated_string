CC = g++
FLAGS = -std=c++20

example: example.cpp decorated_string.hpp
	$(CC) $(FLAGS) -o example example.cpp
