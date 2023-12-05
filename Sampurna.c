#include<stdio.h>
#include<stdlib.h>
#define size 5
void enqueue();
void dequeue();
void show();
void count();
int  arr[size];
int Rear= -1;
int Front= -1;
int main()
{
 int ch;
 while(1)
 {
 printf("1.enqueue Operation\n");
 printf("2.dequeue Operation\n");
 printf("3.display the queue\n");
 printf("4.total no of element in the queue\n");
 printf("5.exit\n");
 printf("enter your choice of operation:");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
 enqueue();
 break;
 case 2:
 dequeue();
 break;
 case 3:
 show();
 break;
 case 4:
 count();
 break;
 case 5:
 exit(0);
 default:
    printf("incorrect choice \n");
 }
 }
 return 0;
 }
void enqueue()
{
 int insertitem;
 if(Rear == size -1)
 printf("overflow \n");
 else
{
    if(Front == -1 )
    Front=0;
    printf("Element to be inserted in the Queue\n:");
    scanf("%d",&insertitem);
    Rear=Rear+1;
    arr[Rear]=insertitem;
}
}
    void dequeue()
    {
     if (Front == -1 ||Front > Rear)
     {
     printf("underflow \n");
     return;
     }
     else
     {
     printf("element deleted from the Queue:%d\n,inp arr[Front]");
     Front= Front+1;
     }
     }
     void show()
     {
       if(Front == -1)
            printf("empty Queue\n");
        else
     {
     printf("queue:\n");
     for(int i=Front;i<=Rear;i++)
     printf("%d", arr[i]);
     printf("\n");
     }
     }
     void count()
     {
      int numberofelement;
      if(Front==-1&& Rear ==-1)
      {
       printf("queue is empty");
      }
      else
      {
        numberofelement = (Rear-Front)+1;
        printf("total number of elements are:%d\n",numberofelement);
      }
     }
