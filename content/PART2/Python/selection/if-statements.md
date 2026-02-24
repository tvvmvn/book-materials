# if 문 (if statements)
 

1. if
2. elif
3. else


# if

조건이 참인 경우 코드를 실행합니다.

```py
a = 1
b = 0

if a > b:
  print("hello")
```

코드가 짧다면 다음처럼 줄여서 쓸 수도 있습니다

```python
a = 1
b = 0

if a > b: print("hello")
```


# elif

if 다음에 다른 조건들이 필요하다면 개수 제한 없이 elif를 사용할 수 있습니다.
조건이 참인 부분의 코드가 실행됩니다. 만약 여러 개가 참이라면 가장 우선되는 코드만 실행됩니다.

```py
# 점수에 따른 성적을 출력하는 코드입니다
score = 75

if score >= 90:
  print("A")
elif score >= 80:
  print("B")
elif score >= 70:
  print("C")
elif score >= 60:
  print("D")

# C
```


# else

else는 앞의 모든 조건이 거짓인 경우에 실행됩니다.

```py
a = 1
b = 0

if a > b:
  print("a가 더 큽니다")
elif a < b:
  print("b가 더 큽니다")
else:
  print("둘은 같습니다")
```

