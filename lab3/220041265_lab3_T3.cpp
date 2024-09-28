#include <iostream>
using namespace std;

class bankAccount{

  private:
      string name;
      int account_num;
      string account_type;
      int balance_amount=0;

  public:
    void CustomerDetails(string c_name , int cAccount_num){
         name = c_name;
         account_num = cAccount_num;
    }

    void accountType(string type){

         account_type = type;
    }

    void balance(){
         cout<<"Balance amount: "<< balance_amount<<endl;
    }

    void deposit(int a){

        balance_amount = balance_amount + a;
       cout<<"Balance deposited: "<<balance_amount<<endl;
  }
    void withdrawl(int w){

         balance_amount = balance_amount-w;
    }

void display(){

         cout<<"\nName: "<< name<<endl;
         cout<<"\nAccount number: "<< account_num<<endl;
         cout<<"\nAccount type: "<< account_type<<endl;
         cout<<"\nBalance: "<< balance_amount<<endl;
    }

};

int main (){

    bankAccount customer;

    customer.CustomerDetails("Sara", 112345);
    customer.accountType("Saving");
    customer.balance();
    customer.deposit(120);
    customer.withdrawl(2);
    customer.display();

}
