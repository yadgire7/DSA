 #include<iostream>
 using namespace std;

 class Node{
     public:
        int data;
        Node *next;
 };

 class Operations{
     private:
        Node* front=NULL;
        Node* rear=NULL;
    public:
        void enque(){
            Node *newNode=new Node();
            cout<<"enter data: ";
            cin>>newNode->data;
            cout<<endl;
            newNode->next=NULL;
            if(front==NULL&&rear==NULL)
                front=rear=newNode;
            else
            {
                rear->next=newNode;
                rear=newNode;
            }
        }

        void deque(){
            Node *temp=new Node();
            temp=front;
            if(front==NULL&&rear==NULL)
                cout<<"underflow\n";
            else if(front==rear){
                delete temp;
                front=rear=NULL;
            }

            else{
                front=temp->next;
                delete temp;
            }
        }

        void display(){
            Node *temp;
            if(front==NULL&&rear==NULL)
                cout<<"underflow\n";
            else{
                temp=front;
                while(temp!=NULL){
                    cout<<temp->data<<"\t";
                    temp=temp->next;
                }
                cout<<endl;
            }
        }
 };

int main(){
    Operations o;
    int choice;
    char ch;
    do
    {
        cout<<"1. enque\n2. deque\n3. display\n";
        cin>>choice;
        switch (choice)
        {
        case 1:
            o.enque();
            break;
        case 2:
            o.deque();
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