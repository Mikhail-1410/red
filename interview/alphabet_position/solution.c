/*
 * solution.c
 * Distributed under terms of the MIT license.
 * Сложность: 6
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
 * Необходимо, учитывая строку, заменить каждую букву ее позицией в алфавите.
 * Если что-то в тексте не является буквой, игнорируйте это и не возвращайте.
 * «a» = 1, «b» = 2 и т.д.
 *
 * Пример:
 * alphabet_position("The sunset sets at twelve o' clock.");
 * Должен вернуть "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11" (в виде строки)
 *
 * Вызывающий код освобождает возвращаемый указатель
 */

char *alphabet_position(char *text)
{
    // Your code here
    int max_len = 0;
    for (char *p = text; *p != "\0"; p++){
        if (isalpha(*p)){
            len += 3;
        }
    }
    
    char *result = (char *)malloc(len + 1);
    
    char *out = result;
    for (char *p = text; *p != '\0'; p++) {
            if (isalpha(*p)) {
                int position = tolower(*p) - 'a' + 1;
                out += sprintf(out, "%d ", position);
            }
        }

        if (out > result) {
            *(out - 1) = '\0';
        }

        return result;

    
    
    return text;
}

