#include <stdio.h>

void pausar() {
    printf("\nPressione Enter para voltar ao menu...");
    getchar();
    getchar();
}

void questao1() {
    int a, b;
    printf("Questao 1: Faca um algoritmo que recebe dois valores inteiros\n");
    printf("e mostra o resultado da multiplicacao.\n\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("\nA multiplicacao dos numeros e: %d\n", a * b);
    pausar();
}

void questao2() {
    int a;
    printf("Questao 2: Fazer um algoritmo que leia um numero e mostre\n");
    printf("o seu antecessor e o seu sucessor.\n\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &a);
    printf("\nAntecessor: %d\n", a - 1);
    printf("Sucessor: %d\n", a + 1);
    pausar();
}

void questao3() {
    int x, y, quociente, resto;
    printf("Questao 3: Fazer um algoritmo que obtenha dois numeros inteiros,\n");
    printf("x e y, mostre o quociente e o resto da divisao inteira entre eles.\n\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o segundo numero: ");
    scanf("%d", &y);
    if (y == 0) {
        printf("\nErro: divisao por zero!\n");
    } else {
        quociente = x / y;
        resto = x % y;
        printf("\nQuociente: %d\n", quociente);
        printf("Resto: %d\n", resto);
    }
    pausar();
}

void questao4() {
    int num1, num2;
    printf("Questao 4: Fazer um algoritmo que calcule e mostre:\n");
    printf("a) A soma entre dois numeros\n");
    printf("b) O produto entre eles\n");
    printf("c) O quociente entre eles\n\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    if (num2 == 0) {
        printf("\nErro: divisao por zero no quociente!\n");
    } else {
        int soma = num1 + num2;
        int produto = num1 * num2;
        float quociente = (float)num1 / num2;
        printf("\nA soma entre os numeros e: %d\n", soma);
        printf("O produto entre os numeros e: %d\n", produto);
        printf("O quociente entre os numeros e: %.2f\n", quociente);
    }
    pausar();
}

void questao5() {
    float centimetros, polegadas;
    printf("Questao 5: Fazer um algoritmo que converta centimetros para\n");
    printf("polegadas (1 pol = 2.54 cm).\n\n");
    printf("Digite o valor em centimetros: ");
    scanf("%f", &centimetros);
    polegadas = centimetros / 2.54;
    printf("\n%.2f centimetros equivalem a %.2f polegadas.\n", centimetros, polegadas);
    pausar();
}

void questao6() {
    float raio, area;
    printf("Questao 6: Faca um algoritmo que recebe o valor do raio de um\n");
    printf("circulo e apresenta o valor da area desse circulo.\n\n");
    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);
    area = 3.14 * raio * raio;
    printf("\nA area do circulo e: %.2f\n", area);
    pausar();
}

void questao7() {
    int r;
    float h, A, V, pi = 3.14;
    printf("Questao 7: Fazer um algoritmo que calcule e mostre a area e\n");
    printf("o volume de um cilindro. (A = 2*pi*r*(h+r), V = pi*r^2*h)\n\n");
    printf("Qual o raio do seu cilindro: ");
    scanf("%d", &r);
    printf("Qual a altura do seu cilindro em cm: ");
    scanf("%f", &h);
    A = 2 * pi * r * (h + r);
    V = pi * r * r * h;
    printf("\nA area do seu cilindro e: %.2f\n", A);
    printf("O volume do seu cilindro e: %.2f\n", V);
    pausar();
}

void questao8() {
    float salario_fixo, total_vendas, comissao, salario_final;
    printf("Questao 8: Escreva um algoritmo que recebe o salario fixo e o\n");
    printf("total de vendas de um vendedor. Sabendo que ele ganha 15%%\n");
    printf("de comissao sobre as vendas, informe o salario fixo e o salario final.\n\n");
    printf("Digite seu salario fixo: ");
    scanf("%f", &salario_fixo);
    printf("Digite o total de vendas neste mes: ");
    scanf("%f", &total_vendas);
    comissao = total_vendas * 0.15;
    salario_final = salario_fixo + comissao;
    printf("\nSeu salario fixo e: %.2f\n", salario_fixo);
    printf("Seu salario final foi de: %.2f\n", salario_final);
    pausar();
}

void questao9() {
    float A, B, C, D;
    printf("Questao 9: Ler dois valores para as variaveis A e B, e efetuar\n");
    printf("as trocas dos valores de forma que A passe a ter o valor de B\n");
    printf("e B passe a ter o valor de A. Apresentar os valores trocados.\n\n");
    printf("Digite um numero: ");
    scanf("%f", &A);
    printf("Digite outro numero: ");
    scanf("%f", &B);
    C = B;
    D = A;
    printf("\nAgora o primeiro numero se torna o segundo: %.1f\n", C);
    printf("E o segundo numero se torna o primeiro: %.1f\n", D);
    pausar();
}

void questao10() {
    int saque, cedula_5, cedula_10, cedula_20, cedula_50, cedula_100, cedula_200;
    printf("Questao 10: Faca um algoritmo que mostra a quantidade de cedulas\n");
    printf("de um caixa eletronico. Recebe o valor a ser sacado e apresenta\n");
    printf("a quantidade de cada cedula com o menor numero possivel de notas.\n\n");
    printf("Digite o valor do saque (multiplo de 5): ");
    scanf("%d", &saque);
    if (saque <= 0 || saque % 5 != 0) {
        printf("\nErro: o valor deve ser positivo e multiplo de 5.\n");
    } else {
        cedula_200 = saque / 200; saque %= 200;
        cedula_100 = saque / 100; saque %= 100;
        cedula_50  = saque / 50;  saque %= 50;
        cedula_20  = saque / 20;  saque %= 20;
        cedula_10  = saque / 10;  saque %= 10;
        cedula_5   = saque / 5;
        printf("\nCedulas de 200: %d\n", cedula_200);
        printf("Cedulas de 100: %d\n", cedula_100);
        printf("Cedulas de 50: %d\n",  cedula_50);
        printf("Cedulas de 20: %d\n",  cedula_20);
        printf("Cedulas de 10: %d\n",  cedula_10);
        printf("Cedulas de 5: %d\n",   cedula_5);
    }
    pausar();
}

void questao11() {
    float compra, pago, troco;
    printf("Questao 11: Faca um algoritmo que auxiliara um funcionario de\n");
    printf("um caixa de supermercado. Recebe o valor da compra e o valor\n");
    printf("pago, e apresenta o troco em cedulas e moedas.\n\n");
    printf("Valor da compra: R$ ");
    scanf("%f", &compra);
    printf("Valor pago: R$ ");
    scanf("%f", &pago);
    troco = pago - compra;
    if (troco < 0) {
        printf("\nErro: valor pago insuficiente!\n");
    } else {
        int t = (int)(troco * 100 + 0.5);
        int c200 = t / 20000; t %= 20000;
        int c100 = t / 10000; t %= 10000;
        int c50  = t / 5000;  t %= 5000;
        int c20  = t / 2000;  t %= 2000;
        int c10  = t / 1000;  t %= 1000;
        int c5   = t / 500;   t %= 500;
        int m100 = t / 100;   t %= 100;
        int m50  = t / 50;    t %= 50;
        int m25  = t / 25;    t %= 25;
        int m10  = t / 10;    t %= 10;
        int m5   = t / 5;
        printf("\nTroco: R$ %.2f\n", troco);
        if (c200) printf("Cedulas de R$200: %d\n", c200);
        if (c100) printf("Cedulas de R$100: %d\n", c100);
        if (c50)  printf("Cedulas de R$50:  %d\n", c50);
        if (c20)  printf("Cedulas de R$20:  %d\n", c20);
        if (c10)  printf("Cedulas de R$10:  %d\n", c10);
        if (c5)   printf("Cedulas de R$5:   %d\n", c5);
        if (m100) printf("Moedas de R$1:    %d\n", m100);
        if (m50)  printf("Moedas de 50c:    %d\n", m50);
        if (m25)  printf("Moedas de 25c:    %d\n", m25);
        if (m10)  printf("Moedas de 10c:    %d\n", m10);
        if (m5)   printf("Moedas de 5c:     %d\n", m5);
    }
    pausar();
}

void questao12() {
    float media_1, media_2, soma_media, media_media;
    printf("Questao 12: Fazer um algoritmo que calcule a media aritmetica\n");
    printf("dos numeros 7, 8 e 9 e a media dos numeros 4, 5 e 6. Mostre\n");
    printf("a soma das duas medias e a media das medias.\n\n");
    media_1 = (7 + 8 + 9) / 3.0;
    media_2 = (4 + 5 + 6) / 3.0;
    soma_media = media_1 + media_2;
    media_media = (media_1 + media_2) / 2.0;
    printf("A media dos numeros 7, 8 e 9 e: %.1f\n", media_1);
    printf("A media dos numeros 4, 5 e 6 e: %.1f\n", media_2);
    printf("A soma entre as medias e: %.1f\n", soma_media);
    printf("A media dessas duas medias e: %.1f\n", media_media);
    pausar();
}

void questao13() {
    float preco_fabrica, impostos, revendedor, preco_final;
    printf("Questao 13: O preco de um automovel e calculado pela soma do\n");
    printf("preco de fabrica, os impostos (45%%) e a porcentagem do revendedor\n");
    printf("(28%%). Ler o preco de fabrica e calcular o preco final.\n\n");
    printf("Qual o preco de fabrica do automovel: R$ ");
    scanf("%f", &preco_fabrica);
    impostos = preco_fabrica * 0.45;
    revendedor = preco_fabrica * 0.28;
    preco_final = preco_fabrica + impostos + revendedor;
    printf("\nO preco final do automovel e: R$ %.2f\n", preco_final);
    pausar();
}

void questao14() {
    int numero;
    printf("Questao 14: Faca um algoritmo que recebe um valor inteiro e\n");
    printf("mostra se o valor e zero, positivo ou negativo.\n\n");
    printf("Digite um numero: ");
    scanf("%d", &numero);
    if (numero > 0)
        printf("\nSeu numero e positivo!\n");
    else if (numero < 0)
        printf("\nSeu numero e negativo!\n");
    else
        printf("\nSeu numero e Zero!\n");
    pausar();
}

void questao15() {
    int numero;
    printf("Questao 15: Faca um algoritmo que recebe um valor e mostra\n");
    printf("se o mesmo e par ou impar.\n\n");
    printf("Digite um numero: ");
    scanf("%d", &numero);
    if (numero % 2 == 0)
        printf("\nSeu numero e par!\n");
    else
        printf("\nSeu numero e impar!\n");
    pausar();
}

int main() {
    int opcao;

    do {
        printf("\n=== QUESTOES DE LOGICA ===\n\n");
        printf(" 1.  Multiplicacao\n");
        printf(" 2.  Antecessor e Sucessor\n");
        printf(" 3.  Quociente e Resto\n");
        printf(" 4.  Soma, Produto e Quociente\n");
        printf(" 5.  Centimetros para Polegadas\n");
        printf(" 6.  Area do Circulo\n");
        printf(" 7.  Area e Volume do Cilindro\n");
        printf(" 8.  Salario com Comissao\n");
        printf(" 9.  Troca de Variaveis\n");
        printf(" 10. Cedulas do Caixa Eletronico\n");
        printf(" 11. Troco do Supermercado\n");
        printf(" 12. Media Aritmetica\n");
        printf(" 13. Preco Final do Automovel\n");
        printf(" 14. Positivo, Negativo ou Zero\n");
        printf(" 15. Par ou Impar\n");
        printf(" 0.  Sair\n\n");
        printf("Escolha uma questao: ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao) {
            case 1:  questao1();  break;
            case 2:  questao2();  break;
            case 3:  questao3();  break;
            case 4:  questao4();  break;
            case 5:  questao5();  break;
            case 6:  questao6();  break;
            case 7:  questao7();  break;
            case 8:  questao8();  break;
            case 9:  questao9();  break;
            case 10: questao10(); break;
            case 11: questao11(); break;
            case 12: questao12(); break;
            case 13: questao13(); break;
            case 14: questao14(); break;
            case 15: questao15(); break;
            case 0:  printf("Saindo... Ate mais!\n"); break;
            default: printf("Opcao invalida!\n"); pausar(); break;
        }
    } while (opcao != 0);

    return 0;
}