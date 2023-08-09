#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#include "stack.h"



void Push(StackEntry item, Stack *ps){
	StackNode *pn=(StackNode *)malloc(sizeof(StackNode));
	pn->entry = item ;
	pn->next=ps->top;
	ps->top=pn;
	ps->sizee ++ ;
}

void Pop(StackEntry *pitem, Stack *ps){
	StackNode *p;

	*pitem=ps->top->entry;
	p=ps->top;
	ps->top=ps->top->next;
	free(p);
	ps->sizee -- ;
}

int StackEmpty(Stack *ps){
	return ps->top== NULL;
}

int StackFull(Stack *ps){
	return 0;
}

void CreateStack (Stack *ps){
	ps->top=NULL;
	ps->sizee =0 ;
}

void StackTop(StackEntry *pitem, Stack *ps){
	*pitem=ps->top->entry;
}

int	StackSize(Stack *ps){
    return ps->sizee ;
}

void ClearStack(Stack *ps){
	StackNode *p=ps->top;
	while(p){
		p=p->next;
		free(ps->top);
		ps->top=p;
	}
	ps->sizee = 0 ;
}

void TraverseStack(Stack *ps, void (*pvisit)(StackEntry)){
	for(StackNode *p=ps->top; p; p=p->next)
		(*pvisit)(p->entry);

}
