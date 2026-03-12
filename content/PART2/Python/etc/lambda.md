# 람다(Lambda)

람다는 익명의 함수입니다. 짧고 즉각적인 함수가 필요할 때 유용합니다.

다음은 람다의 사용법입니다
```
lambda 매개변수 : 본문

매개 변수가 여러 개일 때는 콤마로 구분합니다
람다는 본문을 반환합니다.
```


```py
double = lambda a : a * 10

print(double(2))
# 20
```


# 람다 활용하기

람다는 map, filter 등의 함수와 함께 사용할 때 유용합니다.

```py
numbers = [1, 2, 3, 4]

# map object
doubled = map(lambda x: x * 10, numbers)

print(list(doubled))
# [10, 20, 30, 40]
```
