#include <stdio.h>
#include <stdlib.h>
#include "stack.c"
int main()
{
    struct stackk s ;
    CreateStack(&s) ;
    Push('c',&s) ;
    printf(StackSize(&s)) ;
    return 0;
}
