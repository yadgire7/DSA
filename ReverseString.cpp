#include<iostream>
using namespace std;

class ReverseString
{
private:
    
    char string[50];
    char stack[50];
    int top=-1;

public:
    int size=0;
    
    void getString(){
        cout<<"enter sixe of the string to be reversed: ";
        cin>>size;
        cout<<"enter the string:\n";
        for(int i=0;i<size;i++){
            cin>>string[i];
            
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
    void push(){
        if(isFull())
            cout<<"stack overflow\n";
        else{
            for (int i=0;i<size;i++){
                top++;
                stack[top]=string[i];
            }   
        }
    }

     void display(){
        for(int i=top;i>=0;i--){
            cout<<stack[i];
        }
        cout<<endl;
    }
   
};

int main(){
    ReverseString s;
    s.getString();
    s.push();
    s.display();
    return 0;

}

