import math

fatorial = math.factorial(10)
soma_digitos = sum(int(digito) for digito in str(fatorial))
print(soma_digitos)
