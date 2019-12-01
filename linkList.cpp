#include<iostream>
using namespace std;

struct node 
{
    int data ; 
    node *next;
};


class linkList{
    node *start ,*end;

    public:

    linkList(){
        start =NULL;
        end = NULL;
    }

    void insertFirst(int value){
        node *tmp = new node;
        tmp->data = value;
        tmp->next = NULL;
      
    if (start == NULL )
    {
        start = tmp;
        end = tmp;
    }
    else
    {
        end->next = tmp;     // end is here the previous node  and tmp = new
        end = end->next;   // now end is the new node
    }

    }


    void display(){
        if(start == NULL){
            cout<<"sorry we have not any vlaue linklist is null"<<endl;
        }

        else
        {
           node *tmpe = start;
           while (tmpe != NULL)
           {           
            cout<<" the value is : "<<tmpe->data<<endl;
              tmpe = tmpe ->next;
           }
           

        }
        
    }

};


int main(){

linkList  a;
a.insertFirst(5);
a.insertFirst(6);
a.insertFirst(7);

a.display();

    return 0;
}