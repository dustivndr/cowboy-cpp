#include "questions.h"

vector<Question> loadEasyQuestions()
{
    return
    {
        { //01
            "What is the correct syntax to output 'Hello World' in C++?",
            {"echo(\"Hello World\");", "show(\"Hello World\");", "cout << \"Hello World\";", "Console.WriteLine(\"Hello World\");"},
            'C'
        },
        { //02
            "Which header file is needed for using cout and cin?",
            {"#include <stdio.h>", "#include <iostream>", "#include <cstdlib>", "#include <cstdio>"},
            'B'
        },
        { //03
            "Which symbol is used to indicate the end of a statement in C++?",
            {"!", ".", ";", ":"},
            'C',
        },
        { //04
            "Which of the following correctly defines a constant in C++?",
            {"int const x = 10;", "const int x = 10;", "Both A and B", "None of the above"},
            'C',

        },
        { //05
            "What is the extension of a C++ source file?",
            {".htm", ".cpp", ".bat", ".cxx"},
            'B',
        },
        { //06
            "What does 'endl' do in C++?",
            {"Ends a loop", "Ends a line", "Ends a program"},
            'B'
        },
        { //07
            "Which of these types stores true or false values?",
            {"bool", "int", "char", "string"},
            'A'

        },
        { //08
            "Which of these is a correct comment in C++?",
            {"// comment", "# comment", "<!-- comment -->"},
            'A'
        },
        { //09
            "How do you declare a variable 'x' of type integer in C++?",
            {"int x;", "integer x;", "var x;", "float x;"},
            'A'
        },
        { //10
            "Which operator is used to add two numbers in C++?",
            {"+", "-", "*", "/"},
            'A'
        }
    };
}
