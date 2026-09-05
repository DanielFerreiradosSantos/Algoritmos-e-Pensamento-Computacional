# 🧮 Calculadora Científica + IMC e Área (Flowgorithm)

Este projeto consiste em um fluxograma interativo desenvolvido para o software **Flowgorithm**, capaz de executar 22 operações matemáticas e utilitárias — desde operações de aritmética básica e funções trigonométricas até o cálculo de **Índice de Massa Corporal (IMC)** com classificação automática e **cálculo de área**.

---

## 🚀 Recursos e Funcionalidades

O programa conta com um menu numérico interativo e tratamento básico de erros (como divisão por zero e validação de altura nula).

### 📊 Operações Disponíveis (0 a 22)

| Opção | Operação | Parâmetros Requeridos |
| :---: | :--- | :--- |
| **1** | Soma ($A + B$) | Valor A, Valor B |
| **2** | Subtração ($A - B$) | Valor A, Valor B |
| **3** | Multiplicação ($A \times B$) | Valor A, Valor B |
| **4** | Divisão ($A / B$) | Valor A, Valor B (Com validação $B \neq 0$) |
| **5** | Potência ($A^B$) | Base A, Expoente B |
| **6** | Módulo / Resto ($A \pmod B$) | Valor A, Valor B |
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

Ao escolher a opção de cálculo de IMC, o programa calcula o valor ($\text{Peso} / \text{Altura}^2$) e exibe automaticamente a faixa correspondente:

* **IMC < 18.5:** `Classificação: Abaixo do peso`
* **18.5 ≤ IMC < 25.0:** `Classificação: Peso normal`
* **25.0 ≤ IMC < 30.0:** `Classificação: Sobrepeso (Acima do peso)`
* **IMC ≥ 30.0:** `Classificação: Obesidade`

---

## 💻 Como Executar no Flowgorithm

1. Baixe e instale o [Flowgorithm](http://www.flowgorithm.org/) (versão 4.0 ou superior).
2. Abra o software.
3. Vá em **Arquivo > Abrir...** e selecione o arquivo `.fprg` do projeto (ou copie o código XML para o arquivo).
4. Clique no botão verde de **Executar (Play)** ou pressione `F5`.
5. Digite a opção desejada no console e forneça os valores quando solicitado.

---

## 📄 Estrutura do Arquivo XML

O código-fonte utiliza a estrutura padrão do Flowgorithm:
* **Variáveis de Controle:** `op` (opção do menu), `i` (contador de repetição do fatorial).
* **Variáveis Numéricas:** `a` e `b` (entradas de dados), `result` (armazenamento do resultado).
* **Estrutura de Repetição:** Laço `While` com condição de parada `op != 0`.
