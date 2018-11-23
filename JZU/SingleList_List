typedef  struct Node{ 
       ElementType  Data;   
       struct Node *Next;
} List,*PtrL; 

int  Length ( List  *PtrL )
{    List  *p = PtrL;       /* p指向表的第一个结点*/
     int  j = 0;
     while ( p ) { 
           p = p->Next; 
           j++;                    /* 当前p指向的是第 j 个结点*/
     }   
     return  j;
}

List  *FindKth( int K, List *PtrL )
{      List  *p = PtrL;
        int  i = 1;
        while (p !=NULL && i < K ) {
               p = p->Next;
               i++;  
        }
       if ( i == K ) return p;  
/* 找到第K个，返回指针 */
       else  return NULL;    
 /* 否则返回空 */
}


List *Find( ElementType X, List *PtrL )
{  
     List  *p = PtrL;
    while ( p!=NULL && p->Data != X )
           p = p->Next;  
    return p;
}


List *Insert( ElementType X, int i, List *PtrL )
{       List  *p, *s;
        if ( i == 1 ) {     /* 新结点插入在表头 */
             s = (List *)malloc(sizeof(List)); /*申请、填装结点*/
             s->Data = X; 
             s->Next = PtrL;
             return s;      /*返回新表头指针*/
        }
        p = FindKth( i-1, PtrL );   /* 查找第i-1个结点 */
        if ( p == NULL ) {             /* 第i-1个不存在，不能插入 */
                 printf(＂参数i错＂);
                 return NULL; 
        }else {
                s = (List *)malloc(sizeof(List)); /*申请、填装结点*/
                s->Data = X; 
                s->Next = p->Next;     /*新结点插入在第i-1个结点的后面*/
                p->Next = s; 
                return PtrL;
       }
}
