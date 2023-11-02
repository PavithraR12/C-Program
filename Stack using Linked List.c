#include<stdio.h>
#include<conio.h>
struct  node
{
int data;
struct node * next;
}*temp,*head,*p,*q;
int main()
{
int ch;
while(1)
{
printf("1.create\n");
printf("2.Insert at front\n");
printf("4.Insert at back\n");
printf("5.Delete at front\n");
printf("7.Delete at back\n");
printf("8.Display\n");
printf("9.Exit\n");

printf("Enter a choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
    if(head == NULL)
    {
    temp=malloc(sizeof(struct node));
    printf("Enter a value for data:");
    scanf("%d",&temp->data);
    temp->next=NULL;
    head=temp;
    }
    else
        printf("A linked list is already created");
    break;
case 2:
    if(head!=NULL)
    {
      temp=malloc(sizeof(struct node));
      printf("Enter a value for data:");
      scanf("%d",&temp->data);
      temp->next=head;
      head=temp;
    }
    else
        printf("Create a linked list");
    break;
case 4:
    if(head!=NULL)
    {
      temp=malloc(sizeof(struct node));
      printf("Enter a value for data:");
      scanf("%d",&temp->data);
      p=head;
      temp->next=NULL;
      while(p->next!=NULL)
      {
          p=p->next;
      }
      p->next=temp;
    }
     else
        printf("Create a linked list");
    break;
case 5:
    if(head!=NULL)
    {
        temp=head;
        head=head->next;
        free(temp);
    }
    else
        printf("Create a linked list");
    break;
case 7:
    if(head!=NULL)
    {
        while(p->next->next!=NULL)
        {
            p=p->next;
        }
        temp=p->next;
        p->next=NULL;
        free(temp);
    }
    else
        printf("Create a linked list");
    break;
case 8:
    if(head!=NULL)
    {
    for(p=head;p!=NULL;p=p->next)
    {
        printf("%d\n",p->data);
    }
    }
    else
        printf("Create a linked list");
    break;
case 9:
    exit(0);
    break;
default:
    printf("Enter a valid choice");
}
}
}
