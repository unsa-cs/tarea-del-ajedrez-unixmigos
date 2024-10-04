#include "chess.h"
#include "figures.h"

void display() {
  char **blackKnight = rotateL(reverse(knight));
  char **whiteKnight = rotateR(rotateR(rotateR(rotateR(knight))));
  char **Rook_Knight = join(blackKnight, whiteKnight); 
  interpreter(Rook_Knight);
}
