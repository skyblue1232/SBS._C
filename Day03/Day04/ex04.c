# include <stdio.h>

int main(void) {

    int score = 0;
    char grade = 'E';
    printf("성적 : ");
    scanf("%d", &score);

    if( score <= 100 && score >= 90) {
        grade = 'A';
    }
    if( score < 90 && score >= 80) {
        grade = 'B';
    }
    if( score < 80 && score >= 70) {
        grade = 'C';
    }
    if( score < 70 && score >= 60) {
        grade = 'D';
    }
    if( score < 60) {
        grade = 'E';
    }
    printf("등급은 %c 입니다.", grade);

    return 0;
}
