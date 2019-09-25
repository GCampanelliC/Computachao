#include <bits/stdc++.h>
// UNASSIGNED � usado por c�lulas vazias
#define UNASSIGNED 0
// N � usado para o tamanho do Sudoku. Ser� NxN
#define N 9
// Esta fun��o encontra uma entrada no Sudoku que n�o foi numerada
bool FindUnassignedLocation(int grid[N][N], int &row, int &col);
// Checa se � permitido colocar um determinado n�mero na c�lula encontrada
bool isSafe(int grid[N][N], int row, int col, int num);
/* Faz um preenchimento, para atribuir valores para todas as c�lulas n�o numeradas,
verificando os requisitos para solu��o do Sudoku (n�o duplica��o nas linhas, colunas e
matrizes 3x3) */
bool SolveSudoku(int grid[N][N])
{ int row, col;
// Se n�o h� c�lula vazia, sucesso!
if (!FindUnassignedLocation(grid, row, col))
return true; // successo!
// considerando d�gitos de 1 a 9
for (int num = 1; num <= 9; num++)
{
// if looks promising
if (isSafe(grid, row, col, num))
{
// faz tentativa de preenchimento
grid[row][col] = num;
// retorna, se deu certo, prossiga!
if (SolveSudoku(grid))
return true;
// falha, desfaz a inser��o e tenta novamente
grid[row][col] = UNASSIGNED;
}
}
return false; // isto engatilha o backtracking
}
/* Procura uma c�lula que n�o foi preenchida. Se for encontrada, linha e
coluna s�o retornadas nos ponteiros */
bool FindUnassignedLocation(int grid[N][N], int &row, int &col)
{
for (row = 0; row < N; row++)
for (col = 0; col < N; col++)
if (grid[row][col] == UNASSIGNED)
return true;
return false;
}
// Retorna um booleano que indica se um n�mero j� foi utilizado em uma linha espec�fica
bool UsedInRow(int grid[N][N], int row, int num)
{
for (int col = 0; col < N; col++)
if (grid[row][col] == num) return true;
return false;
}
// Retorna um booleano que indica se um n�mero j� foi utilizado em uma coluna espec�fica
bool UsedInCol(int grid[N][N], int col, int num)
{
for (int row = 0; row < N; row++)
if (grid[row][col] == num) return true;
return false;
}
// Retorna um booleano que indica se um n�mero j� foi utilizado em uma matriz 3x3 espec�fica
bool UsedInBox(int grid[N][N], int boxStartRow, int boxStartCol, int num)
{
for (int row = 0; row < 3; row++)
for (int col = 0; col < 3; col++)
if (grid[row+boxStartRow][col+boxStartCol] == num) return true;
return false;
}
/* Retorna um booleano que indica se ser� permitido colocar um n�mero em uma
determinada c�lula */
bool isSafe(int grid[N][N], int row, int col, int num)
{
/* Checa se num j� n�o est� na linha definida, na coluna definida ou na matriz 3x3
correspondente */
return !UsedInRow(grid, row, num) &&
!UsedInCol(grid, col, num) &&
!UsedInBox(grid, row - row%3 , col - col%3, num);
}
/* Fun��o para imprimir a matriz toda */
void printGrid(int grid[N][N])
{
for (int row = 0; row < N; row++)
{
for (int col = 0; col < N; col++)
printf("%2d", grid[row][col]);
printf("\n");
}
}
int main()
{
// 0 significa c�lulas n�o numeradas
int grid[N][N] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
{5, 2, 0, 0, 0, 0, 0, 0, 0},
{0, 8, 7, 0, 0, 0, 0, 3, 1},
{0, 0, 3, 0, 1, 0, 0, 8, 0},
{9, 0, 0, 8, 6, 3, 0, 0, 5},
{0, 5, 0, 0, 9, 0, 6, 0, 0},
{1, 3, 0, 0, 0, 0, 2, 5, 0},
{0, 0, 0, 0, 0, 0, 0, 7, 4},
{0, 0, 5, 2, 0, 6, 3, 0, 0}};
if (SolveSudoku(grid) == true)
printGrid(grid);
else
printf("No solution exists");
return 0;
}
