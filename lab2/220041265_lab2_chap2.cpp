#include <iostream>
using namespace std;

int main(){

    int a,b,c,d;
    char slash;
    float sum = 0;

    cout<<"Enter the first fraction ";
    cin>>a>>slash>>b;

    cout<<"Enter the second fraction ";
    cin>>c>>slash>>d;

    cout<<"sum = "<<(a*d)+(c*b)<<"/"<<b*d;
}
