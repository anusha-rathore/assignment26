#include<iostream>
using namespace std;
class Complex{
    private:
    int a,b;
    public:
    void setdata(int x,int y){
        a=x;
        b=y;
    }
    void showdata(){
        cout<<"Complex number are "<<a<<"+"<<b<<"i";
    }
}
int main(){
    Complex c1;
    c1.setdata(3,4);
    c1.showdata();
}