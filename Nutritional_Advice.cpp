#include "Nutritional_Advice.h"
#include<iostream>
#include<string>
using namespace std;

Nutritional_Advice :: Nutritional_Advice(string sug=" ",string avd=" ")
{
    mealSuggest = sug;
    mealAvoid = avd;
}

void Nutritional_Advice :: setMealSuggest(string sug)
{
    mealSuggest = sug;
}

void Nutritional_Advice :: setMealAvoid(string avd)
{
    mealAvoid = avd;
}

string Nutritional_Advice :: getMealSuggest() const
{
    return mealSuggest;
}

string Nutritional_Advice :: getMealAvoid() const
{
    return mealAvoid;
}
