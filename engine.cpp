#include <cstdint>
#include <iostream>

// Bitboard Alias
using bitboard = uint64_t;

// Symbolic Chess Board (I will turn it into an 8x8 later)
const int CHESS_BOARD[64] = {1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1,
                             1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1,
                             1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1,
                             1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1};

// Fifty-Move Rule Counter
int fifty;

// Three-Fold Repetition Counter
int threefold;

// Print passed-in board
void print_board(uint64_t board) {
  for (int rank = 0; rank < 8; rank++) {
    for (int file = 0; file < 8; file++) {
      int square = rank * 8 + file;
      bool bit = board & (1ULL << square);
      std::cout << bit << " ";
    }
    std::cout << "\n";
  }
  std::cout << "\nA B C D E F G H\n";
}

int main() {

  // Starting white piece bitboards
  // Note: condense these declarations into an array? :O
  bitboard white_king = 1ULL << 60;
  bitboard white_queen = 1ULL << 59;
  bitboard white_rooks = (1ULL << 56) | (1ULL << 63);
  bitboard white_bishops = (1ULL << 58) | (1ULL << 61);
  bitboard white_knights = (1ULL << 57) | (1ULL << 62);
  bitboard white_pawns = (1ULL << 48) | (1ULL << 49) | (1ULL << 50) |
                         (1ULL << 51) | (1ULL << 52) | (1ULL << 53) |
                         (1ULL << 54) | (1ULL << 55);

  // Starting black piece bitboards
  bitboard black_king = 1ULL << 4;
  bitboard black_queen = 1ULL << 3;
  bitboard black_rooks = (1ULL << 0) | (1ULL << 7);
  bitboard black_bishops = (1ULL << 2) | (1ULL << 5);
  bitboard black_knights = (1ULL << 1) | (1ULL << 6);
  bitboard black_pawns = (1ULL << 8) | (1ULL << 9) | (1ULL << 10) |
                         (1ULL << 11) | (1ULL << 12) | (1ULL << 13) |
                         (1ULL << 14) | (1ULL << 15);

  return 0;
}

/*
Move Generator (Create a move)
{
}

Move Maker (Actually Transform The Board)
    //But there are 12 boards... Do I transform all 12 or just 1 board?
bitboards are fast so both is an option
{
}

bool is_checkmate()
{
}


*/
