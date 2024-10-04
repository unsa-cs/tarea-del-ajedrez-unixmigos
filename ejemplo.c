#include "chess.h"
#include "figures.h"

void display() {
  char **blackKnight = reverse(knight);
  char **whiteKnight = knight;
  char **Rook_Knight = rotateR(join(blackKnight, whiteKnight)); 
  interpreter(Rook_Knight);
}
