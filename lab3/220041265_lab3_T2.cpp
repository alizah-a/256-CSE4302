#include <iostream>
using namespace std;

class RationalNumber{

  private:
    int numerator;
    int denominator;

  public:
    void assign(int num, int den){

         if (den==0){
             cout<<"You can not assign 0 as denominator"<<endl;
                exit(1);
         }
         else {
         numerator = num;
         denominator = den;
    }
    }

    double convert(){

         double n;
          n = (double)numerator/denominator;
          return n;
    }

    void invert(){

         int temp;

         if(numerator==0){
            cout<<"You can not assign 0 as denominator\nInversion failed"<<endl;
         }
         else {
            temp = numerator;
            numerator = denominator;
            denominator = temp;
    }
    }

    void print(){

         cout<<"The Rational Number is "<<numerator<<"/"<<denominator<<endl;
    }
};

int main(){

    RationalNumber rational;

    rational.assign(4,3);
    rational.print();

    rational.convert();

    cout<<"Convert number "<<rational.convert()<<endl;

    rational.invert();
    rational.print();

}
