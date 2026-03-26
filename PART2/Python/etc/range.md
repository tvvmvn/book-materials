# Range

- Range 소개
- Range 생성하기
- 요소에 접근하기
- 요소 자르기

Range는 수정할 수 없는 숫자의 모음들로 구성된 자료 구조입니다.
주로 기본 반복문을 생성할 때 사용됩니다.


# Range 

생성자로 Range를 생성합니다. 문법은 다음과 같습니다

```
range(시작, 끝, 간격)

- 시작: 기본값은 0입니다
- 끝(필수): 
- 간격: 기본값은 1입니다

시작부터 끝 - 1 까지 정해진 간격으로 숫자 모음을 생성합니다.
모든 인수값은 정수여야 합니다
```

```py
# Create a range of numbers from 0 to 9:
x = range(10)

print(x)#range(0, 10)
print(type(x)) # <class 'range'>
```


# 생성하기

다음은 Range를 만드는 기본 과정입니다.
range는 출력할 때 내부의 원소를 볼 수 없습니다.

```python
print(range(5))
print(range(1, 5))
print(range(1, 5, 2))

# range(0, 5)
# range(1, 5)
# range(1, 5, 2)
```


# 요소 개수 구하기

Range에서 요소의 개수를 길이(length)라고 부릅니다. len() 함수로 요소의 개수를 구할 수 있습니다

```python
r = range(10)

print(len(r))
# 10
```


# 사용 사례

기본 반복문을 만들 때 사용됩니다.

```py
for i in range(5):
  print(i, 'times exeucted')
```


# 리스트로 변환하기

Range 타입을 다루기 좋은 리스트로 형 변환을 하여 사용하기도 합니다.
(대표적으로 Range 타입의 변수는 직접 출력시 원소 확인이 불가능합니다) 
방법은 간답합니다. list 생성자에 range를 전달하면 됩니다. 

```python
print(list(range(5)))
# [0, 1, 2, 3, 4]
```
