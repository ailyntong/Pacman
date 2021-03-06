#ifndef CONSTANTS_H
#define CONSTANTS_H

constexpr int NUM_ROWS = 31;
constexpr int NUM_COLS = 28;
constexpr float ASPECT_RATIO = NUM_ROWS / (float)NUM_COLS;

template <typename T>
using Grid = std::array<std::array<T, NUM_ROWS>, NUM_COLS>;

#endif