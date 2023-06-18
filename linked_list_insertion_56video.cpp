#include<iostream>
using namespace std;

class node
{
    public : 
    int data;
    node* next;
    node* head =NULL,*tail =NULL;
    int create();
    int display();
};

int node :: create()
{
    int i,no,value;
    cin>>no;
    node* temp = head;
    for(i=0; i<no; i++)
    {
    node* cur = new node ();//need to put a braket here;
    cout<<"enter data "<<i;
    cin>>value;
    cur->data=value;
    if(head ==NULL)
    {
        head = tail =  cur;
    }
    else{
        tail->next=cur;
        tail = cur;
    }
    }
}

int node :: display()
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp= temp->next;
    }
    cout <<endl;
    return 0;

}

int main()
{
    //node* head =NULL,*tail =NULL;
    node n1;

    n1.create();

    n1.display();
}
