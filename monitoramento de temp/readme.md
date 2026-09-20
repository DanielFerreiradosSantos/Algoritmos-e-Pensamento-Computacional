# Sistema de Monitoramento de Temperatura

## 1. Identificação

**Aluno:** Daniel Ferreira dos Santos  
**Disciplina:** Algoritmos e Pensamento Computacional  
**Professora:** Profa. Karla Sartin  
**Título do projeto:** Sistema de Monitoramento de Temperatura

---

## 2. Objetivo

O projeto tem como objetivo desenvolver um programa em linguagem C capaz de simular um sistema de monitoramento de temperatura.

O programa recebe um limite de temperatura definido pelo usuário e, em seguida, realiza várias leituras de temperatura. A partir dessas leituras, o sistema verifica se a temperatura ultrapassou o limite estabelecido.

O programa também possui um mecanismo de segurança que encerra automaticamente o monitoramento quando são identificadas três temperaturas consecutivas acima do limite.

---

## 3. Funcionamento do programa

### Definição do limite de temperatura

Primeiramente, o programa solicita ao usuário que informe um limite de temperatura.

O valor precisa ser maior que zero. Caso o usuário informe um valor menor ou igual a zero, o programa solicita uma nova entrada.

Essa validação é realizada utilizando a estrutura `do...while`.

```c
do {
    printf("Digite o limite de temperatura: ");
    scanf("%f", &limite);

    if (limite <= 0) {
        printf("O limite deve ser maior que zero.\n");
    }

} while (limite <= 0);

## 4. Reflexão
Escolhi uma combinação de while e do...while porque cada estrutura se encaixa melhor em uma parte do algoritmo. Usei do...while para definir o limite de temperatura, pois o usuário precisa informar um valor pelo menos uma vez antes que o programa possa verificar se ele é válido. Já o while foi utilizado para realizar as leituras de temperatura continuamente, até que o usuário digite 0 ou sejam detectadas três temperaturas consecutivas acima do limite.
