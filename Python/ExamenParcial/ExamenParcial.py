import numpy as np;

print("Ingresa el número de filas de la Matrix A:")
RA = int(input())
print("Ingresa el número de Columnas de la Matrix A:")
CA = int(input())

mA = np.zeros([RA,CA],np.float32)
for i0 in range(0,RA):
    for j0 in range(0,CA):
        print("Ingresa el valor A[",i0," , ",j0,"]")
        mA[i0,j0] = np.float32(input())
print(mA)
print("Ingresa el número de filas de la Matrix B:")
RB = int(input())
print("Ingresa el número de Columnas de la Matrix B:")
CB = int(input())
mB = np.zeros([RB,CB],np.float32)
for i0 in range(0,RB):
    for j0 in range(0,CB):
        print("Ingresa el valor B[",i0," , ",j0,"]")
        mB[i0,j0] = np.float32(input())
print(mB)

if RA != RB or CA != CB:
    print("Las matrices son de diferentes dimensiones y no se pueden sumar")
else:
    print("Resultado de la suma")
    print(mA + mB)

if  CA != RB:
    print("Las dimensiones de las matrices no permiten multiplicar")
else:
    print("Resultado de la mutiplicación")
    print("Dimensiones de la matriz resultante ",RA, " x ",CB)
    print(np.dot(mA,mB))