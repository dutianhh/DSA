typedef struct stack
{
    int top;//存放栈顶元素，-1表示空，stack_size-1表示满
    StackEntry *elem;
    int stack_size;
    
}Stack,*StackPtr;

Status Stack_Push(StackPtr s,StackEntry item)
{
    Status outcome = success;
    if(s->top==stack_size-1)
      outcome = overflow;
     else
      {
        s->top++;
        s->elem[s->top] = item;
       }
       
       return outcome;
}

Status Stack_Pop(StackPtr s,StackEntry *item)
{
    Status outcome = success;
    if(s->top==-1)
      outcome = underflow;
    else
      item = s->elem[s->top--];
    return outcome;
 }


Status Stack_Top(StackPtr s,StackEntry *item)
{
     Status outcome = success;
     if(Stack_Empty(s))
      outcome = underflow;//下溢
      else
        *item = s->elem[s->top];
      return outcome;
}
