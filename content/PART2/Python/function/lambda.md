# 람다(Lambda)

람다는 익명의 함수입니다. 람다는 주로 map, filter 등의 내장 함수와 함께 사용할 때 유용합니다.


다음은 람다의 사용법입니다
```
lambda 매개변수 : 함수의 본문

매개 변수가 여러 개일 때는 콤마로 구분합니다
```


```py
double = lambda a : a * 10

print(double(2))
# 20
```

다음은 map 함수와 함께 람다를 사용하는 경우입니다.

```py
nums = [1, 2, 3]
doubled = list(map(lambda d: d * 2, nums))

print(doubled)
# [2, 4, 6]
```
