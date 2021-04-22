#include <iostream>
using namespace std;
float base;
float altura;
float resultado;
int opcion;
void calculo(){
cout << "Ingrese la base del triangulo: ";
cin >> base;
cout << "Ingrese la altura del triangulo: ";
cin >> altura;
resultado=(base*altura)/2; // Formula matematica para calcular el area del triangulo.
cout << "El area de su triangulo es: " << resultado << endl;
cout << "Desea calcular otro triangulo [1]=Si [2]=No ";
cin >> opcion;
}
int main(){
while (opcion != 2)

    {calculo();}
cin.ignore();
cin.get(); // Detenemos el programa con estas dos funciones similar a la funcion system("pause");
}