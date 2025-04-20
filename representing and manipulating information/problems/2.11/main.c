#include <stdio.h>

void inplace_swap(int *x, int *y){
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverse_array(int arr[], int count) {
    int first, last;
    for (first = 0, last = count-1; first <= last; first++,last--)
    inplace_swap(&arr[first], &arr[last]);
}

int main(){
    int array[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    int size = sizeof(array)/sizeof(array[0]);

    reverse_array(array, size);

    printf("reversed array: ");
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}