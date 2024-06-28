/*
 * solution.c
 * Distributed under terms of the MIT license.
 * Сложность: 7
 */

#include <stddef.h>

/*
 * Функция get_count возвращает количество гласных в заданной строке.
 * В качестве гласных рассматриваются только (a, e, i, o, u) но не (y).
 * Входная строка будет состоять только из строчных букв и/или пробелов.
 */

size_t get_count(const char *s)
{
    size_t count = 0;
    const char *vowels = "aeiou";
    
    while (*s) {
            for (const char *v = vowels; *v; ++v) {
                if (*s == *v) {
                    ++count;
                    break;
                }
            }
            ++s;
        }
        
        return count;
}

