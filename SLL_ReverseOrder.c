#include<stdio.h>
#include<stdlib.h>
   struct Node{
      int data;
      struct Node * next;
   };
   void LinkedListTravser(struct Node * ptr){
       for(int i=NULL;i >= ptr;i++){
          printf("Element : %d\n",ptr->data);
          ptr = ptr->next;
       }
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
 
    return 0;
}