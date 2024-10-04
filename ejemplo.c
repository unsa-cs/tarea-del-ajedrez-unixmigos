#include "chess.h"
#include "figures.h"

void display() {
  char **blackRook = flipV(reverse(rook));
  char **whiteKnight = knight;
  char **Rook_Knight = join(blackRook, whiteKnight); 
  interpreter(Rook_Knight);
  interpreter(whiteKnight);
}
