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

# fall-through

switch문에서 의도적으로 break를 생략하는 경우를 fall-through라고 부릅니다. fall-through는 아래와 같이 여러 케이스를 묶는 경우가 대표적인 사용 사례입니다.

```c
#include <stdio.h>

int main() {
  int hour = 18;

  switch (hour) {
    case 9:
    case 10:
      printf("morning\n");
    case 17:
    case 18:
    case 19:
      printf("afternoon\n");
  }
}
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