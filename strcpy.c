#include <stdio.h>
#include<string.h>
int main(){
    char oldstr[] ="Akash";
    char newstr[] = "Vivek";
    strcpy(newstr,oldstr);
    puts(newstr);
    
    return 0;
}