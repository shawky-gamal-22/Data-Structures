#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define MAXSTACK  100
#define StackEntry  char
typedef struct stack{
	int top;
	StackEntry entry[MAXSTACK];
} Stack;

#endif // STACK_H_INCLUDED




void Push(StackEntry, Stack *);
void Pop(StackEntry *, Stack *);
int StackEmpty(Stack *);
int StackFull(Stack *);
void CreateStack(Stack *);
void StackTop(StackEntry *, Stack *);
int	StackSize(Stack *);
void ClearStack(Stack *);
void TraverseStack(Stack *, void (*)(StackEntry));
