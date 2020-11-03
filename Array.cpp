#include <bits/stdc++.h>       //includes all standard libraries in c++
using namespace std;



class Array{
    public:
    int array[100];
    int size,position,element;
    void getArray();
    void printArray();
    void insertBeg();
    void insertEnd();
    void insertAtPos();
    void deleteFromPos();

};

void Array::getArray(){
    cout<<"enter the size of the array\n";
    cin>>size;
    cout<<"enter the elements into the array:\n";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"the entered elements are:\n";
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";  
    }
    cout<<endl;
}

void Array::printArray(){
    cout<<"the array is:\n";
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";  
    }
    cout<<endl;
}

void Array::insertBeg(){
    
    cout<<"enter the element to be inserted in the beginning:\n";
    cin>>element;
    for(int i=size;i>=1;i--){
        array[i]=array[i-1];
    }
    array[0]=element;
    size++;
    printArray();
}

void Array::insertEnd(){
    cout<<"enter the element to be inserted in the end:\n";
    cin>>element;
    array[size]=element;
    size++;
    printArray();
    
}

void Array::insertAtPos(){
    
    cout<<"enter the position at which element is to be inserted:\n";
    cin>>position;
    if(position>=size+1){
        cout<<"invalid position! Please enter a valid position\n";
    }
    cout<<"enter the element to be inserted:\n";
    cin>>element;
    for(int i=size;i>position-1;i--){
        array[i]=array[i-1];
    }
    array[position-1]=element;
    size++;
    printArray();

}

void Array::deleteFromPos(){
    cout<<"enter the position from which element is to be deleted:\n";
    cin>>position;
    if(position>=size){
        cout<<"invalid position! Please enter a valid position\n";
    }
    for(int i=position;i<size;i++){
        array[i-1]=array[i];
    }
    size--;
    printArray();
}

int main(){
    int choice;
    char c;
    Array arr;
    arr.getArray();
    do{
    cout<<"press 1 to add element in the beginning\npress 2 to add element in the end\npress 3 to add element at a specific position\npress 4 to delete an element from a specific position\n";
    cin>>choice;
    switch(choice){
        case 1:
            arr.insertBeg();
            break;
        case 2:
            arr.insertEnd();
            break;
        case 3:
            arr.insertAtPos();
            break;
        case 4:
            arr.deleteFromPos();
            break;
        default:
            cout<<"invalid choice!";
    
    }
    cout<<"do you want to continue?(y/n)\n";
    cin>>c;
    }
    while(c=='y'||c=='Y');
    return 0;
    
}