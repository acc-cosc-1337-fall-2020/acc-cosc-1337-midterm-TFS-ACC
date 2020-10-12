#include"question1.h"


int main()
{

    char cont = 'Y';

    do {

        string dna;
        string rna;

        cout << "Please enter your DNA string: ";
        cin >> dna;

        rna = get_rna_from_dna(dna);

        cout << "Your RNA string is: " << rna << "\n";

        cout << "Do you want to continue? (Y/N): "; 
        cin >> cont;

    }while(cont == 'Y' || cont == 'y');

    return 0;
}