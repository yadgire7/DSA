#include<iostream>
#include<algorithm>
using namespace std;
void BinarySearch(int a[],int size,int data){
    int l=0,r=size-1,found=0;
    while(l<r){
    int mid=(l+r)/2;
    if(data==a[mid]){
        cout<<"found!\n";
        found=1;
        break;
    }
    else if (data<a[mid])
        r=mid-1;
    else
        l=mid+1;
    }
    if(found==0)
        cout<<"not found!\n";
}

int main(){
    int a[50],size,data;
    cout<<"enter size of array: ";
    cin>>size;
    cout<<endl;
    cout<<"enter elements of the array:\n";
    for (int i = 0; i < size; i++)
    {
        cin>>a[i];
    }
    sort(a,a+size);
    cout<<"enter data to be found: ";
    cin>>data;
    cout<<endl;
    BinarySearch(a,size,data);
     
    return 0;
}
