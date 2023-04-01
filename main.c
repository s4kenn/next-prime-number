#include <stdio.h>
int nextPrime(int a)
{
    int count = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    if (count == 2)
    {
        return a;
    }
    else
    {
        a++;
        nextPrime(a);
    }
}
int main()
{
    int numberUser;
    printf("Enter the number ");
    scanf("%d", &numberUser);
    printf("The next prime number after %d is %d", numberUser, nextPrime(numberUser + 1));
    return 0;
}
