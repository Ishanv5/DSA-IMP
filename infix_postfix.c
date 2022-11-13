#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define Max 100
char st[Max];
int top=-1;
int main(){
    char infix[100],postfix[100];
    printf("\n Enter any infix expression : ");
    gets(infix);  
    strcpy(postfix,"");
    infixtopostfix(infix,postfix);
    printf("\n The corresponding postfix expression : ");
    puts(postfix);
    return 0;
}