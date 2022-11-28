hash: closed_hashing.o
	g++ closed_hashing.o -o hash
closed_hashing.o: closed_hashing.cpp
	g++ -c closed_hashing.cpp
clean:
	rm *.o hash