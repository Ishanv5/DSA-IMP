#include<stdio.h>
#include<stdlib.h>
   struct Node{
      int data;
      struct Node * next;
   };
   void LinkedListTravser(struct Node * ptr){
       while(ptr!=NULL){
          printf("Element : %d\n",ptr->data);
          ptr = ptr->next;
       }
   }
   void LinkedListAdd(struct Node * ptr){
       int sum=0;
       while(ptr!=NULL){
         sum=sum+ptr->data;
         ptr = ptr->next;
       }
       printf("Sum of Element : %d\n",sum);
   }
int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));
    head->data=10;
    head->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=fourth;
    fourth->data=40;
    fourth->next=NULL;
   LinkedListTravser(head);
   LinkedListAdd(head);
    return 0;
}