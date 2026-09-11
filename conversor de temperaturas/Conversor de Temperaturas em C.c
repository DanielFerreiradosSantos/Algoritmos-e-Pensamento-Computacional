#include <stdio.h>
#include <stdlib.h>

/* =========================================================================
 * DECLARAÇÃO DAS FUNÇÕES DE CONVERSÃO
 * Cada função recebe o valor da temperatura de origem e retorna a convertida.
 * ========================================================================= */

// 1. Celsius para Fahrenheit: F = (C * 9/5) + 32
double celsiusParaFahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32.0;
}

// 2. Celsius para Kelvin: K = C + 273.15
double celsiusParaKelvin(double c) {
    return c + 273.15;
}

// 3. Fahrenheit para Celsius: C = (F - 32) * 5/9
double fahrenheitParaCelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

// 4. Fahrenheit para Kelvin: K = (F - 32) * 5/9 + 273.15
double fahrenheitParaKelvin(double f) {
    return (f - 32.0) * 5.0 / 9.0 + 273.15;
}

// 5. Kelvin para Celsius: C = K - 273.15
double kelvinParaCelsius(double k) {
    return k - 273.15;
}

// 6. Kelvin para Fahrenheit: F = (K - 273.15) * 9/5 + 32
double kelvinParaFahrenheit(double k) {
    return (k - 273.15) * 9.0 / 5.0 + 32.0;
}

/* =========================================================================
 * FUNÇÃO PRINCIPAL (main)
 * Gerencia o menu, captura das entradas e direcionamento do switch...case
 * ========================================================================= */
int main() {
    int opcao;
    double tempEntrada, tempResultado;

    // Apresentação do Menu Principal
    printf("===========================================\n");
    printf("        CONVERSOR DE TEMPERATURAS          \n");
    printf("===========================================\n");
    printf("1. Celsius    -> Fahrenheit\n");
    printf("2. Celsius    -> Kelvin\n");
    printf("3. Fahrenheit -> Celsius\n");
    printf("4. Fahrenheit -> Kelvin\n");
    printf("5. Kelvin     -> Celsius\n");
    printf("6. Kelvin     -> Fahrenheit\n");
    printf("===========================================\n");
    printf("Escolha uma opção (1-6): ");
    scanf("%d", &opcao);

    // Estrutura condicional para validar o menu ANTES de pedir a temperatura
    switch (opcao) {
        case 1:
            printf("\nInforme a temperatura em Celsius (°C): ");
            scanf("%lf", &tempEntrada);
            tempResultado = celsiusParaFahrenheit(tempEntrada);
            printf("\nResultado: %.2lf °C = %.2lf °F\n", tempEntrada, tempResultado);
            break;

        case 2:
            printf("\nInforme a temperatura em Celsius (°C): ");
            scanf("%lf", &tempEntrada);
            tempResultado = celsiusParaKelvin(tempEntrada);
            printf("\nResultado: %.2lf °C = %.2lf K\n", tempEntrada, tempResultado);
            break;

        case 3:
            printf("\nInforme a temperatura em Fahrenheit (°F): ");
            scanf("%lf", &tempEntrada);
            tempResultado = fahrenheitParaCelsius(tempEntrada);
            printf("\nResultado: %.2lf °F = %.2lf °C\n", tempEntrada, tempResultado);
            break;

        case 4:
            printf("\nInforme a temperatura em Fahrenheit (°F): ");
            scanf("%lf", &tempEntrada);
            tempResultado = fahrenheitParaKelvin(tempEntrada);
            printf("\nResultado: %.2lf °F = %.2lf K\n", tempEntrada, tempResultado);
            break;

        case 5:
            printf("\nInforme a temperatura em Kelvin (K): ");
            scanf("%lf", &tempEntrada);
            tempResultado = kelvinParaCelsius(tempEntrada);
            printf("\nResultado: %.2lf K = %.2lf °C\n", tempEntrada, tempResultado);
            break;

        case 6:
            printf("\nInforme a temperatura em Kelvin (K): ");
            scanf("%lf", &tempEntrada);
            tempResultado = kelvinParaFahrenheit(tempEntrada);
            printf("\nResultado: %.2lf K = %.2lf °F\n", tempEntrada, tempResultado);
            break;

        default:
            // Trata opções fora do intervalo 1-6
            printf("\n[ERRO] Opção inválida! Por favor, escolha um número de 1 a 6.\n");
            break;
    }

    printf("\nPrograma finalizado.\n");
    return 0;
}
