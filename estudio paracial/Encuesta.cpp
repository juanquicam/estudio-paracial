#include "Encuesta.h"
#include <iostream>
using namespace std;

Encuesta::Encuesta() {
    this->pos = 0;
}
Encuesta::Encuesta(Persona global[10]) {
	this->global[10] = global[10];
    


}

int Encuesta::mediana() {
	int mediana=0;
	int aux;
	int total=0;
	int i;
	for (i = 0; i < pos; i++) {
		
		aux = global[i].getedad();
		total = aux + total;
	}
	mediana = total / i;
	return mediana;
}
void Encuesta::crearencuesta() {
    string sexo, colados;
    int edad, cantidad_comida, mejoramiento;

        cout << "digite su sexo, 'M' para masculino 'F' para Femenina: ";
        cin >> sexo;
        cout << "digite su edad: ";
        cin >> edad;
        cout << "digite su cuantas veces por semana come en el restaurante universitario: ";
        cin >> cantidad_comida;

        cout << "Esta de acuerdo con los colados que se presentan en el restaurante universitario dias tras dia? (Indicar 'Si' o 'NO'): ";
        cin >> colados;
        if (colados == "No" || colados == "NO") {
            cout << "Que se podria hacer  para mejorar el servicio del resturante universitario de univalle? " << endl;
            cout << "1. Tener un mayor control del ingreso a los distintos comedores " << endl;
            cout << "2. Hacer una campaña anticolados y de esta manera, concientizar a los estudiantes " << endl;
            cout << "3. Ampliar la oferta de comedores universitarios para disminuir las filas en general " << endl;
            cin >> mejoramiento;
        }
        else {
            cout << "4.No sabe/No responde" << endl;
            mejoramiento = 4;
        }
        Persona unapersona(sexo, edad, cantidad_comida, colados, mejoramiento);
        global[pos] = unapersona;
        pos = pos + 1;


        cout << "Persona guardada con exito!!" << endl;



}
void Encuesta:: mostar_datos() {
    int i = 0;
    int j = 0;
    int p = 0;

    i = pos;
    cout << "valor de pos= " << pos << endl;
    cout << "             " << " SEXO   " << "  Edad  " << "   AS   " << "   PC   " << "   MC   " << endl;

    for (j = 0; j < i; j++) {
        cout << "Encuesta " << j+1;
        cout << "\t" << global[j].getsexo();
        cout << "\t" << global[j].getedad();
        cout << "\t" << global[j].getcanti_comida();
        cout <<"\t"  << global[j].getcolados();

        cout<<"\t" << global[j].getmejoramiento();
        cout << endl;

    }
    cout << endl;
    cout << "Leyenda: " << endl << "A.s: Asistencia semanal a central" << endl << "P.c: Percepcion de colados" << endl << "M.C: Mejorar central" << endl;

    cout << "Datos mostrado con exito!! " << endl;
}

void Encuesta::creditos() {
    cout << "Juan José Quiñones Camelo "<< endl;
    cout << " Contacto = 3175272278 " << endl;
    cout << "Codigo estudiantil 202241500-3744" << endl;

    cout << "Creditos mostrado con exito" << endl;
}
/**

void calcularFrecuenciaAbsoluta() {
    map <int, int>  frecuenciaAbsoluta;

    for (int i = 0; i < pos; i++) {
        int edad = global[i].getedad();
        frecuenciaAbsoluta[edad]++;
    }

    cout << "Frecuencia Absoluta:" << endl;
    for (auto it = frecuenciaAbsoluta.begin(); it != frecuenciaAbsoluta.end(); ++it) {
        cout << "Edad: " << it->first << ", Frecuencia: " << it->second << endl;
    }
}

void calcularFrecuenciaRelativa() {
    map<int, double> frecuenciaRelativa;

    for (int i = 0; i < pos; i++) {
        int edad = global[i].getedad();
        frecuenciaRelativa[edad]++;
    }

    cout << "Frecuencia Relativa:" << endl;
    for (auto it = frecuenciaRelativa.begin(); it != frecuenciaRelativa.end(); ++it) {
        double relativa = it->second / pos;
        cout << "Edad: " << it->first << ", Frecuencia Relativa: " << relativa << endl;
    }
}

void calcularFrecuenciaAcumulada() {
    map<int, int> frecuenciaAbsoluta;
    map<int, int> frecuenciaAcumulada;

    for (int i = 0; i < pos; i++) {
        int edad = global[i].getedad();
        frecuenciaAbsoluta[edad]++;
    }

    int acumulada = 0;
    cout << "Frecuencia Acumulada:" << endl;
    for (auto it = frecuenciaAbsoluta.begin(); it != frecuenciaAbsoluta.end(); ++it) {
        acumulada += it->second;
        frecuenciaAcumulada[it->first] = acumulada;
        cout << "Edad: " << it->first << ", Frecuencia Acumulada: " << acumulada << endl;
    }
}

void calcularFrecuenciaAcumuladaRelativa() {
    map<int, int> frecuenciaAbsoluta;
    map<int, double> frecuenciaAcumuladaRelativa;

    for (int i = 0; i < pos; i++) {
        int edad = global[i].getedad();
        frecuenciaAbsoluta[edad]++;
    }

    int acumulada = 0;
    cout << "Frecuencia Acumulada Relativa:" << endl;
    for (auto it = frecuenciaAbsoluta.begin(); it != frecuenciaAbsoluta.end(); ++it) {
        acumulada += it->second;
        double relativa = static_cast<double>(acumulada) / pos;
        frecuenciaAcumuladaRelativa[it->first] = relativa;
        cout << "Edad: " << it->first << ", Frecuencia Acumulada Relativa: " << relativa << endl;
    }
}

double calcularMedia() {
    double total = 0;

    for (int i = 0; i < pos; i++) {
        total += global[i].getedad();
    }

    return total / pos;
}

void calcularModa() {
    map<int, int> frecuenciaAbsoluta;

    for (int i = 0; i < pos; i++) {
        int edad = global[i].getedad();
        frecuenciaAbsoluta[edad]++;
    }

    int maxFrecuencia = 0;
    vector<int> moda;

    for (auto it = frecuenciaAbsoluta.begin(); it != frecuenciaAbsoluta.end(); ++it) {
        if (it->second > maxFrecuencia) {
            maxFrecuencia = it->second;
            moda.clear();
            moda.push_back(it->first);
        }
        else if (it->second == maxFrecuencia) {
            moda.push_back(it->first);
        }
    }

    cout << "Moda:" << endl;
    for (int i = 0; i < moda.size(); i++) {
        cout << "Edad: " << moda[i] << endl;
    }
}
};

/**/