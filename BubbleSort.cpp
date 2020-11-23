#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int *temp;
    *temp=*a;
    *a=*b;
    *b=*temp;
}

void BubbleSort(int a[],int size){
    int pass;
    for(int pass=0;pass<size-1;pass++){
        int flag=0;
        cout<<"pass "<<pass+1<<":\n";
        for(int i=0;i<size-pass-1;i++){
            if(a[i]>a[i+1]){
                swap(&a[i],&a[i+1]);
                flag=1;
            }
        }

        if(flag==0)
            break;
        for (int i = 0; i < size; i++)
        {
        cout<<a[i]<<"\t";
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
    BubbleSort(a,size);
    return 0;
}