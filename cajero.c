#include <stdio.h>

int main(void) {
    int monto;
    int b1, b5, b10, b20, b50, b100;
    printf("Ingrese un valor de 20 a 5000 para retirar: ");
    scanf("%d", &monto);

    if(monto<20){
        printf("El valor solcitado fue menor al minimo");
        return 1;
    }

    if(monto>5000){
        printf("El valor solcitado fue mayor al maximo");
        return 2;
    }

    for(b100=0; monto>=100 ; b100++){
       monto=monto-100;
    }

    for(b50=0; monto>=50 ; b50++){
        monto=monto-50;
    }

    for(b20=0; monto>=20 ; b20++){
        monto=monto-20;
    }

    for(b10=0; monto>=10 ; b10++){
        monto=monto-10;
    }

     for(b5=0; monto>=5 ; b5++){
        monto=monto-5;
    }

    for(b1=0; monto>=1 ; b1++){
        monto=monto-1; 
    }
     {
     printf("Billetes de 100= %d\n", b100);
     printf("Billetes de 50= %d\n", b50);
     printf("Billetes de 20= %d\n", b20);
     printf("Billetes de 10= %d\n", b10);
     printf("Billetes de 5= %d\n", b5);
     printf("Billetes de 1= %d\n", b1);
    }  
    return 0;
}