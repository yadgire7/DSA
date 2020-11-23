#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* link;
};

class Operations{
    private:
        Node *top=NULL;
        Node *temp;
    public:
        void push(int data){
            Node* newNode=new Node();
            newNode->data=data;
            newNode->link=top;
            top=newNode;
        }

        void display(){
            Node *temp=new Node();
            temp=top;
            while(temp!=NULL){
                cout<<temp->data<<"\t";
                temp=temp->link;
            }
            cout<<endl;
        }

        void pop(){
            Node *temp=new Node();
            temp=top;
            top=temp->link;
            delete temp;
        }
};


int main(){
    Operations o;
    int choice;
    char ch;
    int data;
    do
    {
        cout<<"1. push\n2. pop\n3. display\n";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"enter data: ";
            cin>>data;
            o.push(data);
            break;
        case 2:
            o.pop();
            break;
        case 3:
            o.display();
            break;
        
        default:
            cout<<"invalid choice\n";
            break;
        }
        cout<<"continue?(y/n)\n";
        cin>>ch;
    } while (ch=='y'||ch=='Y');
    return 0;
}

