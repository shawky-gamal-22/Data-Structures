#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
int main()
{
    Stack s ;
    CreateStack (&s ) ;
    StackEntry m = 'x' ;
    Push(m , &s) ;
    Push(m,&s) ;
    int siz = StackSize(&s) ;
    pirntf("%d",siz) ;
    return 0 ;
}
