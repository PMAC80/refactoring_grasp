#El principio Creator dice: “Una clase debe ser responsable de crear objetos que necesita”.
"""
2. Creator: Se utiliza una clase (por ejemplo, FabricaCalculadora) con un método estático para crear instancias de Calculadora. Así, la clase que necesita el objeto es responsable de crearlo, siguiendo el principio Creator
"""
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


# Clase Creator (se encarga de crear Calculadora)
class FabricaCalculadora:
    @staticmethod
    def crear_calculadora(a, b):
        return Calculadora(a, b)


# Programa principal
if __name__ == "__main__":
    num1 = float(input("Ingrese primer número: "))
    num2 = float(input("Ingrese segundo número: "))
    operador = input("Ingrese operador (+, -, *, /): ")

    calc = FabricaCalculadora.crear_calculadora(num1, num2)  # Creator aplicado

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

    if resultado is not None:
        print("Resultado:", resultado)
