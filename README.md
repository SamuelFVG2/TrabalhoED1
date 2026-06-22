# Trabalho de Estrutura de Dados I

## Descrição

Este projeto foi desenvolvido para a disciplina de Estrutura de Dados I.

O programa realiza a leitura de um arquivo texto contendo registros de pessoas e três datas associadas a cada uma delas. Após a leitura dos dados, são executadas duas ordenações:

- As datas de cada pessoa são ordenadas em ordem decrescente (da mais recente para a mais antiga);
- As pessoas são ordenadas alfabeticamente pelo nome.

Para a implementação das ordenações foi utilizado o algoritmo Bubble Sort, com o objetivo de praticar conceitos fundamentais de Estrutura de Dados.

---

## Estrutura do Projeto

```text
src/
│
├── classes/
│   ├── date/
│   │   ├── date.h
│   │   └── date.cpp
│   │
│   └── person/
│       ├── person.h
│       └── person.cpp
│
└── main.cpp
```

---

## Como Compilar e Executar

Clone o repositório:

```bash
git clone https://github.com/SamuelFVG2/TrabalhoED1.git
```

Acesse a pasta do código-fonte:

```bash
cd .\TrabalhoED1\src\
```

Compile o projeto:

```bash
g++ main.cpp ./classes/date/date.cpp ./classes/person/person.cpp -o main
```

Execute o programa:

```bash
.\main.exe
```

---

## Arquivo de Entrada

O programa espera um arquivo chamado `arquivo.txt` contendo registros no seguinte formato:

```text
RENATO270916141171040793
ALICE100784030495100422
```

Cada linha contém:

- Nome da pessoa;
- Três datas no formato DDMMAA.

Durante a leitura, os anos são convertidos para quatro dígitos para permitir a ordenação cronológica correta.

## Saída

Os resultados do algorítmo podem ser verificados por meio do terminal e no arquivo presente no seguinte path:

```bash
.\TrabalhoED1\src\arquivoSaida.txt
```
