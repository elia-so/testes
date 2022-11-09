#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void imprimeMenu(){
    printf("\nConverter para decimal:\n");
    printf("(1) INSIRA EM BINARIO\n");
    printf("(2) INSIRA EM OCTAL\n");
    printf("(3) INSIRA EM HEXADECIMAL\n");
    printf("(0) SAIR DO PROGRAMA\n");
}


int main() {

    int opcao = -1, i=0;
    int valor, aux;
    char *hexa;
    int dec = 0;

    while(opcao != 0) {
        imprimeMenu();
        scanf("%d", &opcao);

        if(opcao == 1) {
            scanf("%d", &valor);
            for(i=0; valor > 0; i++) {
                dec = dec + pow(2, i) * (valor % 10);
                valor = valor / 10;
            }
            printf("O valor em decimal e: %d", dec);
            dec = 0;
        }
        if(opcao == 2) {
            scanf("%d", &valor);
            for(i=0; valor > 0; i++) {
                dec = dec + pow(8, i) * (valor % 10);
                valor = valor / 10;
            }
            printf("O valor em decimal e: %d", dec);
            dec = 0;
        }
        if(opcao == 3) {
            fflush(stdin);
            scanf("%s", hexa);
            int tamanho = strlen(hexa);
            for(i = 0; i < tamanho;i++) {
                char digito = hexa[tamanho - 1 - i];

                if(digito >= '0' && digito <= '9') {
                    dec += (digito - '0') * pow(16, i);
                } else {
                    if(digito == 'A') {
                        dec += (digito - 'A' + 10) * pow(16, i);
                    }
                    if(digito == 'B') {
                        dec += (digito - 'B' + 11) * pow(16, i);
                    }
                    if(digito == 'C') {
                        dec += (digito - 'C' + 12) * pow(16, i);
                    }
                    if(digito == 'D') {
                        dec += (digito - 'D' + 13) * pow(16, i);
                    }
                    if(digito == 'E') {
                        dec += (digito - 'E' + 14) * pow(16, i);
                    }
                    if(digito == 'F') {
                        dec += (digito - 'F' + 15) * pow(16, i);
                    }
                }
            }
            printf("O valor em decimal e: %d", dec);
            dec = 0;
        }
    }
    return 0;
}
