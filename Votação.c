#include<stdio.h>

int main()
{
	int voto, helio, nathan;
	
	do{
	printf("Os candidatos:\n1-Helio\n2-Nathan\nPara quem vai o seu voto:\n");
	scanf("%d", &voto);
	
	if(voto == 1)
	{
		helio = helio + 1;
		printf("Voto anulado\n");
	}
	if(voto == 2)
	{
		nathan = nathan + 1;
		printf("Voce votou no melhor\n");
	}
	if(voto > 2)
	{
	    printf("Votou errado, otario!\n");
    }
    if(voto < 1)
    {
    	printf("Votou errado, otario!\n");
	}
    }while(voto != 9);
    if(helio>nathan)
    {
    	printf("Helio ganhou com %d votos", helio);
	}
	else
	{
		printf("Nathan ganhou com %d votos", nathan);
	}
}
