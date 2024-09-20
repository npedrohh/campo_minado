# Campo Minado

O objetivo do jogo é encontrar onde estão todas a minas dentro de um campo  M x N.  O jogo mostra um número em um quadrado que diz quantas minas estão adjacentes ao quadrado. Cada quadrado tem no máximo oito quadrados adjacentes. O campo 4 x 4 abaixo contém duas minas sendo que cada uma delas é representada pelo caractere asterisco ('*').

\* . . .

. . . .

. \* . .

. . . .

A matriz de pontos do exemplo acima foram substituídos pelo número de minas adjacentes a cada quadrado da matriz.

\* 1 0 0

2 2 1 0

1 \* 1 0

1 1 1 0

## Entrada:

A entrada consistirá de um número arbitrário de campos. A primeira linha de cada campo contém dois inteiros n e m (0< n, m<=100) que representam o número de linhas e colunas do campo, respectivamente. Cada uma das n  próximas linhas contém m caracteres. Os caracteres seguros são representados por pontos e as minas por asteriscos.

A primeira linha que contiver n = m = 0 representa o fim da entrada.

Exemplo de entrada:

4 4

\* . . .

. . . .

. \* . .

. . . .

3 5

\* \* . .

. . . .

. \* . .

0 0

## Saída:

Para cada campo, imprima Field #x: na linha superior, onde x é o número de campo. A saída deve substituir  os pontos pelo número de minas adjacentes.

Exemplo de saída:

Field #1:

\* 1 0 0

2 2 1 0

1 \* 1 0

1 1 1 0

Field #2:

\* \* 1 0 0

3 3 2 0 0

1 \* 1 0 0


