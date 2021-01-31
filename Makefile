sliding_tile_puzzle: main.cpp
	g++ -c main.cpp -o main.o
	g++ main.o -o sliding_tile_puzzle

clean:
	rm -f main.o sliding_tile_puzzle
