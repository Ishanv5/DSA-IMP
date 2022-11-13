// stack using array
#include<stdio.h>
#include<stdlib.h>
struct stack{
	int top;
	int size;
	int st[];
};
void push(int st[],int x){
	int size=4;
	int top=-1;
	if(top==(size-1)){
		printf("Stack overflow");
	}
	else{
		top++;
		st[top]=x;
	}
	
}
void display(){
	if(top==-1){
		printf("Stack is empty");
	}else{
		for(int i=top;i>=0;i--){
			printf("%d/n",st[i]);
		}
	}
}
int main(){
	struct stack st;
	push(st,4);
	display();
	return 0;
}
