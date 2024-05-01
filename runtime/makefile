CC=g++
FLAGS=-Wpedantic -O3
T=decstr_def
VERSION=0.1.0

install: $T
	cp ../decstr_enum.hpp /usr/include/decstr_enum.hpp
	cp $T.hpp /usr/include/$T.hpp
	mv $T.o /usr/lib/libdecstr.so.$(VERSION)

$T: $T.hpp $T.cpp
	$(CC) $(FLAGS) -o $T.o -c $T.cpp
