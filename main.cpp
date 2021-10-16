#include <iostream>
#include <string>

class Game
{
    public:
        std::string board[3][3] = {{"1","2","3"},{"4","5","6"},{"7","8","9"}};
        bool playerOneTurn = true;
        void print_board()
            {
                for (int i = 0; i < 3; i++)
                {
                    std::cout << "-------" << std::endl;
                    std::cout << "|" << board[i][0] << "|" << board[i][1] << "|" << board[i][2] << "|" <<std::endl;
                }
                std::cout << "-------" << std::endl;   
            };
};