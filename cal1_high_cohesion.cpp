//Este patrón dice: “Una clase debe tener responsabilidades relacionadas y enfocadas”.

#include <iostream>
using namespace std;

// Clase Calculadora (solo cálculos)
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

// Clase Vista (solo interacción con el usuario)
class Vista {
public:
    void mostrarResultado(double r) { cout << "Resultado: " << r << endl; }
    void mostrarError() { cout << "Operador inválido." << endl; }
    void pedirNumeros(double &a, double &b) {
        cout << "Ingrese primer número: ";
        cin >> a;
        cout << "Ingrese segundo número: ";
        cin >> b;
    }
    char pedirOperador() {
        char op;
        cout << "Ingrese operador (+, -, *, /): ";
        cin >> op;
        return op;
    }
};

// Programa principal
int main() {
    double x, y, resultado;
    char op;

    Vista vista;
    Calculadora calc;

    vista.pedirNumeros(x, y);
    op = vista.pedirOperador();

    switch (op) {
        case '+': resultado = calc.sumar(x, y); break;
        case '-': resultado = calc.restar(x, y); break;
        case '*': resultado = calc.multiplicar(x, y); break;
        case '/': resultado = calc.dividir(x, y); break;
        default: vista.mostrarError(); return 0;
    }

    vista.mostrarResultado(resultado);
    return 0;
}
