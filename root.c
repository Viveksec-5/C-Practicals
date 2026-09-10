#include <stdio.h>
#include<math.h>
int squareroot(int n);
int main(){
    int n;
    printf("enter a number  \n");
    scanf("%d",&n);
    squareroot(n);
    printf("square root is :%d\n",squareroot(n));
    
    return 0;
}

int squareroot(int n){
    int square_root= pow(n,1.0/2.0);
    return square_root; 

}