# Set

Set은 여러 개의 요소를 저장할 수 있는 자료형입니다. 파이썬 프로그래밍에서 수학의 집합과 같은 역할을 합니다. 

Set에는 원소의 순서가 존재하지 않으므로 출력할 때마다 결과가 다르게 보입니다.


# Set 생성하기

중괄호 안에 요소들을 작성하고 콤마로 구분합니다.
```python
fruits = {"apple", "banana", "cherry"}
```

Set은 중복을 허용하지 않는다는 사실에 주의하세요.
```python
# 하나의 apple은 제거됩니다
fruits = {"apple", "banana", "cherry", "apple"}

print(fruits)
```

set 생성자로 set을 생성할 수도 있습니다. set 생성자에 요소들을 소괄호로 묶어 전달하면 됩니다.
```python
fruits = set(("apple", "banana", "cherry")) 
```


# 길이 구하기

Set에서 원소의 개수를 length라고 합니다. len() 메서드로 Set의 길이를 구할 수 있습니다.

```python
fruits = {"apple", "banana", "cherry"}

print(len(fruits))
# 3
```


# Set과 멤버십 연산자

```python
fruits = {"apple", "banana", "cherry"}

# banana가 fruits에 있는지 확인합니다. 참을 반환합니다
print("banana" in fruits)
# banana가 fruits에 없는지 확인합니다. 거짓을 반환합니다
print("banana" not in fruits)
```
