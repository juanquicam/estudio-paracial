#pragma once
#include <iostream>
using namespace std;
class Persona
{
private: 

	string sexo;
	int edad;
	int canti_comida;
	string colados;
	int mejoramiento;


public:
	Persona();
	Persona(string, int, int, string, int );

	string getsexo();
	int getedad();
	int getcanti_comida();
	string getcolados();
	int getmejoramiento();


};

