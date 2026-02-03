#include <cs50.h>
#include <stdio.h>

//Prototype - resumo da função que ainda ser criada, durante o desenvolvimento do código
void meow(int n);

int main(void)
{
    int n = get_int("What's n? ");
    meow(n);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
