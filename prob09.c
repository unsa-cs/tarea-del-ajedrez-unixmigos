#include "chess.h"
#include "figures.h"

void display() {
  char **black_square = reverse(whiteSquare);
  char **table_chess;
  //Blancas
  /*
  peon=1
  torre=2
  caballo=3
  alfil=4
  dama=5
  rey=6
  */
  //NEGRAS
  /*
  peon=7
  torre=8
  caballo=9
  alfil=10
  dama=11
  rey=12
  */
  int matriz[8][8] = {
    {0, 0, 0, 0, 11, 0, 0, 12},
    {0, 0, 8, 0, 8, 0, 0, 0},
    {0, 0, 0, 0, 1, 2, 0, 7},
    {7, 0, 7, 0, 0, 0, 0, 0},
    {1, 0, 4, 7, 0, 5, 0, 1},
    {0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 6, 0}
  };
  
  char **pieces[] = {pawn, rook, knight, bishop, queen, king, reverse(pawn), reverse(rook), reverse(knight), reverse(bishop), reverse(queen), reverse(king)};

  for (int i = 1; i <= 8; i++) {
    char **tem_row;
    for (int j = 1; j <= 8; j++) {
      if (j == 1 && matriz[i - 1][j - 1] == 0 && (i % 2 != 0)) {
        tem_row = black_square;
        continue;
      }
      else if (j == 1 && matriz[i - 1][j - 1] == 0 )
        tem_row = whiteSquare;
      else {
        if (i % 2 != 0){
          tem_row = black_square;
          tem_row = superImpose(pieces[matriz[i - 1][j - 1] - 1], tem_row);
        } 
        else{
          tem_row = whiteSquare;
          tem_row = superImpose(pieces[matriz[i - 1][j - 1] - 1], tem_row);
        }
      }
      if ((i + j) % 2 == 0 && matriz[i - 1][j - 1] == 0) {
      }
      else {
      }
    }
    if (i == 1)
      table_chess = tem_row;
    else
      table_chess = up(table_chess, tem_row);
  }
  interpreter(table_chess);
}
