/* Enter your solutions in this file */
#include <stdio.h>
#include <stdbool.h>

int max(int a[], int n)
{
    int mx = a[0];

    for (int i = 1; i < n; i++)
        if (mx < a[i])
            mx = a[i];

    return mx;
}

int min(int a[], int n)
{
    int mn = a[0];

    for (int i = 1; i < n; i++)
        if (mn > a[i])
            mn = a[i];

    return mn;
}

float average(int a[], int n)
{
    double sum = 0;

    for (int i = 0; i < n; i++)
        sum += a[i];

    sum = sum / (double)n;

    return (float)sum;
}

int mode(int a[], int n)
{
    int mx_count = 0;
    int mode = a[0];

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        int md = a[i];
        for (int j = 0; j < n; j++)
        {
            if (a[j] == md)
                count++;
        }

        if (mx_count < count)
        {
            mx_count = count;
            mode = md;
        }
    }

    return mode;
}

bool isPrime(int n)
{
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;

    return true;
}

int factors(int n, int a[])
{
    int N = n;

    int index = 0;

    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            while (n % i == 0)
            {
                a[index] = i;
                index++;
                n /= i;
            }
        }
    }

    return index;
}