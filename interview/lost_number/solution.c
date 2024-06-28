/*
 * solution.c
 * Distributed under terms of the MIT license.
 * Сложность: 7
 */

#include <stddef.h>

/* Дан массив идущих подряд чисел от 1 до N в произвольном порядке.
 * В случае пустого массива необходимо вернуть 0.
 * Из него выкинули один элемент.
 * Найти пропущенное число.
 */

int lost_number(int* a, size_t size)
{
    if(size == 0){
        return 0;
    }
    
    size_t N = size +1;
    int exp_sum = (N*(N+1))/2; //ожидаемая сумма
    
    int real_sum = 0; //наша сумма
    for(int i = 0; i<size; ++i){
        real_sum += a[i];
    }
    
    return exp_sum - real_sum;
}

