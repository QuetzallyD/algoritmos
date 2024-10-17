#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    float base, altura, area;

    // Solicitar al usuario que ingrese la base y la altura
    cout << "Ingresa la base del triangulo: ";
    cin >> base;
    
    cout << "Ingresa la altura del triangulo: ";
    cin >> altura;

    // Calcular el área
    area = (base * altura) / 2;

    // Mostrar el resultado
    cout << "El area del triangulo es: " << area << endl;
    
   
    
    return 0;
}

