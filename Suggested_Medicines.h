#ifndef SUGGESTEDMEDICINES_H
#define SUGGESTEDMEDICINES_H

#include<iostream>
#include<string>
using namespace std;

class Suggested_Medicines
{
private:
    string medicines;
    float duration;
public:
    Suggested_Medicines(string,float);

    void setMedicines(string);
    void setDuration(float);

    string getMedicines() const;
    float getDuration() const;
};

#endif