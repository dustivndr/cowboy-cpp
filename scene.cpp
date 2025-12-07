#include <iostream>
#include <windows.h>
#include <conio.h>
#include "scene.h"

void showIntro()
{
    system("cls");
    std::cout << "+------------------------------------------------------------+\n";
    std::cout << "|                                                            |\n";
    std::cout << "|                         WELCOME TO                         |\n";
    std::cout << "|                                                            |\n";
    std::cout << "|                 COWBOY C++: BATTLE AND QUIZ                |\n";
    std::cout << "|                                                            |\n";
    std::cout << "|            Press any key to start your journey...          |\n";
    std::cout << "|                                                            |\n";
    std::cout << "+------------------------------------------------------------+";
    getch();
}

