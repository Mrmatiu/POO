// Programa que declara la clase Alumno
// 26 de febrero de 2017
// Omar Álvarez X.
#include <iostream>
#include <string.h>

using namespace std;

class Alumno
{public:
    Alumno (){
        cout << "Los datos del estudiante son \n";
    }
    char nombre[15];
    void actualizaDatos(char[], int, int, int, int, int, int);
    void imprimeDatos();
    bool validaMatricula(int );
    void pideCalificaciones(){}
    void Cpromedio(float );

 private:
    int edad;
    int matricula;
    int Biologia;
    int Matematicas;
    int Quimica;
    int Fisica;
    float promedio;

};

//Asigna un nuevo valor a las variables
void Alumno::actualizaDatos(char n[], int e, int c, int b, int m, int q, int f)
{
 strcpy(nombre,n);
 edad = e;
 matricula = c;
 Biologia = b;
 Matematicas = m;
 Quimica = q;
 Fisica = f;

}

//Imprime datos del alumno
void Alumno::imprimeDatos()
{
 cout << "Nombre: " << nombre << endl;
 cout << "Edad:   " << edad   << endl;
 cout << "matricula: " << matricula << endl;
 cout << "Las calificaciones del estudiante son: " << endl;
 cout << "Biologia: " << Biologia << endl;
 cout << "Matematicas: " << Matematicas << endl;
 cout << "Quimica: " << Quimica << endl;
 cout << "Fisica: " << Fisica << endl;
 cout << "El promedio es: " << promedio << endl;

}

void Alumno::Cpromedio(float p)
{
 promedio = (Biologia + Matematicas + Quimica + Fisica)/4;

}


//void Alumno::pideCalificaciones(){}

int main()
{
 Alumno a;
 Alumno *ptrA = &a;
 Alumno &refA = a;

 a.actualizaDatos("Ana", 18, 007, 64, 99, 12, 70);

 a.imprimeDatos();
 cout << endl;

 return 0;
}

