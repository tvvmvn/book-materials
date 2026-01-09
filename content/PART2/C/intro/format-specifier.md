# 포멧 지정자


C 언어에서는 변수를 출력할 때 포멧 지정자가 필요합니다. 각 자료형마다 고유한 포멧 지정자가 있습니다

다음은 주요 포멧 지정자입니다.

%d/%i : 정수형 포멧 지정자
%f : 실수형(float) 포멧 지정자
%lf : 실수형 (double) 포멧 지정자 
%c : 문자형 포멧 지정자
%s : 문자열 포멧 지정자


```c
int myNum = 5;             
float myFloatNum = 5.99;   
char myLetter = 'D';       

printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);
```