#include<stdio.h>
#include<stdlib.h>

// media aritmetica para 50 alunos
int main(int argc, char const *argv[])
{
    int num1, num2, media;
    int count;
    do
    {
        printf("\nMenu de Opções\n");
        printf("Opção 1: soma das notas\n");
        printf("Opção 2: media das notas\n");
        printf("Opção o: sair\n");


        printf("Qual sua opção?\n");
        scanf("%d", &count);

        switch (count)
        {
        case 1:
            system("cls || clear");
            int n1, n2, soma;

            printf("Entre com um numero\n");
            scanf("%d", &n1);
            printf("Entre com um numero\n");
            scanf("%d", &n2);

            soma = n1 + n2;

            printf("soma das notas: %d\n", soma);
            break;
        case 2:
            system("cls || clear");
            int nu1, nu2, media;

            printf("Entre com um numero\n");
            scanf("%d", &nu1);
            printf("Entre com um numero\n");
            scanf("%d", &nu2);

            media = (nu1 + nu2) / 2 ;

            if( media >= 7 ){
                printf ("Parabens passou o menino\n");
            }else{
                printf ("Reprovou coisinho\n");
            }

            printf("Resultado: %d", media);
            break;
        default:
            system("cls || clear");
            printf("Opcao invalida! Tente novamente.\n");
            break;
        }
    } while (count);

    return 0;
}
// #include<stdio.h>
// #include<stdlib.h>

// // media aritmetica para 50 alunos
// int main(int argc, char const *argv[])
// {
//     int num1, num2, media;
//     int cont;
//     cont = 0;
//     while (cont < 5){
//         // entrada valores
//         printf("\nEntre com um numero\n");
//         scanf("%d", &num1);
//         printf("Entre com um numero\n");
//         scanf("%d", &num2);
//         // media
//         media = (num1 + num2) / 2 ;
//         // condição de aprovação
//         if( media >= 7 ){
//             printf ("Parabens passou o menino\n");
//         }else{
//             printf ("Reprovou coisinho\n");
//         }
//         // O resultado
//         printf("Resultado: %d", media, num1, num2);
//         // contador
//         cont ++;
//     }

//     return 0;
// }
