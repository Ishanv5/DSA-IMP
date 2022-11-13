#include<stdio.h>
#include<stdlib.h>
struct stack{
    int data;
    struct stack *next;  // linked list
};
struct stack *top=NULL;
struct stack * push(struct stack * top,int val){
    struct stack * ptr;
    ptr=(struct stack *)malloc(sizeof(struct stack));
    ptr->data=val;
    if(top==NULL){
        ptr->next=NULL;
        top=ptr;
    }else{
        ptr->next=top;
        top=ptr;
    }
    return top;
}
struct stack *pop(struct stack * top){
    struct stack * ptr;
    ptr=top;
    if(top==NULL){
        printf("\n Stack underflow");
    }
    else{
        top=top->next;
        printf("\n %d",ptr->data);
        free(ptr);
    }
    return top;
}
int peek(struct stack * top){
    if(top==NULL){
        return -1;
    }
    return top->data;
}
struct stack *display(struct stack * top){
    struct stack * ptr;
    ptr=top;
    if(top==NULL){
        printf("\n Stack is empty");
    }else{
        while(ptr!=NULL){
            printf("\n %d",ptr->data);
            ptr=ptr->next;
        }
    }
    return top;
}
int main(){
     push(top,34);
     push(top,34);
     push(top,34);
     push(top,34);
     display(top);
     pop(top);
     display(top);
    return 0;
}