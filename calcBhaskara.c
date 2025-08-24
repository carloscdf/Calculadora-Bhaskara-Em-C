#include <stdio.h>
#include <math.h>

typedef struct bhaskaraData
{
    float a;
    float b;
    float c;
    float x1;
    float x2;
} bhaskaraData;

void imprimirValores(bhaskaraData *bhaskara);

void lerValores(bhaskaraData *bhaskara)
{
    int opt;
    while(1){
        printf("\n\n===== CALCULADORA DE BHASKARA =====\n\n");
        printf("[1] para realizar um novo cálculo\n");
        printf("[2] para exibir o último cálculo realizado\n");
        printf("[0] para encerrar o programa\n\n");
        printf("Digite uma das opções listadas acima: ");
        scanf("%d", &opt);
        if(opt == 1){
            printf("Digite o valor de a: ");
            scanf("%f", &(bhaskara->a));
            printf("Digite o valor de b: ");
            scanf("%f", &(bhaskara->b));
            printf("Digite o valor de c: ");
            scanf("%f", &(bhaskara->c));
            imprimirValores(bhaskara);
        } else if(opt == 2){
            imprimirValores(bhaskara);
        } else if(opt == 0){
            return;
        } else{
            printf("Opção inválida!");
        }
    }
}

void calcBhaskara(bhaskaraData *bhaskara)
{
    float delta;
    float x;
    delta = pow(bhaskara->b, 2) - (4 * bhaskara->a * bhaskara->c);
    if (delta < 0)
    {
        bhaskara->x1 = NAN;
        bhaskara->x2 = NAN;
    }
    else if (delta == 0)
    {
        x = -bhaskara->b / (2 * bhaskara->a);
        bhaskara->x1 = x;
        bhaskara->x2 = x;
    }
    else
    {
        bhaskara->x1 = (-bhaskara->b + sqrt(delta)) / (2 * bhaskara->a);
        bhaskara->x2 = (-bhaskara->b - sqrt(delta)) / (2 * bhaskara->a);
    }
}

void imprimirValores(bhaskaraData *bhaskara)
{
    calcBhaskara(bhaskara);
    printf("---------------------------------");
    printf("\n===== ENTRADA =====\n");
    printf("Valor de a: %.2f\n", bhaskara->a);
    printf("Valor de b: %.2f\n", bhaskara->b);
    printf("Valor de c: %.2f\n", bhaskara->c);
    if (isnan(bhaskara->x1) || isnan(bhaskara->x2))
    {
        printf("\n!=!=!= Não existem soluções reais !=!=!=\n");
    }
    else
    {
        printf("\n===== RESULTADO =====\n");
        printf("Valor de x1: %.2f\n", bhaskara->x1);
        printf("Valor de x2: %.2f\n", bhaskara->x2);
    }
    printf("---------------------------------");
}

int main()
{
    bhaskaraData bhaskara;
    
    lerValores(&bhaskara);
    
    

    return 0;
}