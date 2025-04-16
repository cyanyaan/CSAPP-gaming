#include <stdio.h>

typedef char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    for (int i = 0; i < len; i++)
    {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x) {
    show_bytes((char *) &x, sizeof(int));
}

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

int main(){
    int a = 2607352;
    float b = 3510593.0;
    show_int(a);
    show_float(b);
}