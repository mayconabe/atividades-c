#include <stdio.h>
#include <math.h> 

void calc_hexa(double lado) {

    double perimetro = 6 * lado;

    double area = (3 * sqrt(3) / 2) * lado * lado;

    printf("Perímetro do hexágono: %.2f\n", perimetro);
    printf("Área do hexágono: %.2f\n", area);
}

int main() {
    double lado;

    while (1) {
        
        printf("Digite o comprimento do lado do hexágono (valor negativo para sair): ");
        scanf("%lf", &lado);

        if (lado < 0) {
            printf("Programa encerrado.\n");
            break;
        }

        calc_hexa(lado);
    }

    return 0;
}
