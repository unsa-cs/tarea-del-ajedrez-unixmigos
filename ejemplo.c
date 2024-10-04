#include "chess.h"
#include "figures.h"

void display() {
  char **blackKnight = flipH(reverse(knight));
  char **whiteKnight = knight;
  char **Rook_Knight = join(blackKnight, whiteKnight); 
  interpreter(Rook_Knight);
}
