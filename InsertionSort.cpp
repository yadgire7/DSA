#include<iostream>
using namespace std;

void Insertionsort(int a[],int size){
    for(int i=1;i<size;i++){
        int temp=a[i];
        int j=i-1;
        while(j>=0&&a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
        for(int t=0;t<size;t++){
            cout<<a[t]<<"\t";
        }
        cout<<endl;
    }
}

int main(){
    int a[50],size;
    cout<<"enter size: ";
    cin>>size;
    cout<<endl;
    cout<<"enter elements :\n";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    Insertionsort(a,size);
    return 0;
}