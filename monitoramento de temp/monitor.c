#include <stdio.h>

int main() {

    float limite;
    float temperatura;
    float soma = 0.0;
    float maior = 0.0;
    float menor = 0.0;
    float media;

    int total_leituras = 0;
    int acima_limite = 0;
    int consecutivas = 0;

    printf("============================================\n");
    printf("       SISTEMA DE MONITORAMENTO             \n");
    printf("============================================\n");

    // Solicita o limite de temperatura
    // O do...while garante que o usuario informe um valor maior que zero
    do {

        printf("Digite o limite de temperatura: ");
        scanf("%f", &limite);

        if (limite <= 0) {
            printf("O limite deve ser maior que zero.\n");
        }

    } while (limite <= 0);


    printf("\nDigite as temperaturas do sensor.\n");
    printf("Digite 0 para encerrar o monitoramento.\n\n");


    // O while mantem o programa recebendo temperaturas
    while (1) {

        printf("Digite a temperatura: ");
        scanf("%f", &temperatura);


        // Se o usuario digitar 0, encerra o programa
        if (temperatura == 0) {
            printf("\nMonitoramento encerrado.\n");
            break;
        }


        // A primeira temperatura sera usada como maior e menor
        if (total_leituras == 0) {

            maior = temperatura;
            menor = temperatura;

        } else {

            // Verifica se encontrou uma nova maior temperatura
            if (temperatura > maior) {
                maior = temperatura;
            }

            // Verifica se encontrou uma nova menor temperatura
            if (temperatura < menor) {
                menor = temperatura;
            }
        }


        // Soma as temperaturas
        soma = soma + temperatura;

        // Conta a quantidade de leituras
        total_leituras++;


        // Verifica se a temperatura ultrapassou o limite
        if (temperatura > limite) {

            acima_limite++;
            consecutivas++;

            printf("ALERTA: temperatura acima do limite!\n");
            printf("Temperaturas acima em sequencia: %d\n", consecutivas);

        } else {

            // Se a temperatura estiver normal,
            // a sequencia volta para zero
            consecutivas = 0;
        }


        // Se houver 3 temperaturas acima do limite
        // em sequencia, o sistema encerra
        if (consecutivas == 3) {

            printf("\nALERTA DE SEGURANCA!\n");
            printf("Tres temperaturas consecutivas acima do limite.\n");
            printf("Desligamento automatico ativado.\n");

            break;
        }
    }


    // Verifica se pelo menos uma temperatura foi registrada
    if (total_leituras > 0) {

        media = soma / total_leituras;

        printf("\n============================================\n");
        printf("              RELATORIO FINAL               \n");
        printf("============================================\n");

        printf("Total de leituras: %d\n", total_leituras);
        printf("Media das temperaturas: %.2f\n", media);
        printf("Maior temperatura: %.2f\n", maior);
        printf("Menor temperatura: %.2f\n", menor);
        printf("Leituras acima do limite: %d\n", acima_limite);

        printf("============================================\n");

    } else {

        printf("\nNenhuma leitura foi registrada.\n");
    }


    return 0;
}
