#include "Persona.h"
#include <iostream>
using namespace std;


Persona::Persona(){}

Persona::Persona(string sexo, int edad, int canti_comida, string colados, int mejoramiento) {
	this->sexo = sexo;
	this->edad=edad;
	this->canti_comida = canti_comida;
	this->colados = colados;
	this->mejoramiento = mejoramiento;
}

string Persona::getsexo() {
	return sexo;
}

int Persona::getedad() {
	return edad;
}

int Persona::getcanti_comida() {
	return canti_comida;
}
string Persona::getcolados() {
	return colados;
}
int Persona::getmejoramiento() {
	return mejoramiento;
}


