#include<iostream>
using namespace std;


int main(){
    int size,value,found=0;
    int N=50;
    int a[N];
    cout<<"enter size of array(<50): ";
    cin>>size;
    cout<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"enter element to be searched: ";
    cin>>value;
    cout<<endl;
    for(int i=0;i<size;i++){
        if(a[i]==value){
            cout<<"element found at index "<<i<<endl;
            found=1;
            break;
        }
    }
    if(found==0)
        cout<<"element not in the list\n";
    return 0;
}