#include "main.h"
#include <stdio.h>
int main(void) 
{
    int n;
    int a[5];
    int *p;
    a[2] = 1024;
    p = &n;
    /* Assign 98 to the variable n using the pointer p */
    *(p) = 98;
    /* Print the updated value of a[2] */
    printf("a[2] = %d\n", a[2]);
    return (0);
}
