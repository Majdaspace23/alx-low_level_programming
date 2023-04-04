#include <stdio.h>

int main() {
    int a[] = {5, 10, 98, 3, 7};
    int *p = &a[0];
    
    printf("a[2] = %d\n", *(p + 2)); // added line
    
    return 0;
}
