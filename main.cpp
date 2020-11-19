#include<iostream>
using namespace std;


template<class t>
class stack 
{
    struct node
    {
        t item;
        node *next;
    }
    node*top;
    stack()
    {
        *top = NULL;
    }

    void push(t newItem)
    {
        node *n = new node;
        n->item = newItem;
        n->next = top;
        top = n;
    }
    int pop()
    {
        if ( !isEmpty() )
        {
        int res = top.data;
        top = top.next;
        return res;
        }
    }
    bool isEmpty()
    {
      return top == null ;
    }


};







int main()
{
    cout<<"Hello world";
    return 0;
}
