#include <iostream>
using namespace std;

class Temperature {

      private:

         int temperature;
         int increamentSteps;

      public:

          void setIncreamentStep (int step){

               increamentSteps = step;
          }

          int getTemperature(){

               return temperature;
          }
          void increament (){

               temperature = temperature + increamentSteps;
         }
          int resetTemperature(){

               temperature = 0;
               return temperature;
         }

};
int main (){

    Temperature temperature;

    temperature.resetTemperature();

    temperature.setIncreamentStep(5);
    temperature.setIncreamentStep(15);

    temperature.increament();

    int c;

    c = temperature.getTemperature();

    cout<<"Temperature "<<c;

    int t;

    t = temperature.resetTemperature();

    cout<<"Temperature after reseting "<<t<<endl;


return 0;
}
