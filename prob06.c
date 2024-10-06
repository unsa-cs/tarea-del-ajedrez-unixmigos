#include "chess.h"
#include "figures.h"
#include <threads.h>

void display() {
  char **white_Square = whiteSquare;
  char **black_Square = reverse(whiteSquare);
  char **row_first = repeatH(join(black_Square, white_Square), 4);
  char **pieces = rook;

  for (int i = 1; i < 8; i++) {
    if (i == 7)
      pieces = join(pieces, rook);
    else if (i == 1 || i == 6)
      pieces = join(pieces, knight);
    else if (i == 2 || i == 5)
      pieces = join(pieces, bishop);
    else if (i == 3)
      pieces = join(pieces, queen);
    else
      pieces = join(pieces, king);
  }
  
  char **white_row_pawns = repeatH(pawn, 8);
  char **row_second = reverse(row_first);
  char **impose_pawns = superImpose(white_row_pawns, row_second);
  
  interpreter(impose_pawns);
}
