#include <Symptom.h>
#include <iostream>
#include <string>

Symptom:: Symptom (string ns): nameSym(ns){}
void Symptom :: setNameSym(string ns){nameSym = ns;}
string Symptom ::  getNameSym(){return nameSym;} 

