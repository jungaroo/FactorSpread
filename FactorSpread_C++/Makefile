build: main.o FactorSpread.o
	g++ main.o FactorSpread.o -o spread

main.o: main.cpp
	g++ -c main.cpp

FactorSpread.o: FactorSpread.cpp FactorSpread.h
	g++ -c FactorSpread.cpp

clean:
	rm *.o spread
