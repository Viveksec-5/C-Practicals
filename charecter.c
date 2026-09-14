#include <stdio.h>
void cheakchar(char str[], char ch);
int main()
{
    char str[] = "Vivek";
    char ch = 'm';
    cheakchar(str, ch);
    return 0;
}
void cheakchar(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("charecter is present in the given string.\n");
            return;
        }
    }
    printf("charecter is not present in the given string.\n");
}