#include <stdio.h>
#include <string.h>

typedef char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    for (int i = 0; i < len; i++)
    {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

const char *sex = "mnopqr";
int main(){
    show_bytes((byte_pointer) sex, strlen(sex));
}