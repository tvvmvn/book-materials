# switch 문

일치하는 case의 코드를 실행합니다.

```c
int day = 2;

switch (day) {
  case 1:
    printf("Monday\n");
    break;
  case 2:
    printf("Tuesday\n");
    break;
  case 3:
    printf("Wednesday\n");
    break;
  case 4:
    printf("Thursday");
    break;
}

// Tuesday
```


보통은 break와 함께 사용되지만 아래처럼 break를 사용하지 않을 수도 있습니다. 이런 경우 일치하는 case의 아래 코드는 전부 실행된다는 것에 주의하세요(break을 만날 때까지)

```c
int day = 2;

switch (day) {
  case 1:
    printf("Monday\n");
  case 2:
    printf("Tuesday\n");
  case 3:
    printf("Wednesday\n");
  case 4:
    printf("Thursday");
}

// Tuesday
// Wednesday
// Thursday
```


# default

모든 case가 일치하지 않을 때 실행할 코드가 필요하다면 default를 추가하면 됩니다

```c
int day = 4;

switch (day) {
  case 5:
    printf("Today is Friday");
    break;
  case 6:
    printf("Today is Saturday");
    break;
  case 7:
    printf("Today is Sunday");
    break;
  default:
    printf("Looking forward to the Weekend");
}

// Looking forward to the Weekend
```