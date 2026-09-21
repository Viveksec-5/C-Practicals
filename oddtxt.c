#include <stdio.h>

int main(){
    int n;
    FILE*ptr;
    ptr=fopen("odd.txt","w");
    printf("Enter the number: \n");
    scanf("%d",&n);
    for (int i = 1; i < n; i++)
    {
        if (i%2 != 0)
        {
            fprintf(ptr,"%d\n",i);
        }
        
    }
    fclose(ptr);
    return 0;
}