#include <iostream>
#include <cstdio>
#include <termio.h>
using namespace std;

#define SIZE 3

void printTable(char table[][SIZE])
{
    system("clear");
    printf("+---+---+---+\n");
    for(int i = 0; i < SIZE; i++) {
        printf("| %c | %c | %c |\n", table[i][0], table[i][1], table[i][2]);
        printf("+---+---+---+\n");
    }
    printf(":");
}

void swap(char* a, char* b)
{
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    char table[SIZE][SIZE] = {'4', '7', '2',
                                '8', '6', '1',
                                '3', '5', ' '};
    int r = 2;
    int c = 2;

    char input = '\0';
    while(input != 'q'){
        switch(input){
            case 'l':
            case 'd':
                if(c-1 >= 0){
                    swap(&table[r][c], &table[r][c-1]);
                    c--;
                }
                break;
            case 'k':
            case 'w':
                if(r+1 < SIZE){
                    swap(&table[r][c], &table[r+1][c]);
                    r++;
                }
                break;
            case 'j':
            case 's':
                if(r-1 >= 0){
                    swap(&table[r][c], &table[r-1][c]);
                    r--;
                }
                break;
            case 'h':
            case 'a':
                if(c+1 < SIZE){
                    swap(&table[r][c], &table[r][c+1]);
                    c++;
                }
                break;
            default:
                break;
        }
        printTable(table);
        cin >> input;
    }

    return 0;
}
