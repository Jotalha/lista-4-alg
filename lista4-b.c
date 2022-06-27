#include<stdio.h>
#include<string.h>

int main() {
    int ent =0 , ferrari = 0, mercedes = 0, redbull = 0, outra = 0;
    char resp;

    do
    {
        printf("Quantas pessoas serao entrevistadas? ");
        scanf("%d", &ent);
        if (ent < 5) 
        {
            printf("Pessoas insuficientes \n");
        }
    } while (ent<5);


    int contador =0;
    do
    {
        printf("Qual equipe se saiu privilegiada? F(Ferrari), M(Mercedes), R(Red Bull) ou O(Outra Equipe)");
        scanf(" %c", &resp);
        if (resp == 'f' || resp == 'F') 
        {
            ferrari++;
        }else if (resp == 'm' || resp == 'M') 
        {
            mercedes++;
        }else if (resp == 'r' || resp == 'R') 
        {
            redbull++;
        }else if (resp == 'o' || resp == 'O') 
        {
            outra++;
        }
    contador++;


    } while (contador<ent);

    system("cls");

    int pole = ferrari + mercedes + redbull;
    if(outra > pole){
        printf("\n--- Outra Equipe Privilegiada ---\n", outra);
    }else{
    printf("--- Tabela de equipes privilegiadas ---\n");
    printf("\n--- Ferrari: %d ---\n", ferrari);
    printf("\n--- RedBull: %d ---\n", redbull);
    printf("\n--- Mercedes: %d ---\n", mercedes);
    printf("\n--- Outras Equipes: %d ---\n", outra);}


   return 0;

}