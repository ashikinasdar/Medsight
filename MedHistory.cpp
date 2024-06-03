#include <iostream>
#include <string>
#include "MedHistory.h"

using namespace std;

MedHistory :: MedHistory(string ed, string med, string all) {
        existDisease = ed;
        medicine = med;
        allergic = all;
    }

void MedHistory :: setExistDisease (string ed){ existDisease = ed;}

void MedHistory :: setMedicine (string med){ medicine = med;}

void MedHistory :: setAllergic (string all){allergic = all;}

string MedHistory :: getExistDisease (){return existDisease;}
    
string MedHistory :: getMedicine (){return medicine;}

string MedHistory :: getAllergic (){return allergic;}