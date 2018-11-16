#include <stdio.h>

int factorial(int n){
    if (n == 0){
        return 1;
    }
    else{
        int recurse = factorial(n-1);
        int result = n*recurse;
        return result;
    }
}

int main(int argc, char const *argv[])
{
    printf("%d\n",factorial(3));
    return 0;
}
