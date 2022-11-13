// write a program to perform push,pop and peek operations
#include <stdio.h>
#include <stdlib.h>
#define Max 3
int st[Max],top=-1;
void push(int st[],int val){
    if(top==Max-1){
        printf("\n Stack overflow...");
    }
    else{
        top++;
        st[top]=val;
    }
}
int pop(int st[]){
    int val;  
    if(top==-1){
        printf("\n Stack underflow");
        return val;
    }else{
        val = st[top];
        top--;
        return val;
    }
}
int peek(int st[]){
    if(top==-1){
        printf("\n Stack Empty");
        return -1;

    }else{
        return (st[top]);
    }
}
void display(){
    int i;
    if(top==-1){
        printf("\n Stack Empty");
    }else{
        for(i=top;i>=0;i--){
            printf("\n %d",st[i]);
            printf("\n");
        }
    }
}
int main(){
   int val,option;
   do{
     printf("\n *********Main Menu**********");
     printf("\n 1 . Push");
     printf("\n 2 . Pop");
     printf("\n 3 . Peek");
     printf("\n 4 . Display");
     printf("\n 5 . Exit");
     printf("\n ***************************");
     
     scanf("%d ",&option);
     switch(option){
        case 1: printf("\n Enter the number to be pushed on stack : ");
                scanf("%d",&val);
                push(st,val);
                break;
        case 2: val=pop(st); 
                if(val!=-1) printf("\n The value deleted : %d ",val);
                break;
        case 3: val=peek(st);
                if(val!=-1)  printf("\n The value stored : %d",val);
                break;
        case 4: display(st);break;
     }

    }while(option!=5);
 return 0;
  }