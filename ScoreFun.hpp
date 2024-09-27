#include <vector>
#include <string>
#include <cstdlib>
#include <iostream>

std ::vector<float> score(std::vector<std::string> Names)
{
    float totalWords = 0;
    float score = 0;
    float totalErrors = 0;
    while (totalErrors < 4)
    {

        char check;
        int error = 0;
        std ::string Name = Names[rand() % 30];
        system("CLS");

        std ::cout << "   " << Name << "                                                                    CurrentScore  : " << score << std ::endl;

        for (int i = 0; i < Name.length(); i++)
        {

            check = getch();
            if (check == Name[i])
            {
                score += 10;
                std ::cout << check;
            }
            else if (error < 3)
            {
                i -= 1;
                score -= 2;
                error++;
            }
            else
            {
                totalErrors++;
                break;
            }
        }
        totalWords++;

        system("CLS");
        std ::cout << "Space!";
        getch();
    }

    return {score, totalErrors, totalWords};
}
