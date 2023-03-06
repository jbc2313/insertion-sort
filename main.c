#include <stdio.h>



void listArray(int *pntr, int size) {
    int x; 
    for (x = 0; x < size; x++) {
        printf("array[%d]=%d\n", x, pntr[x]);
    };

};


void insertion(int *pntr, int size) {
   int x, tmp, z;
   for ( x = 1; x < size; x++) {
        tmp = pntr[x];
        z = x - 1;

        while ( z >= 0 && pntr[z] > tmp) {
            pntr[z + 1] = pntr[z];
            z = z - 1;
        };

        pntr[z + 1] = tmp;
   };

};


int main() {
    int arr[] = { 3, 1, 7, 4, 9, 15, 2, 8, 5, 7 };
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    listArray(arr, arrSize);
    insertion(arr, arrSize); 
    printf("Array was sorted!\n");
    listArray(arr, arrSize);
    return 0;
}




