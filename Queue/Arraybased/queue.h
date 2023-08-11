#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#define QueueEntry char
#define MAXQUEUE 100
typedef struct queuee {
    int frontt ;
    int rear ;
    int sizee ;
    QueueEntry entry [MAXQUEUE] ;

} Queue ;

#endif // QUEUE_H_INCLUDED

void Append (QueueEntry, Queue *);
void Serve(QueueEntry *, Queue *);
int QueueEmpty(Queue *);
int QueueFull(Queue *);
void CreateQueue(Queue *);
int QueueSize(Queue *);
void ClearQueue	(Queue *);
void TraverseQueue(Queue *, void (*)(QueueEntry));
