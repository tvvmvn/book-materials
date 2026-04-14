# 래퍼 클래스 (Wrapper Class)

래퍼 클래스는 원시형 타입을 감싸는(Wrap) 클래스입니다.
즉 원시형 타입을 객체 타입으로 변환시키는 클래스입니다.

다음은 원시값과 그에 상응하는 래퍼 클래스입니다.

byte	Byte
short	Short
int	Integer
long	Long
float	Float
double	Double
boolean	Boolean
char	Character


```java
// Wrapper instance. random number
Integer randomNum = 1234567890;

String numString = randomNum.toString();

System.out.println("how many digits: " + numString.length());
```


# 래퍼 클래스와 지네릭(Generic)

래퍼 클래스의 진가는 객체만 취하는 지네릭(Generic)에 원시형 타입을 입력해야 할 때입니다.

```java
Consumer<Integer> method = (n) -> System.out.println(n);
```

