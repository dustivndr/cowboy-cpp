#include "questions.h"

vector<Question> loadMediumQuestions()
{
    return
    {
        { //01
            "What is the output of the following code snippet?\n int x = 5;\n cout << ++x << endl;",
            {"5", "6", "7", "Error"},
            'B'
        },
        { //02
            "What is the output of the following code snippet?\n bool a = true;\n bool b = false;\n cout << (a && b) << endl;",
            {"0", "1", "true", "false"},
            'A'
        },
        { //03
            "What is the output of the following code snippet?\n int arr[] = {1, 2, 3};\n cout << arr[1] << endl;",
            {"1", "2", "3", "Error"},
            'B'
        },
        { //04
            "What is the output of the following code snippet?\n for(int i = 0; i < 3; i++) {\n cout << i << \" \";\n }",
            {"0 1 2 ", "1 2 3 ", "0 1 2 3 ", "Error"},
            'A'
        },
        { //05
            "What is the output of the following code snippet?\n int x = 10;\n if(x > 5) {\n cout << \"Greater\" << endl;\n } else {\n cout << \"Smaller\" << endl;\n }",
            {"Greater", "Smaller", "10", "Error"},
            'A'
        }
    };
}