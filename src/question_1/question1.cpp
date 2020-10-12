#include "question1.h"

bool test_config()
{
    return true;
}

string get_rna_from_dna(const string &dna){

    string rna = dna;
    
    int len = rna.length();

    for (int i = 0; i < len ; i++){

        if (rna[i] == 'T'){

            rna[i] = 'U';

        }

    }

    return rna;

}

