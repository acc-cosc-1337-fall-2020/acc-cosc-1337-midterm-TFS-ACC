#include "question2.h"

bool test_config()
{
    return true;
}

vector<double> get_cookie_ingredients(int cookies_to_bake){

    vector<double> recipe = {1.5, 1, 2.75};

    double modifier = cookies_to_bake / 48.0;

    for(int i = 0; i < recipe.size(); i++){

        recipe[i] = (recipe[i] * modifier);

    }

    return recipe;

}