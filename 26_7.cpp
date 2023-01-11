// Define a class Box and write a program to enter length, breadth and height and
// initialise objects using constructor also define member functions to calculate volume
// of the box.
#include<iostream>
using namespace std;
class Box{
   private:
   int length , breadth , height;
   int volume;
   public:
   Box(int l,int b,int h){
      length=l;
      breadth=b;
      height=h;

   }
   int getvolume(){
      volume=length*breadth*height;
 
 return volume;
   }
};
int main(){
    int a,b,c;
    cout<<"enter length";
    cin>>a;
    cout<<"enter breadth";
    cin>>b;
    cout<<"enter height";
    cin>>c;
    Box b1(a,b,c);
    cout<<"volume :"<< b1.getvolume();
}