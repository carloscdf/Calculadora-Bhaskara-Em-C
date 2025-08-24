# 📐 Calculadora de Bhaskara em C

Este repositório contém um exercício desenvolvido na disciplina **Algoritmos e Estruturas de Dados II** da **Universidade Estadual do Sudoeste da Bahia (UESB)**.  
O programa implementa uma **calculadora de Bhaskara** utilizando **structs e ponteiros em C**.

---

## 🚀 Funcionalidades
- Menu interativo no terminal:
  - `[1]` Realizar um novo cálculo  
  - `[2]` Exibir o último cálculo realizado  
  - `[0]` Encerrar o programa  
- Entrada dos coeficientes `a`, `b` e `c` da equação quadrática.  
- Cálculo automático do **delta** e das **raízes reais** (quando existirem).  
- Tratamento de casos:
  - **Δ < 0** → sem soluções reais.  
  - **Δ = 0** → uma solução real (raiz dupla).  
  - **Δ > 0** → duas soluções reais distintas.  

---

## 📂 Estrutura do Código
- `struct bhaskaraData` → armazena os coeficientes `a`, `b`, `c` e as raízes `x1` e `x2`.  
- `lerValores()` → menu principal para entrada de dados e opções do usuário.  
- `calcBhaskara()` → realiza o cálculo do **delta** e das raízes.  
- `imprimirValores()` → exibe os dados de entrada e os resultados na tela.  
- `main()` → inicializa a struct e chama a função principal de interação.

---
Desenvolvido por Carlos Nascimento.