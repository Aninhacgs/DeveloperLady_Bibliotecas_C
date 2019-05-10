#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main(void){
    int opc,potencia,valor,exp;
    float raiz,seno,cosseno,tangente,log1,log2,valor1,arredondar;

    while(opc!=10){
            printf("\n\n==========MENU==========\n");
            printf("1 - Arredondar um Valor para Baixo\n");
            printf("2 - Arredondar um Valor para Cima\n");
            printf("3 - Calcular a Raiz Quadrada\n");
            printf("4 - Calcular a Potenciacao\n");
            printf("5 - Calcular o Seno de um Ângulo\n");
            printf("6 - Calcular o Cosseno de um Ângulo\n");
            printf("7 - Calcular a Tangente de um Ângulo\n");
            printf("8 - Calcular o Logaritmo\n");
            printf("9 - Calcular o Logaritmo Base 10\n");
            printf("10 - Sair");

            printf("\n\nDigite uma opcao: ");
            scanf("%d",&opc);

            system("cls");

        switch (opc){

        case 1:
            printf("\n\nDigite o valor: ");
            scanf("%f",&valor1);
            arredondar = floor(valor1);
            printf("\n\nO valor %.2f arredondado para baixo = %.2f",valor1,arredondar);
        break;


        case 2:
            printf("\n\nDigite o valor: ");
            scanf("%f",&valor1);
            arredondar = ceil(valor1);
            printf("\n\nO valor %.2f arredondado para cima = %.2f",valor1,arredondar);
        break;


        case 3:
            printf("\n\nDigite o valor: ");
            scanf("%d",&valor);
            raiz = sqrt(valor);
            printf("\n\nA raiz quadrada do valor %d = %f",valor,raiz);
        break;

        case 4:
            printf("\n\nDigite um valor para base: ");
            scanf("%d",&valor);
            printf("\nDigite um valor para o expoente: ");
            scanf("%d",&exp);
            while(exp<=0){
                printf("\nO valor do expoente deve ser maior que zero! Por favor digite novamente: ");
                scanf("%d",&exp);
            }

            potencia = pow(valor,exp);
            printf("\n\nO valor da potencia do numero %d elevado a %d = %d",valor,exp,potencia);

        break;

        case 5:
            printf("\n\nDigite o valor do angulo: ");
            scanf("%d",&valor);
            seno = sin(valor);
            printf("\n\nO seno do angulo %d = %.2f",valor,seno);

        break;


        case 6:
            printf("\n\nDigite o valor do angulo: ");
            scanf("%d",&valor);
            cosseno = cos(valor);
            printf("\n\nO cosseno do angulo %d = %.2f",valor,cosseno);

        break;


        case 7:
            printf("\n\nDigite o valor do angulo: ");
            scanf("%d",&valor);
            tangente = tan(valor);
            printf("\n\nA tangente do angulo %d = %.2f",valor,tangente);

        break;


        case 8:
            printf("\n\nDigite o valor: ");
            scanf("%d",&valor);
            log1 = log(valor);
            printf("\n\nO logaritmo do valor %d = %.2f",valor,log1);

        break;

        case 9:
            printf("\n\nDigite o valor: ");
            scanf("%d",&valor);
            log2 = log10(valor);
            printf("\n\nO logaritmo na base 10 do valor %d = %.2f",valor,log2);

        break;

        }

    }
}
