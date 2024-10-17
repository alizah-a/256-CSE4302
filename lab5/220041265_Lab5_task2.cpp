#include <iostream>
using namespace std;


class Empinfo{

private:
    string EmpName;
    int ID;
    float baseSalary;
    int emp_age;
    int joiningYear;

    void calculateTotalSalary(){

        int TA, HA, MA;

       (baseSalary*0.3)+(0.1*MA)+(0.3*HA)+(0.1*MA);
    }

    void getStatus(){

         if(emp_age<=25){
            if(baseSalary<=20000){
                cout<<"low"<<endl;
            }
            else if (baseSalary>20000){
            cout<<"Moderate"<<endl;
         }
         }
         if(emp_age>25){
            if(baseSalary<=21000){
                cout<<"Low"<<endl;
            }
            else if(baseSalary>21000&&baseSalary<=60000){
                cout<<"Moderate"<<endl;
            }
            else if (baseSalary>60000){
                cout<<"High"<<endl;
            }
         }

    }
    void calculateBonus(int a){
        if(baseSalary<=20000 && baseSalary<=21000){
            (baseSalary*0.05)/100;
        }
        else if(baseSalary>21000&&baseSalary<=60000){
            (baseSalary*0.1)/100;
        }
        else if(baseSalary>60000){
            (baseSalary*0.15)/100;
        }
    }

public:
    void FeedInfo(string e_name, int e_id, float base, int join){

          EmpName=e_name;
          ID=e_id;
          baseSalary=base;
          joiningYear=join;

    }
    void ShowInfo(){

        cout<<"Employee Name: "<<EmpName<<endl;
        cout<<"Employee ID: "<<ID<<endl;
        cout<<"Salary: "<<baseSalary<<endl;
        cout<<"Joining Date: "<<joiningYear<<endl;
    }

};
int main (){

     Empinfo emp;

return 0;
}

