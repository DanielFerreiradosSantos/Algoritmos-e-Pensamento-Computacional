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
