CXX = g++

testCar.o: testCar.cpp Car.hpp
	$(CXX) -c testCar.cpp

Car.o: Car.cpp Car.hpp
	$(CXX) -c Car.cpp

testCar: testCar.o Car.o
	$(CXX) Car.o testCar.o -o testCar

clean:
	rm -f testCar
	rm -f *.o