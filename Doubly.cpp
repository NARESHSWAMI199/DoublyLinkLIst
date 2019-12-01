#include<iostream>
using namespace std;


struct  node
{
    int data ;
    node *next,*prev;
};


class Doubly{
private : 
        node  *start , *end;
public:

        Doubly(){   
           start = NULL;
           end = NULL;
        }


    void insertFirst(int value){
        node *tmp = new node;
        tmp->data = value;
        tmp->prev = NULL;
        tmp->next = NULL;

    if (start  == NULL){
        start = tmp;
        end = tmp;
    }
    else {
        end->next = tmp;
        tmp->prev = end;
        end = end->next;
        
    }

    }


    void display (){
        if(start == NULL){
            cout<<"the linklist is empty"<<endl;
        }
        else{
        node  *tmp = start;
        
        while (tmp!=NULL)
        {
            cout<<"the value is " << tmp->data<<endl;
            tmp = tmp->next;
        }

        }

    }


};






int main(){

Doubly a ;
a.insertFirst(4);
a.insertFirst(5);
a.insertFirst(6);
a.insertFirst(7);
a.display();

    return 0;
}