#ifdef DISEASE_H
#define DISEASE_H
#include "Symptom.h"
#include <iostream>
#include <string>

class Disease {
    private:
        string nameDisease;
        string desc;
        Symptom *symptom [100];
        int symptomCount;

    public: 
    Disease (string, string);

    void setDiseaseName (string);
    void setDiseaseDesc (string);

    string getDiseaseName ();
    string getDiseaseDesc();

    void addDisease ();
    void addSymptom (Symptom*);
    void printsymptom ();

        
};

#endif