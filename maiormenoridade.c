#include <stdio.h>

int main() {
    int idade;
    int contador = 0;        
    int somaIdades = 0;      
    int menorIdade = 0;      
    int maiorIdade = 0;

    
    printf("Digite a idade (ou 0 para parar): ");
    scanf("%d", &idade);

    
    if (idade != 0) {
        
        menorIdade = idade;
        maiorIdade = idade;

        while (idade != 0) {
            
            somaIdades += idade;
            contador++;  

            
            if (idade < menorIdade) {
                menorIdade = idade;
            }
            if (idade > maiorIdade) {
                maiorIdade = idade;
            }

            printf("Digite a idade (ou 0 para parar): ");
            scanf("%d", &idade);
        }

        double idadeMedia = (contador > 0) ? (double)somaIdades / contador : 0;

        printf("Número de pessoas: %d\n", contador);
        printf("Idade média do grupo: %.2f\n", idadeMedia);
        printf("Menor idade: %d\n", menorIdade);
        printf("Maior idade: %d\n", maiorIdade);
    } else {
        printf("Nenhuma idade foi inserida.\n");
    }

    return 0;
}
