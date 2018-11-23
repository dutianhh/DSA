/*1、List MakeEmpty()：初始化一个新的空线性表L；
2、ElementType FindKth( int K, List L )：根据指定的位序K，返回相应元素 ；
3、int Find( ElementType X, List L )：已知X，返回线性表L中与X相同的第一个元素的相应位序i；若不存在则返回空；
4、void Insert( ElementType X, int i, List L)：指定位序i前插入一个新元素X；
5、void Delete( int  i, List L )：删除指定位序i的元素；
6、int Length( List L )：返回线性表L的长度n。
*/

//顺序表
typedef  struct { 
	ElementType  Data[MAXSIZE];   
     	int  Last;
} List，*PtrL; 

List *MakeEmpty( )
{    List *PtrL;
     PtrL = (List *)malloc( sizeof(List) );
     PtrL->Last = -1; 
     return PtrL;
}
int Find( ElementType X, List *PtrL )
{   int i = 0;
    while( i <= PtrL->Last && PtrL->Data[i]!= X )
        i++;
    if (i > PtrL->Last)  return -1; /* 如果没找到，返回-1 */
    else  return i;  /* 找到后返回的是存储位置 */
}

void Insert( ElementType X, int i, List *PtrL )
{       int j;
        if ( PtrL->Last == MAXSIZE-1 ){  /* 表空间已满，不能插入*/
                 printf(＂表满＂); 
                 return; 
        }  
        if ( i < 1 || i > PtrL->Last+2) { /*检查插入位置的合法性*/
               printf(＂位置不合法＂);
               return; 
        } 
        for ( j = PtrL->Last; j >= i-1; j-- )
               PtrL->Data[j+1] = PtrL->Data[j];  /*将 ai～ an倒序向后移动*/
        PtrL->Data[i-1] = X;   /*新元素插入*/
        PtrL->Last++;              /*Last仍指向最后元素*/
        return; 
} 


void Delete( int  i, List *PtrL )
{      int  j;
       if( i < 1 || i > PtrL->Last+1 ) { /*检查空表及删除位置的合法性*/
            printf (“不存在第%d个元素”, i ); 
            return ; 
       }
       for ( j = i; j <= PtrL->Last; j++ )
            PtrL->Data[j-1] = PtrL->Data[j];  /*将 ai+1～ an顺序向前移动*/
       PtrL->Last--;    /*Last仍指向最后元素*/
       return;   
}

