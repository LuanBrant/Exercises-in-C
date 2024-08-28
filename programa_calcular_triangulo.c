#include <stdio.h>
#include <stdlib.h>


#define PI 3.14159265

int main()
{
    // Declaração de variáveis
    float lado1, lado2, lado3, // Lados do triângulo
          altura, // Altura do triângulo
          area, // Área
          perimetro, // Perímetro
          raio; // Circunferencia


    // Leitura 3 lados e considera a base como lado2
    printf("Digite 3 lados: ");
    scanf("%f %f %f",&lado1,&lado2,&lado3);

    // Leitura da altura
    printf("Digite a altura: ");
    scanf("%f",&altura);

    // Cálculo da área e do perímetro
    area = lado2 * altura / 2;
    perimetro = lado1+lado2+lado3;

    // Exibir o valor calculado
    printf("Area do triangulo %.2f\nPerimetro do triangulo %.2f\n",area,perimetro);

    // Leitura
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado1);

    // Cálculo da área e do perímetro
    area = lado1*lado1;
    perimetro = 4*lado1;

    // Exibição
    printf("Area do quadrado %.2f\n"
           "Perimetro do quadrado %.2f\n",area,perimetro);


    // Leitura
    printf("Digite o raio da circunferencia: ");
    scanf("%f",&raio);

    // Cálculos
    area = PI*raio*raio;
    perimetro = 2*PI*raio;

    // Exibição
    printf("Area do circulo %.2f\n"
           "Perimetro do circulo %.2f\n",area,perimetro);

    return 0;
}
