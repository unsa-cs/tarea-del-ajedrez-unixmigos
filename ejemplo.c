#include "chess.h"
#include "figures.h"

void display() {
  char **white_square = whiteSquare;
  char **black_square = reverse(whiteSquare);
  char **white_queen = queen;
  
  interpreter(superImpose(white_queen, black_square));
}
