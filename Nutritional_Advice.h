#ifndef NUTRITIONALADVICE_H
#define NUTRITIONALADVICE_H

#include<iostream>
#include<string>
using namespace std;

class Nutritional_Advice
{
private:
    string mealSuggest;
    string mealAvoid;
public:
    Nutritional_Advice(string,string);

    void setMealSuggest(string);
    void setMealAvoid(string);

    string getMealSuggest() const;
    string getMealAvoid() const;
};

#endif