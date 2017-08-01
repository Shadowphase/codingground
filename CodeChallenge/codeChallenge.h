#pragma once
#include "calculationUtil.h"

enum Category {
    ONES,
    TWOS,
    THREES,
    FOURS,
    FIVES,
    SIXES,
    SEVENS,
    EIGHTS,
    THREE_OF_KIND,
    FOUR_OF_KIND,
    FULL_HOUSE,
    SMALL_STRAIGHT,
    LARGE_STRAIGHT,
    ALL_DIFF,
    ALL_SAME
};

//Gets the score of specified category from given dice rolls
int getScore(int dice[], Category cat);
//Gets the highest score out of all categories from given dice rolls
int getHighestScore(int dice[]);