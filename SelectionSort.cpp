#include<iostream>
using namespace std;

/*void swap(int *a,int *b){
    int *temp;
    *temp=*a;
    *a=*b;
    *b=*temp;
}*/

void SelectionSort(int a[],int size){
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(a[min]>a[j])
                min=j;
        }
        if(min!=i){
            int temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
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
    SelectionSort(a,size);
    return 0;
}