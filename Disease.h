#ifndef DISEASE_H
#define DISEASE_H
#include "Symptom.h"
#include <iostream>
#include <string>
using namespace std;

class Disease {
    private:
        string nameDisease;
        string desc;
        Symptom *symptom [100];
        int symptomCount;

    public: 
    Disease () ;
    Disease(string nd, string des);

    void setDiseaseName (string);
    void setDiseaseDesc (string);

    string getDiseaseName ();
    string getDiseaseDesc();

    void addDisease ();
    void addSymptom (Symptom*);
    void printSymptoms ();

    bool hasSymptom(const string& symptomName); 

        
};

#endif