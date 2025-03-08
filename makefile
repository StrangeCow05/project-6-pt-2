heap: address.o date.o main.o
	g++ -g address.o date.o main.o -o heap

main.o: address.h date.h main.cpp
	g++ -c -g main.cpp

address.o: address.h address.cpp
	g++ -c -g address.cpp

date.o: date.h date.cpp
	g++ -c -g date.cpp

student.o: address.h date.h student.h student.cpp
	g++ -c -g student.cpp

run: heap
	./heap

debug: heap
	gdb heap

valgrind: heap
	valgrind ./heap

clean:
	rm *.o
	rm heap
