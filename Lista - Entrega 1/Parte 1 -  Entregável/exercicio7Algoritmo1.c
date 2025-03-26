#include<stdio.h>

int main() {

    int count = 0; 
    int i;
    int n = 7;

    for (i = 0; i < n ; i++) {
        if (i % 2 == 1) { 
            count++; 
        }
    }

    printf("%d", count);
    
}

/*

loop 0 -> i = 0 -> 0 % 2 == 0 -> count = 0
loop 1 -> i = 1 -> 1 % 2 == 5 -> count = 1
loop 2 -> i = 2 -> 2 % 2 == 0 -> count = 1
loop 3 -> i = 3 -> 3 % 2 == 5 -> count = 2
loop 4 -> i = 4 -> 4 % 2 == 0 -> count = 2
loop 5 -> i = 5 -> 5 % 2 == 5 -> count = 3
loop 6 -> i = 6 -> 6 % 2 == 0 -> count = 3

encerrado por: i + 1 > n

count == 3

*/ 