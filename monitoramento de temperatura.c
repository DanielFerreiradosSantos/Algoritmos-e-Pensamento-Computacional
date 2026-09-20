#include <stdio.h>

int main() {

    float limite;
    float temperatura;
    float soma = 0.0;

    float maior;
    float menor;

    int leituras = 0;
    int acima_do_limite = 0;
    int sequencia_acima = 0;

    printf("============================================\n");
    printf("       SISTEMA DE MONITORAMENTO             \n");
    printf("============================================\n");

    // Solicita o limite de temperatura ao usuario
    do {

        printf("Digite o limite de temperatura: ");

        // Verifica se o usuario digitou um numero
        if (scanf("%f", &limite) != 1) {

            printf("Entrada invalida. Digite um valor numerico.\n");

            // Limpa o que ficou no teclado
            while (getchar() != '\n');

            continue;
        }

        // O limite precisa ser maior que zero
        if (limite <= 0) {
            printf("O limite deve ser maior que 0 graus.\n");
        }

    } while (limite <= 0);


    printf("\nDigite as temperaturas do sensor.\n");
    printf("Digite 0 para encerrar o monitoramento.\n\n");


    // Loop principal do monitoramento
    while (1) {

        printf("Temperatura da leitura %d: ", leituras + 1);

        // Verifica se foi digitado um numero
        if (scanf("%f", &temperatura) != 1) {

            printf("Entrada invalida. Digite um valor numerico.\n");

            while (getchar() != '\n');

            continue;
        }


        // Encerra manualmente quando o usuario digitar 0
        if (temperatura == 0) {

            printf("\nMonitoramento encerrado pelo usuario.\n");

            break;
        }


        // Primeira leitura:
        // ela sera usada como referencia para maior e menor temperatura
        if (leituras == 0) {

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


        // Soma a temperatura para calcular a media posteriormente
        soma += temperatura;

        // Aumenta a quantidade de leituras validas
        leituras++;


        // Verifica se a temperatura ultrapassou o limite
        if (temperatura > limite) {

            acima_do_limite++;
            sequencia_acima++;

            printf("ALERTA: temperatura acima do limite.\n");
            printf("Sequencia atual: %d de 3.\n", sequencia_acima);

        } else {

            // Se a temperatura estiver normal,
            // a sequencia de temperaturas altas volta para zero
            sequencia_acima = 0;
        }


        // Se houver 3 temperaturas altas consecutivas,
        // o sistema encerra automaticamente
        if (sequencia_acima >= 3) {

            printf("\nALERTA DE SEGURANCA!\n");
            printf("Foram detectadas 3 temperaturas acima do limite.\n");
            printf("Desligamento automatico ativado.\n");

            break;
        }
    }


    // Relatorio final
    printf("\n============================================\n");
    printf("              RELATORIO FINAL              \n");
    printf("============================================\n");


    // Verifica se houve pelo menos uma leitura valida
    if (leituras > 0) {

        float media = soma / leituras;

        printf("Total de leituras: %d\n", leituras);
        printf("Media das temperaturas: %.2f graus\n", media);
        printf("Maior temperatura: %.2f graus\n", maior);
        printf("Menor temperatura: %.2f graus\n", menor);
        printf("Leituras acima do limite: %d\n", acima_do_limite);

    } else {

        printf("Nenhuma leitura valida foi registrada.\n");
    }


    printf("============================================\n");

    return 0;
}