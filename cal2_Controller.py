# Clase Calculadora (sin cambios)
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


# Clase Controladora (único patrón aplicado: Controller)
class CalculadoraController:
    def __init__(self, calculadora):
        self.calculadora = calculadora

    def ejecutar(self, operador):
        if operador == '+':
            return self.calculadora.sumar()
        elif operador == '-':
            return self.calculadora.restar()
        elif operador == '*':
            return self.calculadora.multiplicar()
        elif operador == '/':
            return self.calculadora.dividir()
        else:
            print("Operador inválido.")
            return None


# Programa principal (mínimo)
if __name__ == "__main__":
    num1 = float(input("Ingrese primer número: "))
    num2 = float(input("Ingrese segundo número: "))
    operador = input("Ingrese operador (+, -, *, /): ")

    calc = Calculadora(num1, num2)
    controller = CalculadoraController(calc)

    resultado = controller.ejecutar(operador)

    if resultado is not None:
        print("Resultado:", resultado)
