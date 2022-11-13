#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Max 10
int top=-1;
int st[Max];
void push(char c){
    if(top==(Max-1))
    printf("\n Stack overflow");
else{
   top = top + 1;
   st[top] = c;
}
}
char pop(char c){
    if(top==-1)
    printf("\n Stack Underflow");
    else 
    return (st[top--]);
}
void main(){
 char exp[Max],temp;
 int i,flag=1;
 printf("Enter an Expreesion : ");
 gets(exp);
 for(i=0;i<strlen(exp);i++){
    if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
    push(exp[i]); 
    if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
      if(top==-1)  flag=0;
      else{
         temp=pop(exp[i]);
        if(exp[i]==')' && (temp=='{' || temp=='['))
        flag=0;
        if(exp[i]=='}' && (temp=='(' || temp=='['))
        flag=0;
        if(exp[i]==']' && (temp=='(' || temp=='{'))
        flag=0;
      }
 }
 if(top>=0)
 flag=0;
 if(flag==1)
 printf("\n Valid expression");
 else  
 printf("\n Invalid expression");
    
}