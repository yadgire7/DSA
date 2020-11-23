#include<iostream>
using namespace std;



class Stack
{
private:

    int stack[50];
    int top=-1;
    
public:
    int size=0;
    void push(int data){
        if(isFull())
            cout<<"stack overflow\n";
        else{
            top++;
            stack[top]=data;
            size++;
        }
    }

    void pop(){
        if(isEmpty())
            cout<<"underflow\n";
        else{
            top--;
            size--;
        }
    }

    int peek(){
        if(isEmpty())
            isEmpty();
        else
        {
            return stack[top];
        }
        
    }

    bool isFull(){
        if(top==49)
            return true;
        else
        {
            return false;
        }       
    }

    bool isEmpty(){
        if(top==-1)
            return true;
        else
        {
            return false;
        }    
    }

    void display(){
        for(int i=0;i<=top;i++){
            cout<<stack[i]<<"\t";
        }
        cout<<endl;
    }
};

int main(){
    Stack s;
    int choice;
    char ch;
    int data;
    do
    {
        cout<<"1. push\n2. pop\n3. peek\n4. size\n5. display\n";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"enter data: ";
            cin>>data;
            s.push(data);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.peek();
            break;
        case 4:
            cout<<s.size;
            break;
        case 5:
            s.display();
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

