//Este patrón dice: “Asignar responsabilidades de modo que las clases dependan lo menos posible unas de otras”

#include <iostream>
using namespace std;

// Clase Calculadora (ahora solo calcula -> Low Coupling)
class Calculadora {
public:
    double sumar(double a, double b) { return a + b; }
    double restar(double a, double b) { return a - b; }
    double multiplicar(double a, double b) { return a * b; }
    double dividir(double a, double b) {
        if (b != 0) return a / b;
        else {
            cout << "Error: división por cero." << endl;
            return 0;
        }
    }
};

// Programa principal
int main() {
    double x, y;
    char op;

    cout << "Ingrese primer número: ";
    cin >> x;
    cout << "Ingrese segundo número: ";
    cin >> y;
    cout << "Ingrese operador (+, -, *, /): ";
    cin >> op;

    Calculadora calc; // ahora no depende de cin/cout
    double resultado;

    switch (op) {
        case '+': resultado = calc.sumar(x, y); break;
        case '-': resultado = calc.restar(x, y); break;
        case '*': resultado = calc.multiplicar(x, y); break;
        case '/': resultado = calc.dividir(x, y); break;
        default:
            cout << "Operador inválido." << endl;
            return 0;
    }

    cout << "Resultado: " << resultado << endl;
    return 0;
}
