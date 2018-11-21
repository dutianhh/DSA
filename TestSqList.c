#include<stdio.h>
#include"Test_SqList.h"
#include<stdlib.h>


Status Test_CreateList(SqListPtr list，ElemTypt data[],int n)
{
	Status s = fail；
	int i;
	s = List_Init(list);
	if(s==success)
	{
		for(i = 1;i<=n;++i)
		{
			s = List_Insert(list ,i,data[i]);
			if(s!=success)
				break;
		}
		List_Print(list);
	}
	return s;
}
Status Test_ClearList(SqListPtr list)//清除元素
{
	Status s = fail;
	if(!List_Empty(list))//
	{
		List_Clear(list)
		if(List_Empty(list))
		{
			s = success;
		}
	}
	return s;
		
}
Status Test_RetrivalPriorNext(SqListPtr list,int pos)
{
	Status s = range_error;
	ElemTypt e;
	s = List_Retrival(list,pose,&e);
	return s;
}
Status Test_Locate(SqListPtr list,ElemTypt e)
{
	Status s;
	int pos;
	s = List_Locate(list,e,&pos);
	if(s==success)
	{
		printf("%d位置是%d\n",e,pos);
		
	}
	else printf("failed");
	return s;
}
void Test_Size(SqListPtr list)
{
	int len;
	len  =List_Size(list);
	printf("length:%d\n",len);
}