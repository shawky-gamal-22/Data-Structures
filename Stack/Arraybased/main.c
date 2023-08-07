#include <stdio.h>
#include <stdlib.h>
#include "stack.c"
int main()
{
    Stack s ;
    CreateStack (&s ) ;
    StackEntry m = 'x' ;
    Push(m , &s) ;
    Push(m,&s) ;
    return 0 ;
}
