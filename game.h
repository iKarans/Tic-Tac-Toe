#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>
class Game
{
    public:
        std::string board[3][3] = {{"1","2","3"},{"4","5","6"},{"7","8","9"}};
        bool playerOneTurn = true;
        int rounds = 0;
        void print_board();
        bool check_winner();
        void game();
};

#endif