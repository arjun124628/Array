#include<stdio.h>
struct node
{
    int value;
    struct node *next;

};
int main()
{
    struct  node a,b,c;
    a.value=5;
    a.next=&b;
    b.value =6;
    b.next=&c;
    c.value=7;
    c.next=NULL;
    printf("%p %d %p\n\n",&a.value,a.value,a.next);
    printf("%p %d %p\n\n",&b.value,b.value,b.next);
    printf("%p %d %p\n",&c.value,c.value,c.next);

    return 0;

}
