#include <iostream>
#include <windows.h>
#include <conio.h>
#include <vector>

#include "questions.h"
#include "scene.h"

bool mainMenu()
{
    bool play = true;
    while(true)
    {
        system("cls");
        std::cout << "+------------------------------------------------------------+\n";
        std::cout << "|                                                            |\n";
        std::cout << "|                  COWBOY C++                                |\n";
        std::cout << "|                           BATTLE AND QUIZ                  |\n";
        std::cout << "|                                                            |\n";
        std::cout << "|                                                            |\n";
        std::cout << "|                                                            |\n";
        std::cout << "|                    PLAY            EXIT                    |\n";
        if (play)
            std::cout << "|                    ----                                    |\n";
        else
            std::cout << "|                                    ----                    |\n";
        std::cout << "|                                                            |\n";
        std::cout << "|                                                            |\n";
        std::cout << "|                                                            |\n";
        std::cout << "| *use left-right/a-d key to select                          |\n";
        std::cout << "+------------------------------------------------------------+\n";

        char key = getch();

        if (key == 75 || key == 77 || key == 'a' || key == 'd' || key == 'A' || key == 'D')
        {
            play = !play;
        }
        else if (key == 13)
        {
            if (play) return 1;
            else return 0;
        }
    }
}

int main()
{
    bool startGame = mainMenu();

    system("cls");

    if (!startGame) return 0;

    showIntro();

    bool play = true;
    while (play)
    {
    }

    return 0;
}
