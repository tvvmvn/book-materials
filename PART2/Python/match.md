# Match

match문에 입력한 값과 일치하는 case의 코드가 실행됩니다.

선택 사항으로 모든 case가 일치하지 않을 때 실행할 코드가 필요한 경우 기본값 케이스(case _)를 추가하면 됩니다.

```python
day = 4

match day:
  case 6:
    print("Today is Saturday")
  case 7:
    print("Today is Sunday")
  case _:
    print("Looking forward to the Weekend")

# Looking forward to the Weekend
```


# case 묶기

match문 에서 막대 연산자(|)는 '또는(or)' 역할을 수행합니다.

```py
day = 4

match day:
  case 1 | 2 | 3 | 4 | 5:
    print("Today is a weekday")
  case 6 | 7:
    print("I love weekends!")
# Today is a weekday
```