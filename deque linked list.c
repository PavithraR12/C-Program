#include<stdio.h>
struct node
{
    int data;
    struct node *next,*prev;
}*head=NULL,*tail=NULL,*temp,*node,*i,*t;
int main()
{
    int ch=0;
    createSentinels();
    while(ch!=6)
    {
        printf("1.Insertfront\n2.Insertrear\n3.Deletefront\n4.Deleterear\n5.Display\n6.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            {
                insertf();
                break;
            }
        case 2:
            {
                insertr();
                break;
            }
            case 3:
            {
                deletef();
                break;
            }
            case 4:
            {
                deleter();
                break;
            }
        case 5:
            {
                display();
                break;
            }
        case 6:
            {
                exit(0);
            }
        default:
            printf("Enter valid choice");
            break;
        };
    }
}
void createSentinels()
{
    head=createNode(0);
    tail=createNode(0);
    head->next=tail;
    tail->prev=head;
}
int createNode(int data)
{
    node=malloc(sizeof(struct node));
    node->data=data;
    node->next=node->prev=NULL;
    return (node);
}
void insertf()
{
    int data;
    printf("Enter a val: ");
    scanf("%d",&data);
    node=createNode(data);
    temp=head->next;
    head->next=node;
    node->prev=head;
    node->next=temp;
    temp->prev=node;
}
void insertr()
{
    int data;
    printf("Enter a val: ");
    scanf("%d",&data);
    node=createNode(data);
    temp=tail->prev;
    tail->prev=node;
    node->next=tail;
    node->prev=temp;
    temp->next=node;
}
void deletef()
{
    if(head->next==tail)
    {
        printf("Queue empty");
    }
    else
    {
        temp=head->next;
        head->next=temp->next;
        temp->next->prev=head;
        free(temp);
    }
}
void deleter()
{
    if(tail->prev==head)
        printf("Queue Empty");
    else
    {
        temp=tail->prev;
        tail->prev=temp->prev;
        temp->prev->next=tail;
        free(temp);
    }
}
void display()
{
    if(head->next==tail)
    {
        printf("Queue empty");
    }
    else
    {
        temp=head->next;
        while(temp!=tail)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
