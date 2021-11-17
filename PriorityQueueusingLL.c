#include <stdio.h>
#include <stdlib.h>
 typedef struct node{
 int data;
 struct node *link;
 }Node;
 Node *front=NULL;
 Node *rear=NULL;
 void push(int value)
 {
     Node *temp=NULL;
     temp=malloc(sizeof(Node));

        temp->data=value;
        temp->link=NULL;
        if(front==NULL)
        {
            front=rear=temp;
            printf("%d is pushed to your queue\n",value);
        }
        else{

            if(value>front->data)
            {
             if(rear->data<value)
            {rear->link=temp;
            rear=temp;
             printf("%d is pushed to your queue\n",value);
            }
             else{
                Node *ptr=front;
                Node *ptr2=NULL;
                 while(value>ptr->data)
                 {
                    ptr2=ptr;
                    ptr=ptr->link;

                 }
                 ptr2->link=temp;
                 temp->link=ptr;

            }
        }
         else if(value<front->data)
            {

            temp->link=front;
            front=temp;
             printf("%d is pushed to your queue\n",value);
        }

     }
 }
void pop()
{
    if(front==NULL)
    {
        printf("Your stack is empty\n");
    }
    else
    {
        Node *t=front;
        front=front->link;
        printf("%d is deleted from the queue\n",t->data);
        free(t);
    }

}
 void display()
{
    Node *ptr=front;

    if(front==NULL)
    {
        printf("Your queue is empty\n");
    }
    else
    {
        printf("Your queue elements are\n");
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->data);
            ptr=ptr->link;
        }

         }

}

int main()
{

  push(40);
  push(20);
  push(50);
  push(40);
  push(10);
  display();
   pop();
  display();



}