#include <iostream>
using namespace std;


class Bankaccount{

private:
    int acc_no;
    string acc_name;
    string acc_type;
    int balance;
    int min_balance;

public:
    void bankInfo(){

      cout<<"Account Number : "<<acc_no<<endl;
      cout<<"Account Name: "<<acc_name<<endl;
      cout<<"Account Type: "<<acc_type<<endl;
      cout<<"balance: "<<balance<<endl;
      cout<<"Minimum Balance: "<min_balance<<endl;

    }

    void showBalance(){

         cout<<"Current balance: "<<balance<<endl;
    }

    void deposit(int money){

        if(money>0){
            balance=balance+money;
            cout<<"Amount: "<<money<<endl;
        }
        else
            cout<<"failed to deposit"<<endl;
    }

    void withdrawal(int money){

       if(money>0&&(balance-money)>=min_balance){
          balance=balance-money;
          cout<<"Money withdrawal successful"<<endl;
       }
       else (money<=0){
        cout<<"Not enough amount to withdraw"<<endl;
       }
    }
    void giveInterest(float defaut_int = 3.0){

       float interest = (balance*default_int)/100;
       float s_tax = interest*0.1;
       float f_interest = interest-s_tax;
       balance = balance + f_interest;

       cout<<"Interest: "<<interest<<endl;
       cout<<"Source tax credit: "<<s_tax;
    }

   ~Bankaccount(){

      cout<<"The account of "<<acc_name<<"with account number"<<acc_no<<"is destroyed with a balance BDT "<<balance<<endl;
   }


};
int main (){

    Bankaccount b_acc(123,'Ali','Saving',1000);

    b_acc.bankInfo();

    b_acc.deposit(200);
    b_acc.withdrawal(20);
    giveInterest(10);




return 0;
}
