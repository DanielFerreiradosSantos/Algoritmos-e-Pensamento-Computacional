# 🌡️ Conversor de Temperaturas em C

Este repositório contém o código-fonte e a documentação do projeto **Conversor de Temperaturas**, desenvolvido em **Linguagem C**. O programa permite converter valores entre as escalas termométricas **Celsius (°C)**, **Fahrenheit (°F)** e **Kelvin (K)** a partir da escolha do usuário em um menu interativo.

O projeto foi desenvolvido atendendo aos conceitos fundamentais da linguagem C:
- Controle de fluxo e decisões utilizando a estrutura `switch...case`.
- Modularização do código por meio de **funções específicas** para cada tipo de conversão.
- Validação de entrada inválida com tratamento via bloco `default`.

---

## 📋 Funcionalidades

O programa exibe um menu com **6 opções de conversão**:

1. **Celsius (°C) → Fahrenheit (°F)**
2. **Celsius (°C) → Kelvin (K)**
3. **Fahrenheit (°F) → Celsius (°C)**
4. **Fahrenheit (°F) → Kelvin (K)**
5. **Kelvin (K) → Celsius (°C)**
6. **Kelvin (K) → Fahrenheit (°F)**

---

## 🧮 Fórmulas Matemáticas Utilizadas

As equações de conversão aplicadas no código-fonte são:

| Conversão | Fórmula Aplicada |
| :--- | :--- |
| **Celsius → Fahrenheit** | $$F = (C \times \frac{9}{5}) + 32$$ |
| **Celsius → Kelvin** | $$K = C + 273.15$$ |
| **Fahrenheit → Celsius** | $$C = (F - 32) \times \frac{5}{9}$$ |
| **Fahrenheit → Kelvin** | $$K = (F - 32) \times \frac{5}{9} + 273.15$$ |
| **Kelvin → Celsius** | $$C = K - 273.15$$ |
| **Kelvin → Fahrenheit** | $$F = (K - 273.15) \times \frac{9}{5} + 32$$ |

---

## 🏗️ Estrutura do Código

O programa é dividido de forma modular:

- `celsiusParaFahrenheit(double c)` — Converte °C para °F
- `celsiusParaKelvin(double c)` — Converte °C para K
- `fahrenheitParaCelsius(double f)` — Converte °F para °C
- `fahrenheitParaKelvin(double f)` — Converte °F para K
- `kelvinParaCelsius(double k)` — Converte K para °C
- `kelvinParaFahrenheit(double k)` — Converte K para °F
- `main()` — Gerencia a exibição do menu, leitura de dados do usuário e execução do `switch...case`.

---

## 🚀 Como Executar o Programa

### Pré-requisitos
- Um compilador de linguagem C instalado (ex: **GCC** / MinGW no Windows, GCC no Linux, Clang no macOS).
- Terminal de linha de comando ou editor de código como **VS Code**.
