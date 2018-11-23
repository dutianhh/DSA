
#define MaxSize  <储存数据元素的最大个数>
typedef struct {
	ElementType Data[MaxSize];
	int Top;
} Stack;


void Push( Stack *PtrS, ElementType item )
{
    if ( PtrS->Top == MaxSize-1 ) {
 printf(“堆栈满”);  return;
 }else {
  PtrS->Data[++(PtrS->Top)] = item;
      return;
    }
}

ElementType Pop( Stack *PtrS )
{
    if ( PtrS->Top == -1 ) {
           printf(“堆栈空”);
           return ERROR; /* ERROR是ElementType的特殊值，标志错误 */
    } else 
           return ( PtrS->Data[(PtrS->Top)--] );
}
*********************************************************

/*用一个数组实现两个堆栈*/
/*一种比较聪明的方法是使这两个栈分别从数组的两头开始向中间生长；当两个栈的栈顶指针相遇时，表示两个栈都满了。此时，最大化地利用了数组空间。*/
#define MaxSize <存储数据元素的最大个数>
struct DStack {
     ElementType Data[MaxSize];   
     int Top1;   /* 堆栈１的栈顶指针 */ 
     int Top2;   /* 堆栈２的栈顶指针 */
} S;
S.Top1 =  -1; 
S.Top2 = MaxSize;


void Push( struct DStack *PtrS, ElementType item, int Tag )
{  /* Tag作为区分两个堆栈的标志，取值为1和2 */
   if ( PtrS->Top2 – PtrS->Top1 == 1) {  /*堆栈满*/
printf(“堆栈满”);   return ;
   }
   if ( Tag == 1 ) /* 对第一个堆栈操作 */
      PtrS->Data[++(PtrS->Top1)] = item;
   else              /* 对第二个堆栈操作 */
      PtrS->Data[--(PtrS->Top2)] = item;
}
ElementType Pop( struct DStack *PtrS, int Tag )
{  /* Tag作为区分两个堆栈的标志，取值为1和2  */
  if ( Tag == 1 ) {  /* 对第一个堆栈操作  */
      if ( PtrS->Top1 == -1 ) { /*堆栈1空 */
     printf(“堆栈1空”);   return NULL;
      } else return PtrS->Data[(PtrS->Top1)--];
   } else {          /* 对第二个堆栈操作 */
      if ( PtrS->Top2 == MaxSize ) { /*堆栈2空 */
           printf(“堆栈2空”);  return NULL;
      } else  return PtrS->Data[(PtrS->Top2)++];
}
}
********************************************************
