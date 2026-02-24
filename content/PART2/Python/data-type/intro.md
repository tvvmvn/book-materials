# 자료형

파이썬에서 모든 자료형은 객체입니다.

- 숫자
- Boolean
- Sequence
- Set
- Dictionary
- NoneType


# 숫자 타입

세가지 종류의 숫자 타입이 있습니다

- 정수형(Integer)
- 실수형(Real number)
- 복소수형(Complex number)


정수형는 소수점이 없는 수입니다. 
```python
a = 5    
c = -2 
b = 0    
```


실수형은 소수점을 포함한 수입니다.
```python
y = 2.8  
y = -1.5
```


복소수가 있다는 것만 일단 알아두세요. 뒤에 j를 붙여 나타냅니다.
```python
z = 1j   
```


# Boolean

불리언 자료형은 참 또는 거짓(True or False) 중 하나의 값을 가지는 자료형입니다. 다양한 연산의 결과가 불리언 타입으로 값을 반환합니다.

```python
print(1 > 0) # True
print(1 < 0) # False
```


# 시퀀스 (Sequences)

시퀀스는 일련의 값들이 순서대로 저장되어있어 Indexing, Slicing 가능합니다.
또한 연결(+), 반복(*) 연산자 사용이 가능합니다.

- List (가변)
- String (불변)
- Tuple (불변)
- Range (불변)

가변은 데이터의 삽입, 삭제, 수정이 가능합니다.


# Set

수학의 집합(Set)을 구현한 자료형입니다. 강력한 집합 연산을 기능을 제공합니다.


# Dictionary

각 데이터가 키-값 쌍(Key-Value Pair)으로 이루어진 자료형입니다. 검색 속도가 매우 빠른 것이 특징입니다.


# NoneType

None은 값이 없음을 나타내고 싶을 때 사용하는 특별한 상수입니다. None의 자료형은 NoneType이며 NoneType의 유일한 인스턴스가 None입니다.


```python
x = None

print(x) # None
print(type(x)) # <class 'NoneType'>
```