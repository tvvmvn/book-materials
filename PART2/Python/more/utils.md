# 내장 함수

파이썬에는 다양한 내장 함수가 있습니다. 자주 쓰이는 것들 위주로 몇가지 알아봅시다.

- map
- filter
- sum
- enumerate


# map()

여러 값을 가진 객체에서 각 요소에 반복적인 작업을 수행 후 Map타입 객체로 반환합니다.

다음은 map의 사용 방법입니다
```
map(함수, 객체)

함수: 객체의 각 요소에 수행할 연산을 정의합니다
객체: 반복 작업을 적용시킬 객체입니다
```

다음은 리스트의 각 숫자를 두배로 늘리는 방법입니다. Map 객체는 출력할 때 원소를 볼 수 없으므로 리스트로 변환 후 출력하고 있습니다.

```py
nums = [1, 2, 3]

def double(n):
  return n * 2

doubled = list(map(double, nums))

print(doubled)
# [2, 4, 5]
```


# filter()

여러 값을 가진 객체에서 필터링 작업을 수행하고 Filter 타입의 객체로 반환합니다

다음은 filter의 사용 방법입니다
```
filter(함수, 객체)

함수: 필터링을 수행하는 함수입니다. 필터 조건이 여기에 작성됩니다
객체: 필터링이 적용될 객체입니다
```

다음은 리스트에서 성인만 골라내는 방법입니다. Filter 객체는 출력할 때 원소를 볼 수 없으므로 리스트로 변환 후 출력하고 있습니다

```py
ages = [12, 18, 24, 32]

def isAdult(x):
  if x >= 18:
    return True
  else:
    return False

adults = list(filter(isAdult, ages))

print(adults)
# [18, 24, 32]
```


# sum

```py
nums = [10, 20, 30]

r = sum(nums)

print(r) 

# 
# 60
```


# enumerate

시퀀스를 입력받아 인덱스-값 쌍으로 구성된 튜플 시퀀스를 만듭니다.


```py
nums = [10, 20, 30]

for t in enumerate(nums):
  print(t)
  
# 
# (0, 10)
# (1, 20)
# (2, 30)
```