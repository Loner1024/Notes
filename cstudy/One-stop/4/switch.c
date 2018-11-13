#include <stdio.h>

void print_day(int day)
{
    switch (day){
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
}

}

int main(void){
    print_day(2);
    return 0;
}