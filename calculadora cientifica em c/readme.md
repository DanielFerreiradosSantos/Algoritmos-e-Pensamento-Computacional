# 🧮 Calculadora Científica em C (20 Funções)

Este projeto consiste em uma **Calculadora de Console** desenvolvida na linguagem C (padrão C99/C11). O programa conta com um menu interativo contendo **20 operações matemáticas e geométricas**, incluindo tratamento de erros de matemática (como divisão por zero e raízes de números negativos) e funções auxiliares de leitura segura do teclado para evitar travamentos no terminal ou no GDB.

---

## 🚀 Recursos e Funcionalidades

### 📊 Operações Disponíveis (0 a 20)

| Opção | Operação | Tipo de Entrada | Descrição / Fórmula |
| :---: | :--- | :---: | :--- |
| **1** | **Soma** | 2 números | $A + B$ |
| **2** | **Subtração** | 2 números | $A - B$ |
| **3** | **Multiplicação** | 2 números | $A \times B$ |
| **4** | **Divisão** | 2 números | $A / B$ (com verificação $B \neq 0$) |
| **5** | **Potenciação** | 2 números | $A^B$ (`pow`) |
| **6** | **Raiz Quadrada** | 1 número | $\sqrt{A}$ (`sqrt`, com validação $A \ge 0$) |
| **7** | **Raiz Cúbica** | 1 número | $\sqrt[3]{A}$ (`cbrt`) |
| **8** | **Seno** | 1 número | $\sin(A)$ em radianos |
| **9** | **Cosseno** | 1 número | $\cos(A)$ em radianos |
| **10** | **Tangente** | 1 número | $\tan(A)$ em radianos |
| **11** | **Logaritmo Natural** | 1 número | $\ln(A)$ (`log`, com validação $A > 0$) |
| **12** | **Logaritmo Base 10** | 1 número | $\log_{10}(A)$ (`log10`, com validação $A > 0$) |
| **13** | **Valor Absoluto** | 1 número | $\|A\|$ (`fabs`) |
| **14** | **Porcentagem** | 2 números | $(X / 100) \times Y$ |
| **15** | **Média Aritmética** | 2 números | $(A + B) / 2$ |
| **16** | **Graus $\rightarrow$ Radianos** | 1 número | $A \times (\pi / 180)$ |
| **17** | **Radianos $\rightarrow$ Graus** | 1 número | $A \times (180 / \pi)$ |
| **18** | **Área do Círculo** | 1 número | $\pi \times \text{raio}^2$ |
| **19** | **Área do Retângulo** | 2 números | $\text{base} \times \text{altura}$ |
| **20** | **Hipotenusa** | 2 números | $\sqrt{A^2 + B^2}$ (`hypot`) |
| **0** | **Sair** | - | Encerra a execução |

---

## 💻 Como Compilar e Executar

### Pré-requisitos
* Compilador C instalado (como `gcc` ou `clang`).

### 1. Compilação
No terminal, utilize a flag `-lm` para vincular a biblioteca matemática (`math.h`):

```bash
gcc -o calculadora main.c -lm
