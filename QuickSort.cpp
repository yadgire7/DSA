#include<bits/stdc++.h>
using namespace std;

int Partition(int a[],int lb,int ub){
    int pivot=a[lb];
    int start=lb;
    int end=ub;
    int temp;
    while(start<end){
    while(a[start]<=pivot){
        start++;
    }
    while (a[end]>pivot)
    {
        end--;
    }
    if(start<end){
        temp=a[end];
        a[end]=a[start];
        a[start]=temp;
    }
    }
    temp=a[lb];
    a[lb]=a[end];
    a[end]=temp;
    return end;
    }

    void QuickSort(int a[],int lb, int ub){
        if(lb<ub){
            int loc=Partition(a,lb,ub);
            QuickSort(a,lb,loc-1);
            QuickSort(a,loc+1,ub);
        }
        
    }

int main(){
    int a[50],lb,ub,size;
    cout<<"enter size: ";
    cin>>size;
    lb=0;
    ub=size-1;
    cout<<endl;
    cout<<"enter elements :\n";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    QuickSort(a,lb,ub);
    for(int i=0;i<ub;i++){
            cout<<a[i]<<"\t";
        }
        cout<<endl;
    return 0;
}