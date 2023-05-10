#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*first = NULL;

void create( int a[], int n)
{ 
    int i;
    struct node *t, *last;
    first = new node;
    first->data = a[0];
    first->next = NULL;
    last = first;

    for( i = 1; i < n; i++)
    { 
        t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }

}
void sum(struct node *p)
{   
    int sum = 0;
    while(p != NULL)
    {
        sum += p->data;
        p = p->next;
    }
    cout<<"sum of all the nodes in the linked list is "<<sum;
}

int main()
{  
    int a[] = {3,5,7,10,15};
    create(a, 5);
    sum(first);
    return 0;
}