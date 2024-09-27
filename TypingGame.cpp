#include "includes.hpp"

// int random()
// {
//     std::default_random_engine generator;
//     std::uniform_int_distribution<int> dist(0, 29);
//     return dist(generator);
// }
// int input(std::istream &input) // i think it's a good practise will ask about this.... but it will avoid unecessary permanent container in main funcition which can't deleted
// {
//     int in;
//     std ::input >> in; // see you learned -_- something new cuz idea always gives you new understanding
//     return in;

// }

int input()
{
    char n = getch();
    return n;
}

int eval(std::vector<float> value)
{
    float accuracy = float(value[2] - value[1]) / float(value[2]) * 100;
    std ::cout << "Your Score  :  " << value[0] << std ::endl
               << "Acurracy  :  " << float(accuracy);

    return value[2] - value[1];
}
int main()
{

    std ::cout << "Press Enter To start : " << std ::endl;
    std ::cout << "choose your options : " << std ::endl
               << "1 : Animal      2: CarNames    3:Cities  " << std ::endl;

    auto start_time = std::chrono::high_resolution_clock::now();

    int count = 0;

    switch (input())
    {
    case '1':
    {

        std ::vector<float> sc = score(AnimaNames);
        system("CLS");
        count = eval(sc); // Eval Scoress

        break;
    }
    case '2':
    {
        system("CLS");
        count = eval(score(CarNames));
        break;
    }
    case '3':
    {
        system("CLS");
        count = eval(score(CityNames));
        break;
    }
        // default:
        // {
        //     std ::cout << in << " Not found, enter again";
        //     goto lable;
        // }
    }

    auto end_time = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::seconds>(end_time - start_time);

    std::cout << std ::endl
              << "Total Time : " << duration.count() << "sec" << std ::endl;

    std ::cout << "WPM :  " << count * ((duration.count()) / 60);

    return 0;
}