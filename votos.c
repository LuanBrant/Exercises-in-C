#include <stdio.h>
#include <stdlib.h>

int main()
{
    int voto, voto1=0,voto2=0,voto3=0,
        voto4=0,voto5=0,voto6=0,total=0;

    // Para primeiro voto
    printf("Escolha o seu voto\n");
    printf("1 - Candidato 1\n");
    printf("2 - Candidato 2\n");
    printf("3 - Candidato 3\n");
    printf("4 - Candidato 4\n");
    printf("5 - Nulo\n");
    printf("6 - Branco\n");
    printf("Voto: ");
    scanf("%d",&voto);

    while (voto != 0)
    {
        switch(voto)
        {
            case 1: voto1++; break;
            case 2: voto2++; break;
            case 3: voto3++; break;
            case 4: voto4++; break;
            case 5: voto5++; break;
            case 6: voto6++; break;
            default: printf("Voto invalido\n");break;
        }
        // Para proximo voto
        printf("Escolha o seu voto\n");
        printf("1 - Candidato 1\n");
        printf("2 - Candidato 2\n");
        printf("3 - Candidato 3\n");
        printf("4 - Candidato 4\n");
        printf("5 - Nulo\n");
        printf("6 - Branco\n");
        printf("Voto: ");
        scanf("%d",&voto);
    }

    printf("Total candidato 1 - %d\n",voto1);
    printf("Total candidato 2 - %d\n",voto2);
    printf("Total candidato 3 - %d\n",voto3);
    printf("Total candidato 4 - %d\n",voto4);
    printf("Total nulos - %d\n",voto5);
    printf("Total brancos - %d\n",voto6);

    total = voto1+voto2+voto3+voto4+voto5+voto6;

    printf("Porcentagem de nulos - %.2f\n",(voto5*100.0/total));
    printf("Porcentagem de brancos - %.2f\n",(voto6*100.0/total));

    return 0;
}
