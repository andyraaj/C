#include<stdio.h>
#include<stdlib.h>

     struct Node{
        int data;
        struct Node* next;
    };

void linkdelisttraversal(struct Node* ptr){
    while(ptr!=NULL)
    {
    printf("Element: %d\n",ptr->data);
    ptr=ptr->next;
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    //Allocation of memory in the heap

   head=(struct Node*)malloc(sizeof(struct Node));
   second=(struct Node*)malloc(sizeof(struct Node));
   third=(struct Node*)malloc(sizeof(struct Node));
   fourth=(struct Node*)malloc(sizeof(struct Node));
//link 1 and 2
head->data=7;
head->next=second;
//link 2aned 3
second->data=5;
second->next=third;
//terminate the third 
third->data=56;
third->next=fourth;

fourth->data=89;
fourth->next=NULL;


linkdelisttraversal(head);
return 0;


}