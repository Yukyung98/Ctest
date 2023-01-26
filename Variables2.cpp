#include<stdio.h>
#define MONTHS 12 //상수에 대한 정의 1년12개월

int main(void)
{
    //연봉구하기
    double monthSalary = 1000.5; 
    printf("$ %.2f \n",monthSalary*MONTHS); //c언어 상수사용방법


    //char형 배우기
    char x = 'A'; //char형은 내부적으로 숫자로 구성되어 있다.
    char x1 = 65; //A에 대한 아스키 코드 값이 65이다.
    printf("%c \n",x);
    printf("%d",x1);

    //int형 배우기
    int y = 100;
    printf("10진수 출력: %d\n",y); 
    printf("8진수 출력 : %o\n",y);
    printf("16진수 출력 : %x \n",y);
    return 0;
}