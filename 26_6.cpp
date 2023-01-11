// Define a class student and write a program to enter student details using constructor
// and define member function to display all the details.
#include<iostream>
using namespace std;
class student{
       private:
       string s_name;
       int s_rollnumber;
       float marks;
        public:
        student(string name,int r,int m){
            s_name=name;
            s_rollnumber=r;
            marks=m;

        }   

        void display(){

            cout<<"student name "<<s_name<<endl;
            cout<<"student rollnumber "<< s_rollnumber<<endl;
            cout<<"student marks "<<marks<<endl;
        }
       
    };
    int main(){
        student s1("adarsh" ,92,7.9);
        s1.display();
        
    }