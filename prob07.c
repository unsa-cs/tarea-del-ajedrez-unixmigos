#include "chess.h"
#include "figures.h"

void display() {
  char **white_square = whiteSquare;
  char **black_square = reverse(whiteSquare);
  char **table_chess;
  char **first_row;
  char **second_row;

  for (int row = 1; row <= 2; row++) {
    for (int col = 1; col <= 2; col++) {
      char **square;
      if (col % 2 == 0)
        square = white_square;
      else
        square = black_square;

      if (row == 1 && col == 1) {
        first_row = square;
        first_row = superImpose(knight, first_row);
      }
      if (row == 1 && col == 2) {
        char **temp = superImpose(rotateR(knight), square);
        first_row = join(first_row, temp);
      }
      if (row == 2 && col == 1) {
        second_row = reverse(square);
        second_row = superImpose(rotateR(rotateR(knight)), second_row);
      }
      if (row == 2 && col == 2) {
        char **rotate = rotateR(rotateR(rotateR(knight)));
        char **temp = superImpose(rotate, reverse(square));
        second_row = join(second_row, temp);
      }
    }
  }

  interpreter(up(first_row, second_row));
}
