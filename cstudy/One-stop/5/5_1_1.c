#include <stdio.h>

int is_even(int x){
    if (x%2 == 0)
        return 1;
    else
        return 0;
}
/*一个返回布尔值的函数*/
int main(void)
{
	int i = 20;
	if (is_even(i)) {
        /*do sonethong*/
        printf("if\n");
	}
	else{
        printf("else\n");
	}
    return 0;
}