/*Write C++ program for storing matrix. Write functions for
    • Check whether given matrix is upper triangular or not
    • Compute summation of diagonal elements 
    • Compute transpose of matrix 
    • Add, subtract and multiply two matrices  
    • Check saddle point is present or not.*/


    #include<iostream>
    using namespace std;

    class Matrix
    {
    private:
        int rows,columns;
        int m[10][10],p[10][10];

    public:
        void getMatrix(){
            cout<<"enter no. of rows: ";
            cin>>rows;
            cout<<endl;
            cout<<"enter no. of columns: ";
            cin>>columns;
            cout<<endl;
            cout<<"enter the elements of the matrix(row wise):\n";
            for(int i=0;i<rows;i++){
                for(int j=0;j<columns;j++){
                    cin>>m[i][j];
                }
            }
        }

        void displayMatrix(){
            cout<<"the matrix is: \n";
            for(int i=0;i<rows;i++){
                for(int j=0;j<columns;j++){
                    cout<<m[i][j]<<"\t";
                }
                cout<<endl;
            }
        }

       Matrix addMatrix(Matrix m2){
           Matrix temp;
           temp.rows=rows;
           temp.columns=columns;
           for(int i=0;i<temp.rows;i++){
                for(int j=0;j<temp.columns;j++){
                    temp.m[i][j]=m[i][j]+m2.m[i][j];
                }
                return temp;
            }
       }

       Matrix subMatrix(Matrix m2){
           Matrix temp;
           temp.rows=rows;
           temp.columns=columns;
           for(int i=0;i<temp.rows;i++){
                for(int j=0;j<temp.columns;j++){
                    temp.m[i][j]=m[i][j]-m2.m[i][j];
                }
                return temp;
            }
       }
    int main(){
        Matrix a,b,c;
        int choice;
        char ch;
        a.getMatrix();
        b.getMatrix();
        a.displayMatrix();
        b.displayMatrix();
        do{
            cout<<"1. add\n2. subtract";
            cin>>choice;
            switch (choice)
            {
            case 1:
                c=a.addMatrix(b);
                c.displayMatrix();
                break;
            case 2:
                c=a.subMatrix(b);
                c.displayMatrix();
                break;

            
            default:
                cout<<"invalid input\n";
                break;
            }
            cout<<"do you want to continue?(y/n)\n";
            cin>>ch;
        }
        while(ch=='y'||ch=='Y');
        return 0;
    }