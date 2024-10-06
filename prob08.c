#include "chess.h"
#include "figures.h"

void display() {
  char **black_square = reverse(whiteSquare);
  char **table_chess;
  int matriz[8][8] = {
    {1, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0}
  };

  for (int i = 1; i <= 8; i++) {
    char **tem_row;
    for (int j = 1; j <= 8; j++) {
      if (j == 1) {
        if (i % 2 == 0)
          if (matriz[i - 1][j - 1] == 1)
            tem_row = superImpose(queen, whiteSquare);
          else
            tem_row = whiteSquare;
        else
          if (matriz[i - 1][j - 1] == 1)
            tem_row = superImpose(queen, black_square);
          else 
            tem_row = black_square;
      }
      else {
        if ((i + j) % 2 == 0)
          if (matriz[i - 1][j - 1] == 1)
            tem_row = join(tem_row,superImpose(queen, black_square));
          else
            tem_row = join(tem_row, black_square);
        else
          if (matriz[i - 1][j - 1] == 1)
            tem_row = join(tem_row, superImpose(queen, whiteSquare));
          else
            tem_row = join(tem_row, whiteSquare);
      }
    }
    if (i == 1)
      table_chess = tem_row;
    else
      table_chess = up(table_chess, tem_row);
  }

  interpreter(table_chess);
}
