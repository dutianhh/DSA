#include<stdio.h>
#include<stdlib.h>
#include"TestSqList.h"

//高版本studio中scanf被认为不安全 用scanf-s


int main()
{
	Status s;
	SqListPtr list=NULL;
	int pos,opt=1,size;
	ElemType e,*data;
	while(opt!=5)
	{
	printf("SElections:\n");
	printf("1:Create:\n");
	printf("2:Clear:\n");
	printf("3:Location:\n");
	printf("4:Length:\n");
	printf("5:End:\n");
	scanf(%d",&opt);
	switch(opt)
	{
		case 1:
			printf("length:\n");
			scanf("%d",&size);
			data = (Element*)malloc(size*sizeof(ElemType);
			if(data == NULL)
				break;
			
			printf("elements:\n");
			for(int i=0;i<size;++i)
				scanf("%d",&data[i]);
			s = Test_CreateList(list,data,size);
			if(s!=success)
				printf("failed\n");
			break;
		case 2:
			printf("length:\n");//先建立线性表，
			scanf("%d",&size);
			data = (Element*)malloc(size*sizeof(ElemType);
			if(data == NULL)
				break;
			
			printf("elements:\n");
			for(int i=0;i<size;++i)
				scanf("%d",&data[i]);
			s = Test_CreateList(list,data,size);
			if(s==success)//建立成功
			{
				if(!List_Empty(list))
				{
					List_Clear(list);
					if(List_Empty(list))
					{
						printf("successed\n");
					}
				}
			}
			
			break;
		case 3:
			printf("length:\n");//同样，先建立线性表
			scanf("%d",&size);
			data = (Element*)malloc(size*sizeof(ElemType);
			if(data == NULL)
				break;
			
			printf("elements:\n");
			for(int i=0;i<size;++i)
				scanf("%d",&data[i]);
			s = Test_CreateList(list,data,size);
			if(s==success)
			{	
				printf("The searched element:\n");
				scanf("%d",&e);
				Test_Locate(list,e);
			}
			break;
		case 4:
			printf("length:\n");
			scanf("%d",&size);
			data = (Element*)malloc(size*sizeof(ElemType);
			if(data == NULL)
				break;
			
			printf("elements:\n");
			for(int i=0;i<size;++i)
				scanf("%d",&data[i]);
			s = Test_CreateList(list,data,size);
			if(s==success)
			{
				Test_Size(list);
			}
			break;
		default:
			break;
		
	}
	
	}
	return 0;
}