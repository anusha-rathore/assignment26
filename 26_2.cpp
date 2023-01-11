#include<iostream>
using namespace std;
class Time
{
  private:
  int hour ,min,sec;
  public:
  void settime(int h,int m,int s){
    hour=h;
    min=m;
    sec=s;}
    void showdata(){
        cout<<"Time : " <<hour<<"hr " << min <<"min "<< sec <<"sec";
    }
    void normalization(){
        min=min+sec/60;
        sec=sec%60;
        hour=hour + min/60;
        min=min%60;
    }
    Time add(Time t){
        Time temp;
        temp.hour=hour+t.hour;
        temp.min=min+t.min;
        temp.sec=sec+t.sec;
        temp.normalization();
        return temp;
    }
  
};
int main(){
    Time t1,t2,t3;
    t1.settime(3 , 60,20);
    t2.settime(2,30,30);
    t3=t1.add(t2);
    t3.showdata();
    

}