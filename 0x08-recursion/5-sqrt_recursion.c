#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number
 *
 * Return: The square root of @n, or -1 if @n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;

    if (n == 0 || n == 1)
        return n;

    return find_sqrt(n, 1, n);
}

/**
 * find_sqrt - Helper function to find the square root recursively.
 * @n: The number
 * @start: The starting point for the search
 * @end: The ending point for the search
 *
 * Return: The square root of @n, or -1 if @n does not have a natural square root.
 */
int find_sqrt(int n, int start, int end)
{
    int mid = (start + end) / 2;

    if (start <= end)
    {
        if (mid * mid == n)
            return mid;
        else if (mid * mid < n)
            return find_sqrt(n, mid + 1, end);
        else
            return find_sqrt(n, start, mid - 1);
    }

    return -1; // If no natural square root is found
}
