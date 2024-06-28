/*
 * solution.c
 * Distributed under terms of the MIT license.
 * Сложность: 4
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/*
 * Функция archiving принимает строку заглавных латинских символов
 * и возвращает укованный вариант этой строки.
 * Символы упаковываются по следующим правилам:
 * последовательность из нескольких одинаковых символов ("DDD") преобразуется в ("3D")
 * последовательность из одного символа переносится без изменений
 *
 * Пример:
 * archiving("WFFGGGH");
 * Должен вернуть "W2F3GH"
 *
 * Вызывающий код освобождает возвращаемый указатель
 */

char *archiving(char *input)
{
    // Your code here
    int n = strlen(input);
    if (n==0){
        return strdup("");
    }
    
    char *result = (char *)malloc(2 * n + 1);
    
    int pos = 0;//Позиция для записи в результирующую строку
    int i = 0;
        while (i < n) {
            char current_char = input[i];
            int count = 1; //счетчик одинаковых символов
            
            while ((i + 1) < n && input[i + 1] == current_char) {
                count++;
                ++i;
            }

            if (count > 1) {
                pos += sprintf(result + pos, "%d%c", count, current_char);
            } else {
                result[pos++] = current_char;
            }

            ++i;
        }
    
    result[pos] = '\0'; //Завершаем строку
    
    return result;
}

