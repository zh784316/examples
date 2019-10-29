CXXFLAGS=-I../lib -I../

all: build runall

build: test_fib

test_fib: test_fib.o
	$(CXX) -o test_fib $^

test_fib.o: test_fib.cc ../fib.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

runall:
	./test_fib

clean:
	-rm -f test_fib *.o