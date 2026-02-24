# 함수

함수는 주어진 작업을 수행 후 결과를 반환하는 일꾼입니다.
프로그래밍에서 작업의 단위로 유용하게 사용됩니다.
함수는 횟수에 관계없이 재사용할 수 있어 작업의 효율성이 증가합니다.


다음은 함수를 정의하는 문법입니다
```
def 함수이름():
  실행할 코드
```

다음은 함수를 정의하고 호출하는 코드입니다

```py
def f():
  print("hello")

# 함수 호출
f()
```


# 매개변수와 인자

함수의 가장 큰 장점 중에 하나가 바로 인자입니다. 함수는 입력값을 받을 수 있으며 입력값에 따라 다른 작업을 수행할 수 있습니다. 

함수 내에서 입력값을 저장한 변수를 매개변수(Parameters)라고 하고 함수를 호출할 때 실제 입력되는 값을 인자 (Arguments)라고 합니다.


```py
def add(a, b): # 매개변수 a, b
  print(a + b)

# 인자는 호출 시마다 다를 수 있습니다
add(1, 2) 
add(2, 3)
add(3, 4)
```


# 인자 기본값 설정하기

인자의 기본값을 설정할 수 있습니다.

```py
def my_function(name = "friend"):
  print("Hello", name)

my_function("Emil")
my_function("Tobias")
my_function()
my_function("Linus")
```


# 키워드 인자

인자의 순서가 중요하지 않습니다.

```py
def my_function(animal, name):
  print("I have a", animal)
  print("My", animal + "'s name is", name)

my_function(name = "Buddy", animal = "dog")
```


# return 

함수는 연산을 수행하고 그 결과를 반환할 수 있습니다. 예약어 return으로 반환하고자 하는 값을 반환합니다. return이 한번 수행되면 그 아래 코드는 실행되지 않는다는 것에 주의하세요.

```python
def greeting():
  return "hello"

# 반환값을 변수 message에 저장합니다
message = greeting()

print(message) # hello
```
