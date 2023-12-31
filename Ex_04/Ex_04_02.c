#include <stdio.h>

int main ()
{
    int max = 0,
        num = 0;

    scanf("%d", &num);
    max = num;

    while (scanf("%d", &num))
    {
        if (num == -1)
        {
            printf("%d", max);
            return 0;
        }
        else
        {
            if (num > max)
            {
                max = num;
            }
        }
    }

    if (getchar() != '\n')
    {
        printf("n/a");
        return 0;
    }

    printf("%d", max);
    return 0;
}


// Exam_04_02. Поиск наибольшего
// Уровень: 2
// Темы: Базовые управляющие структуры (следование, ветвление, повторение).
// Директория для решения: src/
// Файлы решения: main.c
// Входные данные: стандартный поток ввода (stdin)
// Выходные данные: стандартный поток вывода (stdout)

// Написать программу, осуществляющую поиск наибольшего числа в последовательности, состоящей из неотрицательных целых чисел.
// Последовательность задается на стандартный поток ввода stdin, элементы последовательности разделены между собой пробелами,
// концом последовательности, является число -1, которое обозначает конец последовательности и не является ее злементом.
// Найденное наибольшее значение необходимо вывести на стандартный поток вывода. Гарантируется, что в последоватальности всегда есть хоть один элемент.
// В конце ответа не должно быть переноса ка новую строку.

// | Входные данные | Результат работы |
// | 1000 -1 | 1000 |
// | 1 2 3 4 3 2 1 -1 | 4 |