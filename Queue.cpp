#include<iostream>
using namespace std;
#define MAX 50
 int queue[MAX];
class Queue
{
private:
    int front=-1;
    int rear=-1;
   
public:
    
    void enque(int data){
        if(isFull())
            cout<<"overflow\n";
        else{

            if(front==-1&&rear==-1){
                front=rear=0;
                queue[0]=data;
            }
            else{
                rear++;
                queue[rear]=data;
            }   
        }
    }
    void deque(){
        if(isEmpty())
            cout<<"underflow\n";
        else{
            if(front==rear){
                front=rear=-1;
            }
            else{
                front++;
            }
        }
    }
    void peek(){
        if(isEmpty())
            cout<<"underflow\n";
        else
        {
            cout<<queue[front]<<endl;
        }
        
    }

    void display(){
        if(isEmpty())
            cout<<"underflow\n";
        else{
        for(int i=front;i<=rear;i++){
            cout<<queue[i]<<"\t";
        }
        cout<<endl;
        }
    }
    bool isEmpty(){
        if((front==-1&&rear==-1)||front>rear)
            return true;
        else
        {
            return false;
        }
        
    }
    bool isFull(){
        if(rear==MAX-1)
            return true;
        else
        {
                return false;
        }
        
    }
};

int main(){
    Queue q;
    int choice;
    char ch;
    int data;
    do
    {
        cout<<"1. enque\n2. deque\n3. peek\n4. display\n";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"enter data: ";
            cin>>data;
            cout<<endl;
            q.enque(data);
            break;
        case 2:
            q.deque();
            break;
        case 3:
            q.peek();
            break;
        case 4:
            q.display();
            break;
        default:
            cout<<"invalid choice\n";
            break;
        }
        cout<<"continue?(y/n)\n";
        cin>>ch;
    } while (ch=='y'||ch=='y');
    return 0;
}