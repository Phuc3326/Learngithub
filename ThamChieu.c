#include <stdio.h>

void Swap(int *x, int *y)
{
    int temp = *x;
    *x= *y;
    *y = temp;
}

void NhapSo (int *n)
{
    printf("\nso luong phan tu: ");
    scanf("%d", n);
}

void NhapArray(int *array, int n)
{
    
    for (int i = 0; i < n; i++)
    {
        printf("[%d]= ", i);
        scanf("%d", array + i);
    }
}

int SumArray(int *array, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(array + i);
    }
    return sum;
}

int CountDigits (int number)
{
    if(number == 0) return 1;
    int count = 0;
    for (int i = number; i > 0; i /= 10)
    {
        count++;
    }
    return count;
}

void ExtractDigits(int number, int *array, int count)
{
    for (int i = 0; i < count; i++)
    {
        array[i] = number % 10;
        number /= 10;
    }
}

int main(void)
{
    // Swap
    int x, y;
    printf("x= ");
    scanf("%d", &x);
    printf("y= ");
    scanf("%d", &y);
    Swap(&x,&y);

    // Sum array
    int n;
    NhapSo(&n);
    int array[n];
    NhapArray(array, n);
    printf("Sum Array: %d\n", SumArray(array, n));

    // Extract Digits
    int number;
    NhapSo(&number);
    int digits[CountDigits(number)];
    ExtractDigits(number, digits, CountDigits(number));
}