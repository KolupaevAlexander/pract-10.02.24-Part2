// pract(10.02.24)part2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void Print(int count, char symbol, bool isUp, int counter)
{
    for (int i = 0; i < (120 - count) / 2; i++)
    {
        std::cout << " ";
    }
    for (int i = (120-count)/2; i < count + (120 - count) / 2; i++)
    {
        std::cout << symbol;
    }
    std::cout << std::endl;
    counter += 1;
    if (counter > 50)
    {
        return;
    }
    else if (isUp)
    {
        if (symbol+1 == 'Z')
            isUp = false;
        Print(count - 4, symbol + 1, isUp, counter);
    }
    else
    {
        if (symbol-1 == 'A')
            isUp = true;
        Print(count + 4, symbol - 1, isUp, counter);
    }
}

int main()
{
    Print(120, 'A', true, 0);
}