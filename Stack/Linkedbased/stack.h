#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define StackEntry char

typedef struct stacknode{
	StackEntry entry;
	struct stacknode *next;
}StackNode;

typedef struct stackk{
	StackNode *top;
	int sizee ;
}Stack;
#endif // STACK_H_INCLUDED
void Push(StackEntry, Stack *);
void Pop(StackEntry *, Stack *);
int StackEmpty(Stack *);
int StackFull(Stack *);
void CreateStack(Stack *);
void StackTop(StackEntry *, Stack *);
int StackSize(Stack *);
void ClearStack(Stack *);
void TraverseStack(Stack *, void (*)(StackEntry));
