# Real-Life Example

다음은 화씨를 섭씨로 바꾸는 연산을 수행하는 함수입니다

```c
float toCelsius(float fahrenheit) {
  return (5.0 / 9.0) * (fahrenheit - 32.0);
}

int main() {
  float f_value = 98.8;

  printf("%.2f\n", toCelsius(f_value));
}
```

