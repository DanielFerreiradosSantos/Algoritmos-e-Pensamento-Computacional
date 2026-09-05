# 🧮 Calculadora Científica + IMC e Área em C

Este projeto é uma **Calculadora Científica de Console** desenvolvida em C padrão (C99/C11). O programa aceita interativamente até 22 operações matemáticas e utilitárias via menu, tratando operações aritméticas básicas, trigonometria, funções exponenciais/logarítmicas, **cálculo de IMC com classificação automática** e **cálculo de área**.

---

## 🚀 Recursos e Funcionalidades

O programa conta com tratamento robusto de entrada no terminal, impedindo falhas em caso de digitações inválidas, além de validação para divisão por zero e cálculo de IMC seguro.

### 📊 Operações Disponíveis (0 a 22)

| Opção | Operação | Parâmetros Requeridos |
| :---: | :--- | :--- |
| **1** | Soma ($A + B$) | Valor A, Valor B |
| **2** | Subtração ($A - B$) | Valor A, Valor B |
| **3** | Multiplicação ($A \times B$) | Valor A, Valor B |
| **4** | Divisão ($A / B$) | Valor A, Valor B (Com validação $B \neq 0$) |
| **5** | Potência ($A^B$) | Base A, Expoente B |
| **6** | Módulo / Resto | Valor A, Valor B |
| **7** | Raiz Quadrada ($\sqrt{A}$) | Valor A |
| **8** | Seno ($\sin(A)$) | Valor A |
| **9** | Cosseno ($\cos(A)$) | Valor A |
| **10** | Tangente ($\tan(A)$) | Valor A |
| **11** | Arco Seno ($\arcsin(A)$) | Valor A |
| **12** | Arco Cosseno ($\arccos(A)$) | Valor A |
| **13** | Arco Tangente ($\arctan(A)$) | Valor A |
| **14** | Logaritmo na Base 10 ($\log_{10}(A)$) | Valor A |
| **15** | Logaritmo Natural ($\ln(A)$) | Valor A |
| **16** | Exponencial ($e^A$) | Valor A |
| **17** | Valor Absoluto ($|A|$) | Valor A |
| **18** | Parte Inteira ($\text{int}(A)$) | Valor A |
| **19** | Função Sinal ($\text{sgn}(A)$) | Valor A |
| **20** | Fatorial ($A!$) | Valor A |
| **21** | **Cálculo de IMC** | Peso (kg), Altura (m) |
| **22** | **Cálculo de Área** | Base, Altura |
| **0** | **Sair** | Encerra a execução do programa |

---

## ⚕️ Classificação de IMC (Opção 21)

Ao selecionar a opção de cálculo do IMC, o programa realiza o cálculo ($\text{Peso} / \text{Altura}^2$) e imprime a respectiva classificação:

* **IMC < 18.5:** `Classificação: Abaixo do peso`
* **18.5 ≤ IMC < 25.0:** `Classificação: Peso normal`
* **25.0 ≤ IMC < 30.0:** `Classificação: Sobrepeso (Acima do peso)`
* **IMC ≥ 30.0:** `Classificação: Obesidade`

---

## 🛠️ Compilação e Execução

### Pré-requisitos
* Compilador C instalado (como `gcc` ou `clang`).

### Passos para Compilar

No terminal, execute o comando a seguir (lembrando de incluir o parâmetro `-lm` para vincular a biblioteca matemática `math.h`):

```bash
gcc -o calculadora main.c -lm
