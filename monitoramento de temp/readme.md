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
```

---

## 4. Reflexão

Escolhi uma combinação das estruturas `while` e `do...while` porque cada uma se adapta melhor a uma parte específica do algoritmo.

O `do...while` foi utilizado na definição do limite de temperatura, pois o usuário precisa informar um valor pelo menos uma vez antes que o programa possa verificar se ele é válido. Nesse caso, a condição é testada após a execução do bloco.

Já o `while` foi utilizado para realizar as leituras de temperatura continuamente, permitindo que o monitoramento permaneça ativo até que o usuário digite `0` ou sejam detectadas três temperaturas consecutivas acima do limite.

A diferença entre testar a condição antes ou depois da execução foi importante principalmente na etapa de definição do limite. O `do...while` garantiu que a entrada fosse solicitada pelo menos uma vez, enquanto o `while` permitiu repetir as leituras enquanto as condições de funcionamento do sistema fossem atendidas.
