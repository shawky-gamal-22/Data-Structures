#include <stdio.h>
#include <stdlib.h>

#include "quque.h"


void CreateQueue (Queue *pq) {
    pq->frontt = NULL ;
    pq->rear = NULL ;
    pq->siz = 0 ;
}

int Append(QueueEntry element , Queue *pq){

    QueueNode *pn = (QueueNode *)malloc(sizeof(QueueNode)) ;

    if(!pn) return 0 ;
    else{
        pn->entry = element ;
        pn->next = NULL ;
        if(!pq->rear) pq->frontt = pn;
        else pq->rear->next = pn ;
        pq->rear = pn ;
        pq->siz ++ ;
        return 1 ;
    }
}

void Serve(QueueEntry *pelement ,Queue *pq){
    QueueNode *pn = pq->frontt ;
    *pelement = pn->entry ;
    pq->frontt = pn->next ;
    free(pn) ;
    if(!pq->frontt) pq->rear = NULL ;
    pq->siz -- ;
}

int QueueEmpty (Queue *pq){
    return !pq->frontt ;
}
int QueueFull (Queue *pq){
    return 0 ;
}
int QueueSize(Queue *pq){
    return pq->siz ;
}

void ClearQueue(Queue *pq){
    while(pq->frontt){
        pq->rear = pq->frontt->next ;
        free(pq->frontt) ;
        pq->frontt = pq->rear ;
    }
    pq->siz = 0 ;
}

void TraverseQueue(Queue *pq, void(*pf)(QueueEntry)){
    QueueNode *pn ;
    for(pn=pq->frontt ; pn ; pn=pn->next){
        (*pf)(pn->entry) ;
    }
}










