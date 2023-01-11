#include<iostream>
using namespace std;
class Cube{
    private :
     int a,v;
     public:
     Cube(int x)
     {
        a=x;
     }
     int getvolume(){
          v=a*a*a;
         return v;
     }

};
int main(){
    Cube c1(5);
    cout<<"volume = "<<c1.getvolume();
}