#include <stdio.h>
#include <math.h>

int main() {
    int opcao;
    double x, y, resultado;
    double PI = 3.14;

    do {

        printf("\nEscolha uma operacao:\n");
        printf("1. Raiz quadrada\n");
        printf("2. Potencia\n");
        printf("3. Seno (em graus)\n");
        printf("4. Cosseno (em graus)\n");
        printf("5. Tangente (em graus)\n");
        printf("6. Valor absoluto\n");
        printf("7. Arredondar para cima\n");
        printf("8. Arredondar para baixo\n");
        printf("9. Hipotenusa\n");
        printf("0. Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor de x: ");
                scanf("%lf", &x);
                resultado = sqrt(x);
                printf("Resultado: Raiz quadrada de %.2f = %.2f\n", x, resultado);
                break;
            case 2:
                printf("Digite o valor de x: ");
                scanf("%lf", &x);
                printf("Digite o valor de y: ");
                scanf("%lf", &y);
                resultado = pow(x, y);
                printf("Resultado: %.2f elevado a %.2f = %.2f\n", x, y, resultado);
                break;
            case 3:
                printf("Digite o valor do angulo em graus: ");
                scanf("%lf", &x);
                resultado = sin(x * PI / 180.0);
                printf("Resultado: Seno de %.2f graus = %.2f\n", x, resultado);
                break;
            case 4:
                printf("Digite o valor do angulo em graus: ");
                scanf("%lf", &x);
                resultado = cos(x * PI / 180.0);
                printf("Resultado: Cosseno de %.2f graus = %.2f\n", x, resultado);
                break;
            case 5:
                printf("Digite o valor do angulo em graus: ");
                scanf("%lf", &x);
                resultado = tan(x * PI / 180.0);
                printf("Resultado: Tangente de %.2f graus = %.2f\n", x, resultado);
                break;
            case 6:
                printf("Digite o valor de x: ");
                scanf("%lf", &x);
                resultado = fabs(x);
                printf("Resultado: Valor absoluto de %.2f = %.2f\n", x, resultado);
                break;
            case 7:
                printf("Digite o valor de x: ");
                scanf("%lf", &x);
                resultado = ceil(x);
                printf("Resultado: O valor %.2f arredondando para cima = %.2f\n", x, resultado);
                break;
            case 8:
                printf("Digite o valor de x: ");
                scanf("%lf", &x);
                resultado = floor(x);
                printf("Resultado: O valor %.2f arredondando para baixo = %.2f\n", x, resultado);
                break;
            case 9:
                printf("Digite o valor de x: ");
                scanf("%lf", &x);
                printf("Digite o valor de y: ");
                scanf("%lf", &y);
                resultado = hypot(x, y);
                printf("Resultado: Hipotenusa de um triangulo retangulo de lados %.2f e %.2f = %.2f\n", x, y, resultado);
                break;
            case 0:
                break;
            default:
                printf("Opcao invalida");
        }

    } while (opcao != 0);

    return 0;
}
