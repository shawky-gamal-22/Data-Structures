#include <stdio.h>
#include <stdlib.h>
#include "queue.c"
int main()
{
    Queue q ;
    CreateQueue(&q) ;
    Append('x',&q) ;
    int siz = QueueSize(&q) ;
    printf(siz) ;
    return 0;
}
