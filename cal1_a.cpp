#include <iostream>
using namespace std;

// Clase Calculadora
class Calculadora {
private:
    double num1, num2;

public:
    void ingresarDatos() {
        cout << "Ingrese primer número: ";
        cin >> num1;
        cout << "Ingrese segundo número: ";
        cin >> num2;
    }

    double sumar() {
        return num1 + num2;
    }

    double restar() {
        return num1 - num2;
    }

    double multiplicar() {
        return num1 * num2;
    }

    double dividir() {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Error: división por cero." << endl;
            return 0;
        }
    }
};

// Función principal
int main() {
    Calculadora calc;
    char oper;

    calc.ingresarDatos();

    cout << "Ingrese operador (+, -, *, /): ";
    cin >> oper;

    switch (oper) {
        case '+':
            cout << "Resultado: " << calc.sumar() << endl;
            break;
        case '-':
            cout << "Resultado: " << calc.restar() << endl;
            break;
        case '*':
            cout << "Resultado: " << calc.multiplicar() << endl;
            break;
        case '/':
            cout << "Resultado: " << calc.dividir() << endl;
            break;
        default:
            cout << "Operador inválido." << endl;
    }
    

    return 0;
}

