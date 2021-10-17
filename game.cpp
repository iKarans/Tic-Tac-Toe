#include <iostream>
#include <string>
#include "game.h"

void Game::print_board()
    {
        for (int i = 0; i < 3; i++)
        {
            std::cout << "-------" << std::endl;
            std::cout << "|" << board[i][0] << "|" << board[i][1] << "|" << board[i][2] << "|" <<std::endl;
        }
        std::cout << "-------" << std::endl;   
    };
bool Game::check_winner()
    {
        for (int i = 0; i < 3; i++)
        {
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            {
                return true;
            };        
        };
        for (int i = 0; i < 3; i++)
        {
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            {
                return true;
            };
        };

        if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) || (board[2][0] == board[1][1] && board[1][1] == board[0][2])) 
        {
            return true;
        };  
        return false;
    }
void Game::game()
    {
        while (!check_winner() && rounds < 9)
        {
            print_board();
            int choice;
            std::cout << "Choose a Number: ";
            std::cin >> choice;
            if(playerOneTurn)
            {
                board[(choice - 1) / 3][(choice - 1) % 3] = "X";
            } 
            else 
            {
                board[(choice - 1) / 3][(choice - 1) % 3] = "O";
            }
            playerOneTurn = !playerOneTurn;
            rounds++;   
        };
        print_board();
     
    };

