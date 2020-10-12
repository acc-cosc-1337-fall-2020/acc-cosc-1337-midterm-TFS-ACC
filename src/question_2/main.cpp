#include"question2.h"

int main()
{

    char cont = 'Y';

    do{

        double num_of_cookies;
        vector<double> recipe;


        cout << "How many cookies do you want to bake?: ";
        cin >> num_of_cookies;

        recipe = get_cookie_ingredients(num_of_cookies);

        cout << "RECIPE" << "\n" << "Cups of Sugar:" << "\t" << recipe[0] << "\n" 
        << "Cups of Butter:" << "\t" << recipe[1] << "\n"
        << "Cups of Flour:" << "\t" << recipe[2] << "\n";

        cout << "Would you like to enter a different ammount? (Y/N): ";
        cin >> cont;

    }while(cont == 'Y' || cont == 'y');

    return 0;
}