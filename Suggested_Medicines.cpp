#include "Suggested_Medicines.h"
#include<iostream>
#include<string>
using namespace std;

Suggested_Medicines :: Suggested_Medicines(string med=" ", float dur=0.0)
{
    medicines = med;
    duration = dur;
}

void Suggested_Medicines :: setMedicines(string med)
{
    medicines = med;
}

void Suggested_Medicines :: setDuration(float dur)
{
    duration = dur;
}

string Suggested_Medicines :: getMedicines() const
{
    return medicines;
}

float Suggested_Medicines :: getDuration() const
{
    return duration;
}

