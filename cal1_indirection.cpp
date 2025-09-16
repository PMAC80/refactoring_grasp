//Este patrón dice: “Cuando un objeto A necesita comunicarse con B, mejor hacerlo a través de un intermediario C para reducir el acoplamiento”.

#include <iostream>
using namespace std;

// Clase Calculadora (sin cambios)
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

// Clase Intermediaria (Indirection)
class Operacion {
private:
    Calculadora calc;
public:
    double ejecutar(double a, double b, char op) {
        switch (op) {
            case '+': return calc.sumar(a, b);
            case '-': return calc.restar(a, b);
            case '*': return calc.multiplicar(a, b);
            case '/': return calc.dividir(a, b);
            default:
                cout << "Operador inválido." << endl;
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

    Operacion operacion; // Indirection
    cout << "Resultado: " << operacion.ejecutar(x, y, op) << endl;

    return 0;
}
