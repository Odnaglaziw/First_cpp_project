#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class ConsoleBeauty {
public:
    static void input(const string& prompt, int& result) {
        setColor(10);
        cout << prompt;
        cin >> result;
        resetColor();
    }
    static void input(const string& prompt, string& result) {
        setColor(10);
        cout << prompt;
        cin >> ws;
        getline(cin, result);
        resetColor();
    }
    static void input(int& result) {
        input("", result);
    }
    static void input(string& result) {
        input("", result);
    }
    static void error(const string& text) {
        colorPrint(text, 12);
    }
    static void task(const string& text) {
        colorPrint(text, 3);
    }
    static void action(const string& text) {
        colorPrint(text, 6);
    }
    
private:
    static void setColor(int color) {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    }
    static void resetColor() {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    }
    static void colorPrint(const string& text, int color) {
        setColor(color);
        cout << text << endl;
        resetColor();
    }
};

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int nod(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int nok(int a, int b) {
    return (a / nod(a, b)) * b;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    bool loop = true;
    ConsoleBeauty::action("Приветствую! Выберите задание.");
    while (loop) {
        loop = false;
        int taskNumber;
        ConsoleBeauty::input("Введите номер задания (1-25): ",taskNumber);
        switch (taskNumber) {
        case 1: {
            int a, b;
            system("cls");
            ConsoleBeauty::task("Напишите программу, которая вычисляет сумма двух чисел.");
            ConsoleBeauty::input("Введите первое число: ", a);
            ConsoleBeauty::input("Введите второе число: ", b);
            ConsoleBeauty::action("Ваш ответ: "+to_string(a+b));
        }break;
        case 2: {
            int a, b;
            system("cls");
            ConsoleBeauty::task("Напишите программу, которая вычисляет разность двух чисел.");
            ConsoleBeauty::input("Введите первое число: ", a);
            ConsoleBeauty::input("Введите второе число: ", b);
            ConsoleBeauty::action("Ваш ответ: " + to_string(a - b));
        }break;
        case 3: {
            int a, b;
            system("cls");
            ConsoleBeauty::task("Напишите программу, которая умножает два числа.");
            ConsoleBeauty::input("Введите первое число: ", a);
            ConsoleBeauty::input("Введите второе число: ", b);
            ConsoleBeauty::action("Ваш ответ: " + to_string(a * b));
        }break;
        case 4: {
            int a, b;
            system("cls");
            ConsoleBeauty::task("Напишите программу, которая делит одно число на другое.");
            ConsoleBeauty::input("Введите первое число: ", a);
            ConsoleBeauty::input("Введите второе число: ", b);
            ConsoleBeauty::action("Ваш ответ: " + to_string(a / b));
        }break;
        case 5: {
            int a, b;
            system("cls");
            ConsoleBeauty::task("Напишите программу, которая нахдоит остаток от деления одного числа на другое.");
            ConsoleBeauty::input("Введите первое число: ", a);
            ConsoleBeauty::input("Введите второе число: ", b);
            ConsoleBeauty::action("Ваш ответ: " + to_string(a % b));
        }break;
        case 6: {
            int a, b;
            system("cls");
            ConsoleBeauty::task("Напишите программу, которая возводит число в степень.");
            ConsoleBeauty::input("Введите ваше число: ", a);
            ConsoleBeauty::input("Введите степень: ", b);
            ConsoleBeauty::action("Ваш ответ: " + to_string(pow(a,b)));
        }break;
        case 7: {
            int a;
            system("cls");
            ConsoleBeauty::task("Напишите программу, которая находит квадратный корень числа.");
            ConsoleBeauty::input("Введите первое число: ", a);
            ConsoleBeauty::action("Ваш ответ: " + to_string(sqrt(a)));
        }break;
        case 8: {
            int a,sum = 0;
            system("cls");
            ConsoleBeauty::task("Напишите программу, которая находит сумму всех чисел от 1 до заданного числа.");
            ConsoleBeauty::input("Введите ваше число: ", a);
            for (int i = 1; i <= a; i++) {
                sum += i;
            }
            ConsoleBeauty::action("Ваш ответ: " + to_string(sum));
        }break;
        case 9: {
            int a, sum = 1;
            system("cls");
            ConsoleBeauty::task("Напишите программу, которая находит произведение всех чисел от 1 до заданного числа.");
            ConsoleBeauty::input("Введите ваше число: ", a);
            for (int i = 1; i <= a; i++) {
                sum *= i;
            }
            ConsoleBeauty::action("Ваш ответ: " + to_string(sum));
        }break;
        case 10: {
            int a, sum = 1;
            system("cls");
            ConsoleBeauty::task("Напишите программу, которая находит факториал заданного числа.");
            ConsoleBeauty::input("Введите ваше число: ", a);
            for (int i = 1; i <= a; i++) {
                sum *= i;
            }
            ConsoleBeauty::action("Ваш ответ: " + to_string(sum));
        }break;
        case 11: {
            int a, sum = 0;
            system("cls");
            ConsoleBeauty::task("Напишите программу, которая находит сумму цифр заданного числа.");
            ConsoleBeauty::input("Введите ваше число: ", a);
            while (a > 0) {
                sum += a % 10;
                a /= 10;      
            }
            ConsoleBeauty::action("Ваш ответ: " + to_string(sum));
        }break;
        case 12: {
            int a, sum = 0;
            system("cls");
            ConsoleBeauty::task("Напишите программу, которая находит кол-во цифр заданного числа.");
            ConsoleBeauty::input("Введите ваше число: ", a);
            while (a > 0) {
                a /= 10;
                sum++;
            }
            ConsoleBeauty::action("Ваш ответ: " + to_string(sum));
        }break;
        case 13: {
            int a, max = 0;
            system("cls");
            ConsoleBeauty::task("Напишите программу, которая находит наибольшую цифру заданного числа.");
            ConsoleBeauty::input("Введите ваше число: ", a);
            while (a > 0) {
                int cur = a % 10;
                if (cur > max) max = cur;
                a /= 10;
            }
            ConsoleBeauty::action("Ваш ответ: " + to_string(max));
        }break;
        case 14: {
            int a, min = 0;
            system("cls");
            ConsoleBeauty::task("Напишите программу, которая находит наименьшую цифру заданного числа.");
            ConsoleBeauty::input("Введите ваше число: ", a);
            while (a > 0) {
                int cur = a % 10;
                if (cur > min) min = cur;
                a /= 10;
            }
            ConsoleBeauty::action("Ваш ответ: " + to_string(min));
        }break;
        case 15: {
            int a, b;
            system("cls");
            ConsoleBeauty::task("Напишите программу, которая находит среднее двух чисел.");
            ConsoleBeauty::input("Введите первое число: ", a);
            ConsoleBeauty::input("Введите второе число: ", b);
            ConsoleBeauty::action("Ваш ответ: " + to_string(double(a + b)/2));
        }break;
        case 16: {
            int a, b, c;
            system("cls");
            ConsoleBeauty::task("Напишите программу, которая находит среднее трёх чисел.");
            ConsoleBeauty::input("Введите первое число: ", a);
            ConsoleBeauty::input("Введите второе число: ", b);
            ConsoleBeauty::input("Введите третье число: ", c);
            ConsoleBeauty::action("Ваш ответ: " + to_string(double(a + b + c) / 3));
        }break;
        case 17: {
            int a, b, c;
            system("cls");
            ConsoleBeauty::task("Напишите программу, которая находит наибольшее из трёх чисел.");
            ConsoleBeauty::input("Введите первое число: ", a);
            ConsoleBeauty::input("Введите второе число: ", b);
            ConsoleBeauty::input("Введите третье число: ", c);
            ConsoleBeauty::action("Ваш ответ: " + to_string(max(max(a,b),c)));
        }break;
        case 18: {
            int a, b, c;
            system("cls");
            ConsoleBeauty::task("Напишите программу, которая находит наименьшее из трёх чисел.");
            ConsoleBeauty::input("Введите первое число: ", a);
            ConsoleBeauty::input("Введите второе число: ", b);
            ConsoleBeauty::input("Введите третье число: ", c);
            ConsoleBeauty::action("Ваш ответ: " + to_string(min(min(a, b), c)));
        }break;
        case 19: {
            int a, b, count = 0;
            system("cls");
            ConsoleBeauty::task("Напишите программу, которая находит кол-во простых чисел в заданном дапазоне.");
            ConsoleBeauty::input("Введите первое число: ", a);
            ConsoleBeauty::input("Введите второе число: ", b);
            for (int i = min(a, b); i <= max(a, b); i++) {
                if (isPrime(i)) count++;
            }
            ConsoleBeauty::action("Между "+to_string(min(a,b))+" и "+to_string(max(a,b))+" находятся "+to_string(count)+" простых чисел.");
        }break;
        case 20: {
            int a;
            system("cls");
            ConsoleBeauty::task("Напишите программу, которая определяет, является ли заданное число простым.");
            ConsoleBeauty::input("Введите ваше число: ", a);
            if (isPrime(a)) ConsoleBeauty::action("Число простое.");
            else ConsoleBeauty::error("Число не является простым");
        }break;
        case 21: {
            int a;
            system("cls");
            ConsoleBeauty::task("Напишите программу, которая определяет, является ли заданное число чётным.");
            ConsoleBeauty::input("Введите ваше число: ", a);
            if (a % 2 == 0) ConsoleBeauty::action("Число чётное.");
            else ConsoleBeauty::error("Число не является чётным.");
        }break;
        case 22: {
            int a, b;
            system("cls");
            ConsoleBeauty::task("Напишите программу, которая находит наибольший общий делитель двух чисел.");
            ConsoleBeauty::input("Введите первое число: ", a);
            ConsoleBeauty::input("Введите второе число: ", b);
            ConsoleBeauty::action("Ваш ответ: "+to_string(nod(a,b)));
        }break;
        case 23: {
            int a, b;
            system("cls");
            ConsoleBeauty::task("Напишите программу, которая находит наименьшее общее кратное двух чисел.");
            ConsoleBeauty::input("Введите первое число: ", a);
            ConsoleBeauty::input("Введите второе число: ", b);
            ConsoleBeauty::action("Ваш ответ: " + to_string(nok(a, b)));
        }break;
        case 24: {
            int a, sum = 0;
            system("cls");
            ConsoleBeauty::task("Напишите программу, которая находит сумму всех нечётных чисел от 1 до заданного числа.");
            ConsoleBeauty::input("Введите ваше число: ", a);
            for (int i = 1; i <= a; i++) {
                if (i % 2 != 0) sum += i;
            }
            ConsoleBeauty::action("Ваш ответ: " + to_string(sum));
        }break;
        case 25: {
            int a, sum = 0;
            system("cls");
            ConsoleBeauty::task("Напишите программу, которая находит сумму всех чётных чисел от 1 до заданного числа.");
            ConsoleBeauty::input("Введите ваше число: ", a);
            for (int i = 1; i <= a; i++) {
                if (i % 2 == 0) sum += i;
            }
            ConsoleBeauty::action("Ваш ответ: " + to_string(sum));
        }break;
        default: { 
                ConsoleBeauty::error("Такого задания нет."); 
                loop = true;
            }
        }
    }
}
