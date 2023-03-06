#include <stdio.h>





void listArray(int *pntr, int size) {
    int x; 
    for (x = 0; x < size; x++) {
        printf("array[%d]=%d\n", x, pntr[x]);
    };

};

int main() {
    int arr[] = { 3, 1, 7, 4, 9, 2, 8, 5 };


    return 0;
}
