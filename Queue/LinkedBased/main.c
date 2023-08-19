#include <stdio.h>
#include <stdlib.h>
#include "quque.h"
int main()
{
    Queue q ;
    CreateQueue(&q) ;
    QueueEntry x = 'x' ;
    Append(x,&q) ;
    int siz = QueueSize(&q) ;
    printf("%d",siz) ;
    return 0;
}
