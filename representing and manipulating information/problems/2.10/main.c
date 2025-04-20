#include <stdio.h>

void inplace_swap(int *x, int *y){
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

int main(){
    int a = 69;
    int b = 420;
    printf("before swap: a: %d, b: %d\n", a, b);
    inplace_swap(&a, &b);
    printf("swapped nums: a: %d, b: %d\n", a, b);
}

//heres how this work:
// *x = a
// *y = b 

// *y = *x ^ *y 
// [*y = (a ^ b)]

// *x = *x ^ *y
// [*x = (a ^ (a ^ b) = b ]

// *x = *x ^ *y
// [*x = b ^ (a ^ b) = a]
