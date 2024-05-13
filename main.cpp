#include <stdio.h>
int main (){

int num1, num2, num3;

printf("\nIngresa 3 números; deben ser mayores de 3 y menores de 15: \n");
scanf("%d %d %d", &num1, &num2, &num3);

if ((num1<3 || num1 >15) || (num2<3 || num2>15) || (num3<3 || num3>15)) {
    printf ("\n Error. Los números dentro de los parametros dichos. \n");

    return 1;
}

int mayor, centro, menor;
if (num1>=num2 && num1 >=num3) {
    mayor=num1;
    if (num2 >= num3){
        centro = num2;
        menor = num3;
    } else {
        centro = num3;
        menor = num2;
    }
} else if (num2>=num1 && num2>=num3) {
    mayor=num2;
    if (num1>=num3) {
        centro = num1;
        menor = num3;
    } else {
        centro = num3;
        menor = num1;
    }
} else if (num3>=num1 && num3>=num2) {
    mayor=num3;
    if (num1>=num2) {
        centro = num1;
        menor = num2;
    } else {
        centro = num2;
        menor = num1;
    }
}

printf("\n Asi quedarian los Numeros ordenados: %d, %d,  %d\n", mayor, centro, menor);


    return 0;
}