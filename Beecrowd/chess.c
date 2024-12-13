#include <stdio.h>

typedef enum {
  EMPTY,
  BLACK,
  WHITE
} PieceColor;

typedef enum {
  PAWN,
  ROOK,
  KNIGHT,
  BISHOP,
  QUEEN,
  KING
} PieceType;

typedef struct {
  PieceColor color;
  PieceType type;
} Piece;

Piece board[8][8];

void initializeBoard() {
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      board[i][j].color = EMPTY;
      board[i][j].type = EMPTY;
    }
  }

  // Set up black pieces
  for (int i = 0; i < 8; i++) {
    board[1][i].color = BLACK;
    board[1][i].type = PAWN;
  }

  board[0][0].color = BLACK;
  board[0][0].type = ROOK;
  board[0][7].color = BLACK;
  board[0][7].type = ROOK;

  board[0][1].color = BLACK;
  board[0][1].type = KNIGHT;
  board[0][6].color = BLACK;
  board[0][6].type = KNIGHT;

  board[0][2].color = BLACK;
  board[0][2].type = BISHOP;
  board[0][5].color = BLACK;
  board[0][5].type = BISHOP;

  board[0][3].color = BLACK;
  board[0][3].type = QUEEN;
  board[0][4].color = BLACK;
  board[0][4].type = KING;

  // Set up white pieces
  for (int i = 0; i < 8; i++) {
    board[6][i].color = WHITE;
    board[6][i].type = PAWN;
  }

  board[7][0].color = WHITE;
  board[7][0].type = ROOK;
  board[7][7].color = WHITE;
  board[7][7].type = ROOK;

  board[7][1].color = WHITE;
  board[7][1].type = KNIGHT;
  board[7][6].color = WHITE;
  board[7][6].type = KNIGHT;

  board[7][2].color = WHITE;
  board[7][2].type = BISHOP;
  board[7][5].color = WHITE;
  board[7][5].type = BISHOP;

  board[7][3].color = WHITE;
  board[7][3].type = QUEEN;
  board[7][4].color = WHITE;
  board[7][4].type = KING;
}

void printBoard() {
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      switch (board[i][j].color) {
        case BLACK:
          printf("B");
          break;
        case WHITE:
          printf("W");
          break;
        default:
          printf("-");
          break;
      }

      switch (board[i][j].type) {
        case PAWN:
          printf("P");
          break;
        case ROOK:
          printf("R");
          break;
        case KNIGHT:
          printf("N");
          break;
        case BISHOP:
          printf("B");
          break;
        case QUEEN:
          printf("Q");
          break;
        case KING:
          printf("K");
          break;
        default:
          printf("-");
          break;
      }
    }
    printf("\n");
  }
}

int main() {
  initializeBoard();
  printBoard();

  return 0;
}
