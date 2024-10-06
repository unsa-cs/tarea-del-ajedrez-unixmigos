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

  interpreter(table_chess);
}
