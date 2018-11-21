//线性表顺序存储

#pragma once//只编译一次
enmu Status{
	success,fail,fatal,range_error
};
typedef int ElemType;

#define bool int//c中没有bool
#define LIST_INIT_SIZE 100
#define LIST_INCRESMENT 10//扩充时的增量


typedef struct SqList
{
	ElemType *elem;//elem[list_size];
	int list_size;//最大尺寸
	int length;//当前队列长度

}SqList,*Ptr,*SqListPtr;

Status List_Init(SqListPtr L);
void List_Destory(SqListPtr L);
void List_Clear(SqListPtr L);
bool List_Empty(SqListPtr L);
int List_Size(SqListPtr L);
Status List_Retrival(SqListPtr L,int pos,ElemType *ele);
Status List_Locate(SqListPtr L,ElemType elem,int *pos);
Status List_Insert(SqListPtr L,int pos,ElemType elem);
Status Lisr_Delete(SqListPtr L ,int pos);

void List_Print(SqListPtr L);