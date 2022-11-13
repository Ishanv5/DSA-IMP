#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
int data;
struct stack * next;
};
struct stack * top=NULL;
struct stack * push(struct stack * top,int val)
{
  struct stack * ptr;
  ptr=(struct stack *)malloc(sizeof(struct stack));
  ptr->data=val;
  if(top==NULL)
  {
   ptr->next=NULL;
   top=ptr;
  }
  else
  {
   ptr->next=top;
   top=ptr;
  }
  return top;
}
struct stack * display(struct stack * top)
{
  struct stack  * ptr;
  ptr=top;
  if(top==NULL)
  printf("\n Stack is empty");
  else
  {
   while(ptr!=NULL){
   printf("\n%d",ptr->data);
   ptr=ptr->next;
   }
  }
  return top;
}
struct stack * pop(struct stack * top)
{
struct stack * ptr;
ptr=top;
if(top==NULL)
printf("\n Stack underFlow");
else
{
 top=top->next;
 printf("\n The value being deleted : %d",ptr->data);
}
return top;
}
int peek(struct stack * top)
{
if(top==NULL)
{
return -1;
}
else {
return top->data ;
}
}
int main()
{
int val,option;
do{
   printf("\n------Main Menu------");
   printf("\n 1.Push");
    printf("\n 2.Pop");
     printf("\n 3.Peek");
      printf("\n 4.Display");
       printf("\n 5.Exit\n");
       printf("---------------------");
       printf("\nEnter Option : ");
       scanf("%d",&option);
       switch(option)
       {
	 case 1:printf("\n Enter the nos to be pushed : ");
		scanf("%d",&val);
		top=push(top,val);
		break;
	 case 2:top=pop(top);
		break;
	 case 3:val=peek(top);
		if(val!=-1)
		printf("\nThe value at the top of stack : %d",val);
		else
		printf("\n Stack is empty");
		break;
	 case 4:top=display(top);
		break;
       }
  }
  while(option!=5);
  getch();
  return 0;
}