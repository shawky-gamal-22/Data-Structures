#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#include "queue.h"


void CreatQueue (Queue *pq){
    pq->frontt = 0 ;
    pq->rear = -1 ;
    pq->sizee= 0 ;
}

void Append (QueueEntry item , Queue *pq){

    pq->rear = (pq->rear +1) % MAXQUEUE ;
    pq->entry[pq->rear] =item ;
    pq->sizee ++ ;
}

void Serve (QueueEntry *pitem , Queue *pq){

    *pitem = pq->entry[pq->frontt] ;
    pq->frontt = (pq->frontt +1) %MAXQUEUE ;
    pq->sizee -- ;
}

int QueueEmpty (Queue *pq) {

    return !(pq->sizee) ;
}

int QueueFull (Queue *pq) {

    return (pq->sizee ==MAXQUEUE ) ;
}

int QueueSize (Queue *pq){

    return pq->sizee ;
}

void ClearQueue (Queue *pq) {
    pq->frontt = 0 ;
    pq->rear = -1 ;
    pq->sizee= 0 ;
}

void TraverseQueue(Queue *pq , void (*pf)(QueueEntry)){

    int pos , s ;
    for (pos = pq->frontt ,s= 0 ; s < pq->sizee ; s++){

        (*pf)(pq->entry[pos]) ;
        pos = (pos+1) %MAXQUEUE ;
    }

}






