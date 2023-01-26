#include <stdio.h>
#include <limits.h> // 하나의 라이브러리로 변수들의 한계값을 포함하는 라이브러리이다.

int main(void)
{
int a;
a=10;
printf("변수 a의 메모리 크기는 %d입니다.\n", sizeof(a));

int b =10;
float c= 12345645648.123456; //실수표현 4byte에 해당하는 범위밖에 출력을 못한다.
double d= 123456789.123456789; //float의 범위보다 더 큰 범위를 갖는다.
printf("b=%d\n",b);
printf("c=%.2f\n",c);
printf("d=%.2f\n",d);

int e = INT_MAX; //limits.h 라이브러리가 필요하다.
printf("int 형의 최대값 x는 %d 입니다. \n", e);
printf("e+1은 %d이다. \n",e+1); //오버플로우 발생

//기본연산
int x= 10;
int y= 40;
printf("x=%d 입니다.\n",x);
printf("y=%d 입니다.\n",y);
printf("x+y=%d 입니다.\n",x+y);
printf("x-y=%d 입니다.\n",x-y);
printf("x/y=%d 입니다.\n",x/y); //몫만 남는다.
printf("x*y=%d 입니다.\n",x*y);

return 0;

}