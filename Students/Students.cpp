// временный проект.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <string>
#include <Windows.h>
#include <iostream>

using namespace std;

struct Emp
{
    string Familia;
    string Name;
    int ball_math;
    int ball_russ_language;
    int phisiks;
    double sr_ball;
    double Sr_ball(int ball_math, int ball_russ_language, int phisiks) // функция для расчёта среднего балла
    {
        double result = (ball_math + ball_russ_language + phisiks) / 3;
        return result;
    }
    Emp(string Familia, string Name, int ball_math, int ball_russ_language, int phisiks, double sr_ball)
    {
        this->Familia = Familia;
        this->Name = Name;
        this->ball_math = ball_math;
        this->ball_russ_language = ball_math;
        this->phisiks = phisiks;
        this->sr_ball = sr_ball;
    }
    Emp()
    {
    }
};
int main()
{
    double summ(0.0);
    const int ch = 2; //количество вводимых данных
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Здравствуй, дорогой преподаватель! Введи имена и оценки своих учеников:\n";
    string Familia, Name;
    int ball_math, ball_russ_language, phisiks;
    Emp objekt[ch];
    double sr_summ_ballov;
    Emp r;
    try {
        for (int i = 0; i < ch; i++) // создание объектов(студентов)
        {
            std::cout << "Введите фамилию:";
            std::cin >> Familia;
            if (Familia == "")
                throw (0);
            std::cout << "Введите имя:";
            std::cin >> Name;
            if (Name == "")
                throw (0);
            std::cout << "Введите балл по математике:";
            std::cin >> ball_math;
            if (ball_math <= 0 || ball_math > 5)
                throw (0);
            std::cout << "Введите балл по русскому языку:";
            std::cin >> ball_russ_language;
            if (ball_russ_language <= 0 || ball_russ_language > 5)
                throw (0);
            std::cout << "Введите балл по физике:";
            std::cin >> phisiks;
            if (phisiks <= 0 || phisiks > 5)
                throw (0);
            objekt[i] = { Familia, Name, ball_math, ball_russ_language, phisiks, r.Sr_ball(ball_math, ball_russ_language, phisiks) };
            summ += objekt[i].sr_ball;
        }
        sr_summ_ballov = summ / ch;
        std::cout << "Фамилии и мена студентов, чей ср.балл выше ср.балла всей группы:";
        for (int i = 0; i < ch; i++)
        {
            if (objekt[i].sr_ball > sr_summ_ballov)
            {
                std::cout << objekt[i].Familia << " " << objekt[i].Name;
            }
        }
    }
    catch(int Y)
    {
        cout << "Введено недопустимое значение!"; //обработка исключений
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
