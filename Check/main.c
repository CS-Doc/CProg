#include <stdio.h>


int isEven(int number)
{
    if(number%2==0)
        return 1;
    else
        return 0;

}
int main()
{
    printf("4:%d" , isEven(4));
    printf("5:%d" , isEven(5));
    return 0;
}
