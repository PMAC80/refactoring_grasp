# Definición de clase Calculadora
class Calculadora:
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def sumar(self):
        return self.a + self.b

    def restar(self):
        return self.a - self.b

    def multiplicar(self):
        return self.a * self.b

    def dividir(self):
        if self.b != 0:
            return self.a / self.b
        else:
            print("Error: división por cero.")
            return None

# Programa principal
num1 = float(input("Ingrese primer número: "))
num2 = float(input("Ingrese segundo número: "))
operador = input("Ingrese operador (+, -, *, /): ")

# Crear objeto
calc = Calculadora(num1, num2)

# Seleccionar operación usando match-case (Python 3.10+)
match operador:
    case '+':
        resultado = calc.sumar()
    case '-':
        resultado = calc.restar()
    case '*':
        resultado = calc.multiplicar()
    case '/':
        resultado = calc.dividir()
    case _:
        print("Operador inválido.")
        resultado = None

# Mostrar resultado
if resultado is not None:
    print("Resultado:", resultado)
