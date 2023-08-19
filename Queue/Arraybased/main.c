#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
int main()
{
    Queue q ;
    CreateQueue(&q) ;
    Append('x',&q) ;
    int siz = QueueSize(&q) ;
    printf("%d",siz) ;
    return 0;
}
