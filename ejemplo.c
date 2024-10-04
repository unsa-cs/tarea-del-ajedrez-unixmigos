#include "chess.h"
#include "figures.h"

void display() {
  char **white_square = whiteSquare;
  char **black_square = reverse(whiteSquare);
  char **black_queen = reverse(queen);
  interpreter(repeatH(join(white_square, black_queen), 2));
}
