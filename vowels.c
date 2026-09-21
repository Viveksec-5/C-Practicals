#include <stdio.h>
int countvowels(char str[]);
int main()
{
    char str[]= "helloworld";
     printf("the number of vowels:%d\n",countvowels(str));
     
    return 0;
}
int countvowels(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'i' || str[i] == 'u')
        {
            count++;
        }
    }
    return count;
}