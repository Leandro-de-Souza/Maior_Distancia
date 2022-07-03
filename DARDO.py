
print("Digite as tres distancias: ")
D1 = float(input())
D2 = float(input())
D3 = float(input())

if D1 > D2 and D1 > D3:
    maiorD = D1
elif D2 > D3:
    maiorD = D2
else:
    maiorD = D3

print(f"MAIOR DISTANCIA = {maiorD:.2f}")

