#include <stdio.h>
int lengthstr(char arr[]);
int main()
{
    char name[100];
    printf("enter your name: \n");

    fgets(name, 100, stdin);
    printf("length is %d\n", lengthstr(name));

    return 0;
}
int lengthstr(char arr[])
{

    {
        int count = 0;
        for (int i = 0; arr[i] != '\0'; i++)
        {
            count++;
        }
        return count-1;
    }
}