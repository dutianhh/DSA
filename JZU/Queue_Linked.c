/*栈的链式存储结构实际上就是一个单链表，叫做链栈。插入和删除操作只能在链栈的栈顶进行；栈顶指针Top就是链表的头指针。*/



typedef struct Node{
      ElementType  Data;
      struct Node  *Next;
}QNode; 
typedef  struct {        /* 链队列结构  */
     QNode  *rear;      /* 指向队尾结点 */
     QNode  *front;     /* 指向队头结点 */
} LinkQueue;
LinkQueue  *PtrQ ;

/*不带头结点的链式队列出队操作的一个示例：*/
ElementType DeleteQ ( LinkQueue  *PtrQ )
{    Qnode  *FrontCell; 
      ElementType FrontElem;
 
      if  ( PtrQ->front == NULL) {
             printf(“队列空”);     return ERROR;
      } 
      FrontCell = PtrQ->front;
      if ( PtrQ->front == PtrQ->rear)     /* 若队列只有一个元素 */
             PtrQ->front = PtrQ->rear = NULL;   /* 删除后队列置为空 */
      else                     
             PtrQ->front = PtrQ->front->Next;
      FrontElem = FrontCell->Data;
      free( FrontCell );                            /* 释放被删除结点空间  */
      return  FrontElem;
}
