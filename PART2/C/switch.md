# switch 문

일치하는 case의 코드를 실행합니다. 모드 케이스가 거짓인 경우 실행할 코드가 필요하다면 default를 추가할 수 있습니다.(옵션)

```c
#include <stdio.h>

int main() {
  int level = 2;

  switch (level) {
    case 1:
      printf("Lv.1\n");
      break;
    case 2:
      printf("Lv.2\n");
      break;
    case 3:
      printf("Lv.3\n");
      break;
    default: //option
      printf("Unknown level\n");
  }
}

//Lv.2
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

