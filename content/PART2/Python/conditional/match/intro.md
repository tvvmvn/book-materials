# Match

match문에 입력한 값과 일치하는 case의 코드가 실행됩니다.

```python
day = 4

match day:
  case 1:
    print("Monday")
  case 2:
    print("Tuesday")
  case 3:
    print("Wednesday")
  case 4:
    print("Thursday")
  case 5:
    print("Friday")

# Thursday
```


모든 case가 일치하지 않을 때 실행할 코드가 필요하다면 언더스코어(_) case를 추가하면 됩니다.

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