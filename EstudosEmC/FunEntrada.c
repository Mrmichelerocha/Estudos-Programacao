#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
   char ch;
   printf("Digite algum caracter: \n");
   scanf("%c", &ch);
   printf("Sua Escolha foi: %c \n", ch);
   printf("Sua sucessora na Tabela ASCII: %c \n", ch+1);
    return 0;
}
