#El principio Expert dice: “La clase que tiene la información necesaria es la que debe hacerse responsable de la operación”.

# Clase Calculadora (Expert aplicado)
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
if __name__ == "__main__":
    num1 = float(input("Ingrese primer número: "))
    num2 = float(input("Ingrese segundo número: "))
    operador = input("Ingrese operador (+, -, *, /): ")

    calc = Calculadora(num1, num2)   # Expert: tiene la info y sabe operar

    if operador == '+':
        resultado = calc.sumar()
    elif operador == '-':
        resultado = calc.restar()
    elif operador == '*':
        resultado = calc.multiplicar()
    elif operador == '/':
        resultado = calc.dividir()
    else:
        print("Operador inválido.")
        resultado = None

    if resultado is not None:
        print("Resultado:", resultado)
