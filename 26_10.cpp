
#include<iostream>
using namespace std;
class StaticCount {
    private:
    static int count;
    public:
    
    void getincrement(){
  
       count++;
    } 
 
     int getcount()
    {
        return count;
    }
};
int StaticCount::count =0;

int main(){
    StaticCount s1;
   
 s1.getincrement();
 s1.getincrement();
 s1.getincrement();
    
    cout<<"number of times a function is called."<<s1.getcount();

    }