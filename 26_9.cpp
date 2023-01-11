
#include<iostream>
using namespace std;
class Bill{
   private :
   int c_number;
   string c_name;
   double bill;
   int unit;

   public:
   void get(){
    cout<<"enter customer number"<<endl;
    cin>>c_number;
    cout<<"enter name"<<endl;
    cin>>c_name;
    cout<<"enter unit";
    cin>>unit;
    
   }
   void put(){
    cout<< "Eneterd Details of customer are :"<<endl;
   cout<<"customer name :"<< c_name<<endl;
   cout<<"customer id : "<< c_number<<endl;
   cout<<"Number of unit consumed :"<<unit<<endl;
   cout<<"Total Bill :"<<bill;


   }

   void calculateBill(){

    if (unit<=100){
        bill= unit *1.20;

    }
    else if (unit<=200)
    {
        bill= 100*1.20 + (unit -100 ) * 2;
    }
    else
     bill= 100*1.20 + 100*2+ (unit -200)*3;
   }

};

int main(){
    Bill b1;
    b1.get();
        b1.calculateBill();

    b1.put();
}