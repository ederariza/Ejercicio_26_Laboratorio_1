
/*
Ejercicio 26. Escriba un programa que pida tres números e imprima el tipo de triangulo (isósceles, equilátero, escaleno) que se formaría, si sus lados tienen la longitud denida por los números
ingresados. Tenga en cuenta el caso en que los números ingresados no forman un triángulo.
Ej: si se ingresan 3, 3 y 5 se debe imprimir:
Se forma un triangulo isosceles.
y si se ingresan 3, 3 y 6 se debe imprimir:
Las longitudes ingresadas no forman un triangulo
*/

#include <iostream>

using namespace std;

int main()
{
    int lado_1 = 5;
    int lado_2 = 5;
    int lado_3 = 5;

    cout << "Ingrese el lado 1: ";
    cin >> lado_1;
    cout << "Ingrese el lado 2: ";
    cin >> lado_2;
    cout << "Ingrese el lado 3: ";
    cin >> lado_3;

    if (lado_1 == lado_2 && lado_2 == lado_3 && lado_1 == lado_3)
        cout << "Se forma un triangulo equilatero" << endl;

    else if ((lado_1 == lado_2 && lado_3 < 2*lado_1) || (lado_2 == lado_3 && lado_1 < 2*lado_2) || (lado_1 == lado_3 && lado_2 < 2*lado_3) )
        cout << "Se forma un triangulo isoceles" << endl;

    else if ((lado_1 == lado_2 && lado_3 >= 2*lado_1) || (lado_2 == lado_3 && lado_1 >= 2*lado_2) || (lado_1 == lado_3 && lado_2 >= 2*lado_3) )
        cout << "Las longiudes ingresadas no forman un triangulo " << endl;

    else
        cout << "Se forma un triangulo escaleno" << endl;

    return 0;
}
