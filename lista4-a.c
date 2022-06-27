/*
Menor ou igual a 2,1 m3 BAIXO
Maior que 2,1 m3 e menor ou igual a 6,1 m3 NORMAL
Maior que 6,1 m3 e menor ou igual a 10,5 m3 ALTO
Maior que 10,5 m3 EXAGERADO*/

#include<stdio.h>
#include<string.h>

int main() {
    float m3;
    int mes, ano;
    printf("Digite o mes: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    do
    {
        printf("Digite a quantidade em m3 por mes: ");
        scanf("%f", &m3);
        if (m3 <= 0) 
        {
            printf("Valor invalido \n");
        }
    } while (m3<0);
    if (m3 <= 2.1)
    {
        printf("Consumo: %.2f (Baixo)\n", m3);
    }
    if (m3 > 2.1 && m3 <= 6.1)
    {
        printf("Consumo: %.2f (Normal)\n", m3);
    }
    if (m3 > 6.1 && m3 <= 10.5)
    {
        printf("Consumo: %.2f (Alto)\n", m3);
    }
    if (m3 >= 10.5)
    {
        printf("Consumo: %.2f (Exagerado)\n", m3);
    }
    
    printf("Mes: %d\n", mes);

    int resto = ano % 4;
    if (resto == 0)
        printf("Ano: %d (Ano Bissexto)", ano);
    
    else
        printf("Ano: %d", ano);

   

   return 0;

}