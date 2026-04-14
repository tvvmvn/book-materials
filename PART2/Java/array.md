# 배열

배열은 같은 타입의 값들을 여러 개 저장할 수 있는 자료형입니다. 예를 들어 여러가지 과일을 담을 수 있는 과일 바구니처럼요.

다음은 배열을 생성하는 방법입니다.

```
자료형[] 변수명 = {배열의 요소들}

요소들은 콤마로 구분합니다
```


# 배열 생성하기

아래는 정수 배열과 문자열 배열의 모습입니다.

```java
int[] myNum = {10, 20, 30, 40};
String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};
```


# 배열에 접근하기

배열의 각 요소는 배열 내에서 고유한 위치(인덱스)를 가지고 있습니다. 이 인덱스를 활용하여 배열의 특정 요소에 접근할 수 있습니다. 주의해야할 점은 인덱스는 0부터 시작합니다.

```java
String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};

System.out.println(cars[0]); // Volvo
System.out.println(cars[1]); // BMW
System.out.println(cars[2]); // Ford
System.out.println(cars[3]); //  Mazda
```


# 요소 바꾸기

배열의 요소를 바꿀 수도 있습니다. 배열에 접근할 때와 마찬가지로 인덱스를 활용하여 요소를 바꿉니다.

```java
String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};

cars[0] = "Opel";

System.out.println(cars[0]);// Opel
```


# 나중에 값 할당하기

사용자 입력값을 바탕으로 배열의 요소를 정하는 경우 등 배열을 생성할 때 어떤 요소들로 구성할지 알지 못할 수 있습니다. 이럴 때 우선 빈 배열을 만들고 나중에 요소를 지정할 수도 있습니다. 이런 경우 몇 개의 요소로 구성할 것인지 개수를 지정해야 합니다. 


```java
String[] cars = new String[4]; 

//..
cars[0] = "Volvo";
cars[1] = "BMW";
cars[2] = "Ford";
cars[3] = "Mazda";
```


# 요소 개수 구하기

배열에 몇 개의 요소가 있는지 확인하려면 length 속성을 활용하면 됩니다

```java
String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};

System.out.println(cars.length);// 4
```


# 2D 배열

C 언어와 마찬가지로 두개의 인덱스를 통해 요소에 접근할 수 있습니다.

```java
public class Main {
  public static void main(String[] args) {
    //
    char[][] table = {
      {10, 20, 30},
      {40, 50, 60},
    };

    System.out.println(table[0][0]);
  }
}
```