#include <cstdint>
#include <iostream>

// print passed-in board (used mainly for debugging)
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

  // starting white piece bitboards
  uint64_t white_king = 1ULL << 60;
  uint64_t white_queen = 1ULL << 59;
  uint64_t white_rooks = (1ULL << 56) | (1ULL << 63);
  uint64_t white_bishops = (1ULL << 58) | (1ULL << 61);
  uint64_t white_knights = (1ULL << 57) | (1ULL << 62);
  uint64_t white_pawns = (1ULL << 48) | (1ULL << 49) | (1ULL << 50) |
                         (1ULL << 51) | (1ULL << 52) | (1ULL << 53) |
                         (1ULL << 54) | (1ULL << 55);

  // starting black piece bitboards
  uint64_t black_king = 1ULL << 4;
  uint64_t black_queen = 1ULL << 3;
  uint64_t black_rooks = (1ULL << 0) | (1ULL << 7);
  uint64_t black_bishops = (1ULL << 2) | (1ULL << 5);
  uint64_t black_knights = (1ULL << 1) | (1ULL << 6);
  uint64_t black_pawns = (1ULL << 8) | (1ULL << 9) | (1ULL << 10) |
                         (1ULL << 11) | (1ULL << 12) | (1ULL << 13) |
                         (1ULL << 14) | (1ULL << 15);

  return 0;
}
