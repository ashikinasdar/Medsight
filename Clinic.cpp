#include "Clinic.h"
#include<iostream>
#include<string>
using namespace std;

Clinic :: Clinic(string ct=" ",string st=" ",string clna=" ",string avl=" ",int clno=0)
{
    cityName = ct;
    stateName = st;
    clinicName = clna;
    availability = avl;
    ClinicNo = clno;
}

void Clinic :: setCity(string ct)
{
    cityName = ct;
}

void Clinic :: setState(string st)
{
    stateName = st;
}

void Clinic :: setClinicName(string clna)
{
    clinicName = clna;
}

void Clinic :: setAvailability(string avl)
{
    availability = avl;
}

void Clinic :: setCity(string ct)
{
    cityName = ct;
}

void Clinic :: setClinicNo(int clno)
{
    ClinicNo = clno;
}

string Clinic :: getCity() const
{
    return cityName;
}

string Clinic :: getState() const
{
    return stateName;
}

string Clinic :: getClinicName() const
{
    return clinicName;
}

string Clinic :: getAvailability() const
{
    return availability;
}

int Clinic :: getClinicNo() const
{
    return ClinicNo;
}