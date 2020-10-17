#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct node {
    int data ;
    struct node* next ;
    struct node* previous ;

};
struct node* head , *tail ;
void Insert(){
    struct node* temp ;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data to be inserted\n");
    scanf("%d",&temp->data);
    if(head==NULL && tail==NULL){
        temp->previous=NULL;
        temp->next=NULL;
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp ;
        temp->previous=tail;
        temp->next=NULL;
        tail=temp;
    }
}
void InsertAtStart(){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data to be inserted\n");
    scanf("%d",&temp->data);
    temp->previous=NULL;
    temp->next=head;
    head->previous=temp ;
    head=temp;
}
void InsertAfter(int Value){
    struct node *temp , *data;
    data=(struct node*)malloc(sizeof(struct node));
    temp=head;
    while(temp!=NULL){
        if(Value==temp->data){
            printf("Enter the data to be inserted");
            scanf("%d",&data->data);
            data->next=temp->next;
            data->previous=temp;
            temp->next=data;
            break;
        }else{
            temp=temp->next;
            if(temp==NULL){
                printf("Data didn't matched");
            }
        }
    }
}
void DeleteLast(){
    struct node *temp ;
    temp = tail ;
    tail = temp->previous;
    tail->next = NULL;

}
void DeleteFirst(){
    struct node *temp;
    temp = head;
    head = temp->next;
    head->previous=NULL;
}
void DeleteAt(){
    printf("Enter the position at which data to be deleted\n");
    int position;
    scanf("%d",&position);
    struct node *temp ;
    temp = head ;
    for (int i=0 ; i<position ;i++){
        if(i!=position-1){
            temp= temp->next;
        }else{
            struct node *temp2;
            temp2 = temp->previous;
            temp2->next=temp->next;
            temp2=temp;
            temp2=temp->next;
            temp2->previous=temp->previous;
        }
    }
}
void displayreverse(){
    struct node *temp;
    temp=tail ;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->previous;
    }
}
void display(){
    struct node *temp;
    temp=head ;
    printf("Data in the linkedlist is :");
    while(temp!=NULL){
        printf("\n%d",temp->data);
        temp=temp->next;
    }
}

void main(){
    int choice ;
    int DATA;
    while(1){
        printf("\nEnter your choices \npress 1 for INSERT at the end\npress 2 for DELETE at last\npress 3 for PRINT\npress 4 for exit\npress 5 for Printing Reverse LinkedList\npress 6 for inserting at start\npress 7 for Inserting after a particular value\npress 8 to delete at a given node\npress 9 for deleting at start \n ");
        scanf("%d",&choice);
        switch(choice){
            case 1 :
            Insert();
            break ;
            case 2: 
	    DeleteLast();
            break;
            case 3 : 
            display();
            break;
            case 4 : 
            exit(0);
            break;
            case 5 : 
            displayreverse();
            break;
            case 6 : 
            InsertAtStart();
            break;
            case 7:
            printf("Enter the data after which node must be inserted");
            scanf("%d",&DATA);
            InsertAfter(DATA);
            break;
            case 8 : 
            DeleteAt();
            break;
            case 9 : 
            DeleteFirst();
            break;
            default:printf("Enter a valid choice Entered choice is invalid");
            break;
        }
    }
}




