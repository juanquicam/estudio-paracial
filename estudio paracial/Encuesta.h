#pragma once
#include "Persona.h"
#include<iostream>
#include <vector>
#include <map>
#include <algorithm>
class Encuesta 
{
    Persona global[10];
    int pos=0;
   
public:
    Encuesta();
    Encuesta(Persona[10]);
    void crearencuesta();
    void creditos();
    void mostar_datos();
    //void manejo_datos();
    int mediana();
    void calcularFrecuenciaAbsoluta();
    void calcularFrecuenciaRelativa();
    void calcularFrecuenciaAcumulada();
    void calcularFrecuenciaAcumuladaRelativa();
    double calcularMedia();
    void calcularModa();
};

