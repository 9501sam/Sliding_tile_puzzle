#include <iostream>
#include <cstdio>
using namespace std;

#define SIZE 3

void printTable(int table[][SIZE])
{
    system("clear");
    printf("+---+---+---+\n");
    for(int i = 0; i < SIZE; i++) {
        printf("| %d | %d | %d |\n", table[i][0], table[i][1], table[i][2]);
        printf("+---+---+---+\n");
    }
}

int main()
{
    int table[SIZE][SIZE] = {};

    printTable(table);

    return 0;
}
