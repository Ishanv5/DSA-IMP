// Stack using Array.
#include <stdio.h>
#include <conio.h>
#define SIZE 4
struct stack
{
int ar[SIZE];
int top;
};
struct stack st;
int isFull()
{
if(st.top == SIZE - 1)
{
return 1;
}
else
{
return 0;
}
}
int isEmpty()
{
if(st.top == -1)
{
return 1;
}
else
{
return 0;
}
}
void push(int val)
{
if(isFull())
{
printf("Stack is full.\n");
}
else
{
st.top++;
st.ar[st.top] = val;
}
}
int pop()
{
if(isEmpty())
{
printf("Stack is empty.\n");
return -1;
}
else
{
return (st.ar[st.top--]);
}
}
void display()
{
int i;
if(!isEmpty())
{
for(i = st.top; i > -1; i--)
{
printf("%d\n", st.ar[i]);
}
}
else
{
printf("Stack is empty.\n");
}
}
int main()
{
int j;
clrscr();
st.top = -1;
pop();
push(10);
push(20);
push(30);
push(40);
display();
j = pop();
printf("Popped value: %d\n", j);
display();
getch();
return 0;
}