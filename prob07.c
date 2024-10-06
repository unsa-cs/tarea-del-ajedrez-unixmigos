#include "chess.h"
#include "figures.h"

void display() {
  char **white_square = whiteSquare;
  char **black_square = reverse(whiteSquare);
  char **table_chess;
  for (int row = 1; row <= 2; row++) {
    for (int col = 1; col <= 2; col++) {
      if (row == 1 && col == 1) {
        table_chess = black_square;
        table_chess = superImpose(knight, table_chess);
      }
      if (row == 1 && col == 2) {
        char **temp = superImpose(rotateR(knight), table_chess);
        table_chess = join(table_chess, temp);
      }
    }
  }
  
  interpreter(table_chess);
}
