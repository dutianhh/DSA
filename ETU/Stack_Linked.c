#define StackEntry int

typedef struct node{
	StackEntry entry;
	struct node *next;

}StackNode,*StackNodePtr;

typedef struct stack//栈类型定义
{
	StackNodePtr top;//指向栈顶节点，空时top=NULL
}Stack,*StackPtr;

Status Stack_Push(StackPtr s,StackEntry item)
{
	Status outcome = success;
	StackNodePtr np = MakeNode(item);

	if(np == NULL)
		outcome = overflow;
	else {
		np->next = s->top;//栈顶为链表头处
		s->top = np;
	}

	return outcome;
}



