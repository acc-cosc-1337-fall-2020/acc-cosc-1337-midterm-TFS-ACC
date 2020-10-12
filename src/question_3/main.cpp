#include "question3.h"


int main()
{

    char cont = 'Y';

    do {

        double Celcius;
        double Fahrenheit;

        cout << "Please enter the temperature in Celcius to recieve the temperature in Fahrenheit: ";
        cin >> Celcius;

        Fahrenheit = get_fahrenheit(Celcius);

        cout << "Your Temperature in Fahrenheit is: " << Fahrenheit << "\n";

        cout << "Do you want to continue? (Y/N): "; 
        cin >> cont;

    }while(cont == 'Y' || cont == 'y');

    return 0;
}