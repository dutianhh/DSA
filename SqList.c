#include<stdio.h>
#include"SqList.h"



Status List_Init(SqListPtr L)
{
	Status s=fail;//对空表初始化，
	if(L==NULL)
	{
		if(L->elem)
		{
			
		L->elem = (ElemType *)malloc(LIST_INIT_SIZE+1*sizeof(ElemType));//此处加1，以便于从1开始，第一个空间废弃不用
		L->lenth = 0;
		L->list_size = List_INIT_SIZE;
		s = success;
		}
	}
	return s;
}


void List_Destory(SqListPtr L)//销毁
{
	if(L)
	{
		if(L->elem)
		{
			free(L->elem);
			L->elem = NULL;
			L->length =  0;
			
		}
	}
}

void List_Clear(SqListPtr L)//清空
{
	if(L)
	{
		L->lenth = 0;
	}
}
bool List_Empty(SqListPtr L)//判断是否为空
{
	if(L)
	{
		if(L->lenth == 0)
			return 1;
		else return 0;
	}
}
int List_Size(SqListPtr L)
{
	if(L)
	{
		return L->length;
	}
}
	
Status List_Retrival(SqListPtr L,int pos,ElemType *elem)//检索retrieve,将pose处元素放在elem中
{
	Status s = range_error;//越界
	if(L)
	{
		if(pos >=1 && pos <= L->length)
		{
			*elem = L->elem[pos];//*elem = *L->elem+pose;??
			s = success;
		}
	}
	return Status;
}
Status List_Locate(SqListPtr L,ElemType elem,int *pos)
{
	Status s = range_error;
	if(L)
	{
		for(int i = 1;i<= L->lenth;++i)
		{
			if(L->elem[i] == elem)
			{
				*pos =i;
				s = success;
				break;
			}
		}
	}
	return S;
}
Status List_Insert(SqListPtr L,int pos,ElemType elem)//先检查越界，在检查空间是否满,length +1
{
	Status s = range_error;
	if(L)
	{
		if(pos >=1 && pos <= L->lenth+1)
		{
			if(L->length < =L->list_size) 
			{
				for(int i = L->length;i >=pos;i--)
				L->elem[i+1]= L->elem[i];
				L->length++;
				s = success;
			
			}
		}
	}
	return s;
}
Status Lisr_Delete(SqListPtr L ,int pos)
{
	Status s = range_error;
	int i;
	if(L)
	{
		if(pos>=1&&pos<=L->length)
		{
			for(i = pos;i<=L->length;i++)
				L->elem[i-1] = L->elem[i];
			L->length--;
			s = success;
			
		}
	}
	return s;
}

void List_Print(SqListPtr L)
{
	int i;
	if(L)
	{
		for(i = 1;i<=L->length;i++)
		{
			printf("%d ",L->elem[i]);
			if(i%10==0)
				printf("\n");
		}
	}
}