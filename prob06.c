#include "chess.h"
#include "figures.h"
#include <threads.h>

void display() {
  char **odd_row = repeatH(join(reverse(whiteSquare), whiteSquare), 4);
  char **even_row= reverse(odd_row);
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
  char **row_first = superImpose(pieces, odd_row);
  char **row_second = superImpose(white_row_pawns, even_row);
  char **table_chess = row_first;

  for (int i = 1; i < 8; i++) {
    if (i == 1)
      table_chess = up(table_chess, row_second);
  }

  interpreter(table_chess);
}
