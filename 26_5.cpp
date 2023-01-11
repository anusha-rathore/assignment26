// Define a class Date and write a program to Display Dateand initialise date object
// using Constructors.
#include<iostream>
using namespace std;
class Date{
    private:
     int dd;
     int month;
     int year;

     public:
     Date(int d, int m, int y){
        dd=d;
        month=m;
        year=y;

     }
     void displaydate(){
        cout<<"Date :"<<dd<<"/"<<month<<"/"<<year;
     }

};
int main(){
    Date d1(1,11,2023);
    d1.displaydate();
    
}