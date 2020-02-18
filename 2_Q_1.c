#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
void print(node *x);
void print_all(node *x);
void empty(node *x);

struct Node
{

    int value;
    node *next;

};
node *head =NULL;

int main()
{
    node a,b,c,e;
    head=&a;
    a.value=5;
    a.next=&b;
    b.value =6;
    b.next=&e;
    e.value=54;
    e.next=&c;
    c.value=7;
    c.next=NULL;

  empty(head);


    print_all(head);


    return 0;


}

void print_all(node *x)
{

    while(x!=NULL)
    {


        printf("%d\t",x->value);
        x=x->next;
    }

}
void empty(node *x)
{
    if(x==NULL)
    {
        printf("LIst is empty\n");
    }
    else
    {
        printf("List is not empty.the list is : \n");
    }
}
