#include<iostream>
using namespace std;
// creating node
class Node{
    public:
        int data;
        Node* next;
};

class Operations
{
private:
    Node* head=NULL;
    Node* temp;
    
public:
int size=0;
    void insertBeg(){
        Node* new_node=new Node();
        cout<<"enter data: \n";
        cin>>new_node->data;
        new_node->next=NULL;
        size++;
        if(head==NULL)
           head=temp=new_node;
        else
        {
           temp=head;
           head=new_node;
           new_node->next=temp;
           temp->next=NULL; 
        }
    }
    void insertEnd(){
        Node* newNode=new Node();
        cout<<"enter data: \n";
        cin>>newNode->data;
        newNode->next=NULL;
        size++;
        if (head==NULL)
            head=temp=newNode;
        else{
        temp->next=newNode;
        temp=newNode;
        }
    }

    void insertAtPos(){
        int pos,i=1;
        cout<<"enter position after which element is to be inserted: \n";
        cin>>pos;
        if(pos>size+1)
            cout<<"invalid position\n";
        else{
            Node* newNode=new Node();
            size++;
            temp=head;
            while(i<pos){
                temp=temp->next;
                i++;
            }
            cout<<"enter data: \n";
            cin>>newNode->data;
            
            newNode->next=temp->next;
            temp->next=newNode;

        }
    }
    void deleteBeg(){
        if(head==NULL)
            cout<<"underflow\n";
        else{
            temp=head;
            head=temp->next;
            delete temp;
            size--;
        }
    }

    void deleteEnd(){
        temp=head;
        int count=1;
        while(count!=(size-1)){
            temp=temp->next;
            count++;
        }
        delete temp->next;
        size--;
        temp->next=NULL;

    }

    void deleteFromPos(){
        int pos,i=1;
        Node* prevNode=temp=head;
        cout<<"enter position from which element is to be deleted: \n";
        cin>>pos;
        if(pos>size)
            cout<<"invalid position\n";
        else{
           while(i!=pos){
               prevNode=temp;
               temp=temp->next;
               i++;
               if(temp==head)
                    head=NULL;
               else if(temp->next==NULL){
                   prevNode->next=NULL;
               } 
           } 
           prevNode->next=temp->next;
           delete temp;
           size--;
        }
    }

    void display(){
        temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"\t";
            temp=temp->next;
    }
    cout<<endl;
    }

    void sizeOfList(){
        temp=head;
        int count=1;
        if(head==NULL)
            cout<<"size= 0\n";
        else if(temp->next==NULL)
            cout<<"size= 1\n";
        else{
        while(temp->next!=NULL){
            temp=temp->next;
            count++;
        }
        
        }
        cout<<"size= "<<count<<endl;
    }

    void reverse(){
        Node *prevNode,*curNode,*nextNode;
        prevNode=NULL;
        curNode=nextNode=head;
        while(nextNode!=NULL){
            nextNode=nextNode->next;
            curNode->next=prevNode;
            prevNode=curNode;
            curNode=nextNode;
        }
        head=prevNode;
        display();
    }
};


int main(){
    Node* head=NULL;
    Node* newNode,*temp;
    Operations o;
    int choice=1;
    char c;
    
    //cout<<head<<endl;
    //cout<<head->data<<endl;
    
    do{
        cout<<"1. insert at beginning\n2. insert at end\n3. insert at position\n4. display\n5. size\n6. delete from beginning\n7. delete from end\n8. delete from pos\n9. reverse\n";
        cin>>choice;
        switch (choice)
        {
        case 1:
            o.insertBeg();
            break;

        case 2:
            o.insertEnd();
            break;

        case 3:
            o.insertAtPos();
            break;

        case 4:
            o.display();
            break;

        case 5:
        o.sizeOfList();
        break;

        case 6:
            o.deleteBeg();
            break;

        case 7:
            o.deleteEnd();
            break;

        case 8:
            o.deleteFromPos();
            break;

        case 9:
            cout<<"reversed linked list: \n";
            o.reverse();
            break;
        
        default:
            cout<<"invalid input\n";
            break;
        }
        cout<<"continue?(y/n)\n";
        cin>>c;

    }
    while (c=='y'||c=='Y');
    return 0;
}