#include "Clinic.h"
#include<iostream>
#include<string>
using namespace std;

Clinic :: Clinic () : stateName(" "), clinicName(" "), availability(" "), ClinicNo(0) {}

Clinic :: Clinic(string st=" ",string clna=" ",string avl=" ",string clno=" ")
{
    stateName = st;
    clinicName = clna;
    availability = avl;
    ClinicNo = clno;
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
    availability = "24 hours";
}

void Clinic :: setClinicNo(string clno)
{
    ClinicNo = clno;
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

string Clinic :: getClinicNo() const
{
    return ClinicNo;
}

void Clinic :: displayclinic() const
{
    if(stateName == "Johor" || stateName=="johor")
    {
        Clinic("Johor","Sothern Medical Clinic","24 hours","07 336 1731");
    }
    else if(stateName == "Sarawak" || stateName=="sarawak")
    {
        Clinic("Sarawak","Kotaraya Clinic","24 hours","08 223 2177");
    }
    else if(stateName == "Sabah" || stateName=="sabah")
    {
        Clinic("Sabah","Klinik Butiza Alamesra","24 hours","08 840 2613");
    }
    else if(stateName == "Penang" || stateName=="penang")
    {
        Clinic("Penang","Klinik Metrocare","24 hours","04 505 4365");
    }
    else if(stateName == "Selangor" || stateName=="selangor")
    {
        Clinic("Selangor","Klinik Anda","24 hours","01 337 4398");
    }
    else if(stateName == "Kedah" || stateName=="kedah")
    {
        Clinic("Kedah","Klinik Metrocare","24 hours","04 771 5052");
    }
    else if(stateName == "Perak" || stateName=="perak")
    {
        Clinic("Perak","Klinik Zabrina","24 hours","05 282 6771");
    }
    else if(stateName == "Kelantan" || stateName=="kelantan")
    {
        Clinic("Sarawak","Klinik Ikhtiyar","24 hours","09 791 7117");
    }
    else if(stateName == "Sabah" || stateName=="sabah")
    {
        Clinic("Sabah","Klinik Butiza Alamesra","24 hours","08 840 2613");
    }
    else if(stateName == "Pahang" || stateName=="pahang")
    {
        Clinic("Pahang","Klinik Famili","24 hours","01 256 93695");
    }
    else if(stateName == "Terengganu" || stateName=="terengganu")
    {
        Clinic("Terengganu","Klinik Rohana & Seripah","24 hours","09 623 0369");
    }
    else if(stateName == "Negeri Sembilan" || stateName=="negeri sembilan")
    {
        Clinic("Negeri Sembilan","Klinik Anda","24 hours","06 675 8668");
    }
    else if(stateName == "Melaka" || stateName=="melaka")
    {
        Clinic("Melaka","Klinik Bukit Katil","24 hours","06 252 2000");
    }
    else if(stateName == "Perlis" || stateName=="perlis")
    {
        Clinic("Perlis","Klinik Anda Kangar","24 hours","01 222 97831");
    }
    else if(stateName == "Kualalumpur" || stateName=="kualalumpur")
    {
        Clinic("Kualalumpur","Klinik Damar","24 hours","03 414 6000");
    }
    cout << "Clinic Name: " << getClinicName() << endl;
    cout << "State: " << getState() << endl;
    cout << "Availablity: " << getAvailability() << endl;
    cout << "Contact no: " << getClinicNo() << endl;
}