#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
int main()
{
    struct stackk s ;
    CreateStack(&s) ;
    StackEntry x = 'x'
    Push(x,&s) ;
    printf("%d",StackSize(&s)) ;
    return 0;
}
