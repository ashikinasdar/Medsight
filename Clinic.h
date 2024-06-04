#ifndef CLINIC_H
#define CLINIC_H

#include<iostream>
#include<string>
using namespace std;

class Clinic
{
private:
    string cityName;
    string stateName;
    string clinicName;
    string availability;
    int ClinicNo;
public:
    Clinic(string,string,string,string,int);

    void setCity(string);
    void setState(string);
    void setClinicName(string);
    void setAvailability(string);
    void setClinicNo(int);

    string getCity() const;
    string getState() const;
    string getClinicName() const;
    string getAvailability() const;
    int getClinicNo() const;
};

#endif