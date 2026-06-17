# Grafos com Matriz de Adjacência em C

## Sobre o Projeto

Este projeto foi desenvolvido como parte dos estudos em Estruturas de Dados e Teoria dos Grafos utilizando a linguagem C.

O objetivo é implementar um grafo por meio de uma matriz de adjacência, permitindo representar conexões entre vértices de forma simples e eficiente para grafos de pequeno e médio porte.

## Funcionalidades

* Criação de grafos
* Inicialização da matriz de adjacência
* Inserção de arestas
* Exibição da matriz de adjacência
* Visualização das conexões entre os vértices

## Tecnologias Utilizadas

* Linguagem C
* GCC (GNU Compiler Collection)
* Estruturas de Dados
* Teoria dos Grafos

## Conceitos Aplicados

Durante o desenvolvimento deste projeto foram utilizados os seguintes conceitos:

* Grafos
* Vértices e arestas
* Matriz de adjacência
* Manipulação de matrizes
* Funções em C
* Organização modular do código

## Estrutura do Grafo

Exemplo de conexões:

```text
0 --- 1
|   / |
|  /  |
| /   |
4 --- 3
 \   /
  \ /
   2
```

Representação na matriz de adjacência:

```text
   0 1 2 3 4
0  0 1 0 0 1
1  1 0 1 1 1
2  0 1 0 1 0
3  0 1 1 0 1
4  1 1 0 1 0
```

## Como Executar

Compile o programa:

```bash
gcc main.c -o grafo
```

Execute:

```bash
./grafo
```

No Windows:

```bash
grafo.exe
```

## Exemplo de Saída

```text
Matriz de Adjacência:

0 1 0 0 1
1 0 1 1 1
0 1 0 1 0
0 1 1 0 1
1 1 0 1 0
```

## Aplicações dos Grafos

Grafos são amplamente utilizados em diversas áreas da computação, como:

* Redes sociais
* Sistemas de navegação (GPS)
* Redes de computadores
* Sistemas de recomendação
* Modelagem de rotas e caminhos

## Autor

João Souza

Estudante de Engenharia de Software com foco em desenvolvimento de software, estruturas de dados e programação.
