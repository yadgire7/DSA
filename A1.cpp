/*Write C/C++ program to store marks scored for first test of subject 'Data Structures and Algorithms' for N students. Compute
I. The average score of class
II. Highest score and lowest score of class
III. Marks scored by most of the students
IV. list of students who were absent for the test
*/

#include<iostream>
using namespace std;

class Student{
    private:
        char name[20];
        int roll;
        float marks;
    public: 
        char* getName(){
            return name;
        }

        float getMarks(){
            return marks;
        }

        int getRoll(){
            return roll;
        }
        void getDetails(){
            cout<<"enter name: ";
            cin>>name;
            cout<<"enter roll no. ";
            cin>>roll;
            cout<<"enter marks: ";
            cin>>marks;
        }

        void displayDetails(){
            cout<<name<<endl;
            cout<<roll<<endl;
            cout<<marks<<endl;
        }
        
};



class Marksheet
{
private:
    int noOfStudents=0;
    Student s[100];
public:
    void get(){
        cout<<"Enter the no. of students: ";
        cin>>noOfStudents;
        for(int i=0;i<noOfStudents;i++){
            s[i].getDetails();
        }
    }

    void display(){
        for(int i=0;i<noOfStudents;i++){
            s[i].displayDetails();
        }
    }
    void average(){
        float sum=0;
        for(int i=0;i<noOfStudents;i++){
            if(s[i].getMarks()!=-1)
                sum+=s[i].getMarks();
        }
        cout<<"The average marks of the class are: "<<sum/noOfStudents<<"\n";
    }
    void Maximum(){
        float max=s[0].getMarks();
        for(int i=0;i<noOfStudents;i++){
            if(s[i].getMarks()!=-1){
                if(max<s[i].getMarks())
                    max=s[i].getMarks();
            }
        }
        cout<<"maximum marks scored are: "<<max<<endl;


    }

    void Minimum(){
        float min=s[0].getMarks();
        for(int i=0;i<noOfStudents;i++){
            if(s[i].getMarks()!=-1){
                if(min>s[i].getMarks())
                    min=s[i].getMarks();
            }
        }
        cout<<"minimum marks scored are: "<<min<<endl;
    }
    void mode(){
        int m[noOfStudents],i,j,r;
        for(i=0;i<noOfStudents;i++){
            m[i]=0;
        }
        for(i=0;i<noOfStudents;i++){
            for(j=i+1;j<noOfStudents;j++){
                if(s[i].getMarks()==s[j].getMarks()){
                    m[i]++;
                    r=i;
                }
            }
        }

    }
    void getAbsent(){
        for(int i=0;i<noOfStudents;i++){
            if(s[i].getMarks()==-1){
                cout<<s[i].getName()<<endl;
            }
        }
    }
};


int main(){
    Marksheet m;
    int choice;
    char c;
    m.get();
    m.display();
    do{
        cout<<"1. average\n2. maximum\n3. minimum\n4. mode\n5. list of absent students\n";
        cin>>choice;
        
        switch (choice){
            case 1:
                m.average();
                break;
            case 2:
                m.Maximum();
                break;
            case 3:
                m.Minimum();
                break;
            case 4:
                m.mode();
                break;
            case 5:
                m.getAbsent();
                break;
            default:
                cout<<"invalid input.\n";
            }
        cout<<"continue?(y/n)\n";
        cin>>c;
        
    }
    while(c=='y'||c=='Y');
    
    return 0;
}