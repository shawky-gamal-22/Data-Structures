#ifndef QUQUE_H_INCLUDED
#define QUQUE_H_INCLUDED
#define QueueEntry char
typedef struct queuenode {

    QueueEntry entry ;
    struct queuenode *next ;
}QueueNode ;

typedef struct queuee {
    QueueNode *frontt ;
    QueueNode *rear ;
    int siz  ;
} Queue ;

#endif // QUQUE_H_INCLUDED

int Append (QueueEntry, Queue *);
void Serve(QueueEntry *, Queue *);
int QueueEmpty(Queue *);
int QueueFull(Queue *);
void CreateQueue(Queue *);
int QueueSize(Queue *);
void ClearQueue	(Queue *);
void TraverseQueue(Queue *, void (*)(QueueEntry));
