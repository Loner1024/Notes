#include <stdio.h>

int main(void){
    //struct complex_struct{double x,y;} z; //定义结构体给z1
    struct complex_struct z = {3.0,4.0}; //初始化z1
    printf("%fi\n",z.x);
}
int main(){
    printf("hello,world!\n");
}