# include <stdio.h>

int main(void) {
    // 1~10까지 합계를 구하시오.
    int i = 1;
    int sum = 0;

    // SUM = 1+2+3+4+5+6+7+8+9+10;
    while( i <= 10) {
        sum += i;
        i++;
        //SUM = 0 + 1;
        //SUM = 1 + 2;
        //SUM = (1 + 2) + 3;
        //...
        //SUM = 1+2+3+...+10;

    }

    printf("합계 : %d\n", sum);



   
return 0; 
}