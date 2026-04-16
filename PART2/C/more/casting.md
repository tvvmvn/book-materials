
# 타입 변환 (Casting)

Downcasting: 더 작은 크기의 형으로 변환하는 것

Upcasting: 더 큰 크기의 형으로 변환하는 것


```c
#include <stdio.h>

int main() {
  // upcasting(promotion)
  float version = 2; 
  // downcasting
  int height = (int) 178.5; 
  
  printf("%f\n", version);
  printf("%d\n", height);
  
}

// 2.000000
// 178
```

