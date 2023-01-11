
#include<iostream>
using namespace std;
class bank
{
  private:
  float principal,rate,year,si;
  public:
  bank(float p, float r, float y){
    principal=p;
    rate=r;
    year=y;

  }
  void read(){
    cout<<"principal :"<<principal<<endl;
    cout<<"rate of interest :"<<rate<<endl;
    cout<<"year :" <<year<<endl;
  }
  
  void displaye_si(){
    si=(principal*rate*year)/100;
    cout<<"simple interest :"<<si;
  }

};
int main(){
    bank b1(2000,3,5);
    b1.read();
    b1.displaye_si();
}