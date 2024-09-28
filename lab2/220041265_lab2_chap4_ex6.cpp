#include <iostream>
using namespace std;

int main(){
    enum etype {laborer,secretary,manager,accountant,executive,reseacher};
    etype des;
    char alpha;

    cout<<"Enter the employee type(FIRST LETTER ONLY) laborer,secretary,manager,accountant,executive,researcher ";
    cin>>alpha;

    switch (alpha){

       case 'l':
        cout<<"laborer";
        break;

        case 's':
         cout<<"secretary";
         break;

        case 'm':
         cout<<"manager";
         break;

        case 'a':
         cout<< "accountant";
         break;

        case 'e':
         cout<<"executive";
         break;

        case 'r':
         cout<<"reseacher";
         break;

        default :
         cout<<"Error";


}
}
