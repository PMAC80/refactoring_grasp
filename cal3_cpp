//mvc

#include <iostream>
using namespace std;

// Modelo: solo realiza cálculos
class CalculadoraModelo {
public:
    double sumar(double a, double b) { return a + b; }
    double restar(double a, double b) { return a - b; }
    double multiplicar(double a, double b) { return a * b; }
    double dividir(double a, double b) {
        if (b != 0) return a / b;
        else throw runtime_error("División por cero");
    }
};

// Vista: solo muestra mensajes y recibe datos
class CalculadoraVista {
public:
    void mostrarResultado(double resultado) {
        cout << "Resultado: " << resultado << endl;
    }
    void mostrarError(const string& mensaje) {
        cout << "Error: " << mensaje << endl;
    }
    double pedirNumero(const string& texto) {
        double num;
        cout << texto;
        cin >> num;
        return num;
    }
    char pedirOperador() {
        char op;
        cout << "Ingrese operador (+, -, *, /): ";
        cin >> op;
        return op;
    }
};

// Controlador: conecta modelo y vista
class CalculadoraControlador {
    CalculadoraModelo modelo;
    CalculadoraVista vista;
public:
    void ejecutar() {
        double a = vista.pedirNumero("Ingrese primer número: ");
        double b = vista.pedirNumero("Ingrese segundo número: ");
        char op = vista.pedirOperador();
        double resultado;
        try {
            switch (op) {
                case '+': resultado = modelo.sumar(a, b); break;
                case '-': resultado = modelo.restar(a, b); break;
                case '*': resultado = modelo.multiplicar(a, b); break;
                case '/': resultado = modelo.dividir(a, b); break;
                default:
                    vista.mostrarError("Operador inválido.");
                    return;
            }
            vista.mostrarResultado(resultado);
        } catch (const exception& e) {
            vista.mostrarError(e.what());
        }
    }
};

int main() {
    CalculadoraControlador controlador;
    controlador.ejecutar();
    return 0;
}