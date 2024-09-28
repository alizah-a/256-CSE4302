#include <iostream>
using namespace std;

 struct fraction {
        int num;
        int dem;
        int num1;
        int dem1;

   };

int main(){

   fraction frac;
   char op;

   cout<<"Enter first fraction- ";
   cin>>frac.num>>op>>frac.dem;

    cout<<"Enter second fraction- ";
    cin>>frac.num1>>op>>frac.dem1;

    float sum = 0;

    cout<<"sum = "<<(frac.num*frac.dem1)+(frac.num1*frac.dem)<<"/"<<(frac.dem*frac.dem1);
}
