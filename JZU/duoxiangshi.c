#include <stdio.h>
#include <stdlib.h>
//typedef struct PolyNode *Polynomial;

typedef struct PolyNode{
 	int coef;
 	int expon;
 	struct PolyNode* link;
 }PolyNode,*Polynomial;

 void Attach(int c,int e,Polynomial *pRear)//pReal is pointer'pointer
 {
 	Polynomial P;

 	P = (Polynomial)malloc(sizeof(struct PolyNode));
 	P->coef = c;
 	P->expon = e;
 	P->link = NULL;
 	(*pRear)->link = P;
 	*pRear = P;
 }
 Polynomial ReadPoly()
 {
 	int N,c,e;
 	Polynomial P,Rear,t;

 	scanf("%d",&N);
 	P = (Polynomial)malloc(sizeof(struct PolyNode));
 	P->link =NULL;
 	Rear = P;//extra add a head pointer,add data after Rear
 	//if not do that ,you must judge if the Rear == NULL in the function  Attach()
 	while(N--)
 	{
 		scanf("%d %d",&c,&e);
 		Attach(c,e,&Rear);//address transport
 	}
 	t=P;P=P->link;free(t);//free that empty Node(the first one),and return the head NOde
 	return P;
 }
Polynomial Add(Polynomial p1,Polynomial p2)
{
	Polynomial ps,p,rear,t1,t2,t;

	p = (Polynomial)malloc(sizeof(struct PolyNode));
	rear = p;
	t1 = p1;t2 = p2;
	while(t1&&t2)
	{
		if(t1->expon==t2->expon)
		{
			/*rear->expon = t1->expon;
			rear->coef = t1->coef+t2->coef;
			t1=t1->link;
			t2 = t2->link;
			rear = rear->link;*/
			Attach(t1->coef+t2->coef,t1->expon,&rear);
			t1=t1->link;
			t2 = t2->link;
		}
		else if(t1->expon>t2->expon)
		{
			/*rear->expon = t1->expon;
			rear->coef = t1->coef;
			t1 = t1->link;
			rear = rear->link;*/
			Attach(t1->coef,t1->expon,&rear);
			t1 = t1->link;

		}
		else
		{
			/*rear->expon = t2->expon;
			rear->coef = t2->coef;
			t2 = t2->link;
			rear = rear->link*/
			Attach(t2->coef,t2->expon,&rear);
			t2 = t2->link;
		}
	}
	while(t1)
	{
		/*rear->expon = t1->expon;
		rear->coef = t1->coef;
		t1 = t1->link;
		rear = rear->link;*/
		Attach(t1->coef,t1->expon,&rear);
		t1 = t1->link;

	}
	while(t2)
	{
		/*rear->expon = t1->expon;
		rear->coef = t1->coef;
		t1 = t1->link;
		rear = rear->link;*/
		Attach(t2->coef,t2->expon,&rear);
		t2= t2->link;

	}

	t=p;p=p->link;free(t);
	return p;
}

void PrintPoly(Polynomial P)
{
	int flag = 0;
	if(P==NULL){printf("0 0\n"); return;}

	while(P)
	{
		if(!flag)
			flag = 1;
		else
			printf("  ");//judge if the input is the first one
			printf("%d %d",P->coef,P->expon);
		P=P->link;
	}
	printf(" "); 
}





 int main(void)
 {
 	Polynomial P1,P2,PS;
 	P1 = ReadPoly();
 	PrintPoly(P1);
 	P2 = ReadPoly();
 	PrintPoly(P2);
 	//PP = Mult(P1,P2);
 	//PrintPoly(PP);
 	PS = Add(P1,P2);
 	PrintPoly(PS);

 	return 0;
 }
