CXX = g++

test.o: test.cpp Derived.hpp
	$(CXX) -c test.cpp

Derived.o: Derived.cpp Derived.hpp Base.cpp Base.hpp
	$(CXX) -c Derived.cpp

Base.o: Base.cpp Base.hpp
	$(CXX) -c Base.cpp

test: test.o Derived.o Base.o
	$(CXX) Base.o Derived.o test.o -o test

clean:
	rm -f test
	rm -f *.o