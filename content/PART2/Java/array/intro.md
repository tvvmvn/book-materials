# 배열

배열은 같은 타입의 값들을 여러 개 저장할 수 있는 자료형입니다. 예를 들어 여러가지 과일을 담을 수 있는 과일 바구니처럼요.

다음은 배열을 생성하는 방법입니다.

```
자료형[] 변수명 = {배열의 요소들}

요소들은 콤마로 구분합니다
```


아래는 정수 배열과 문자열 배열의 모습입니다.

```java
int[] myNum = {10, 20, 30, 40};
String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};
```


만약 배열을 생성할 때 어떤 요소들로 구성할지 아직 알지 못한다면 우선 빈 배열을 만들고 나중에 요소를 지정할 수도 있습니다. 이런 경우 몇 개의 요소로 구성할 것인지 개수를 지정해야 합니다. 

값을 할당할 때는 인덱스를 활용합니다. 인덱스는 배열 내에서 각 요소들의 자리라고 생각하면 됩니다. 중요한 건 0부터 시작한다는 것입니다. 그리고 뒤로 갈수록 1씩 증가합니다.


```java
String[] cars = new String[4]; 

cars[0] = "Volvo";
cars[1] = "BMW";
cars[2] = "Ford";
cars[3] = "Mazda";
```


인덱스를 활용하여 배열의 요소에 접근할 수 있습니다. 인덱스가 0부터 시작한다는 것 다시 한번 주의하세요.

```java
String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};

System.out.println(cars[0]); // Volvo
System.out.println(cars[1]); // BMW
System.out.println(cars[2]); // Ford
System.out.println(cars[3]); //  Mazda
```


배열의 요소를 바꿀 수도 있습니다.  배열에 접근할 때와 마찬가지로 인덱스를 활용하여 요소를 바꿉니다.

```java
String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};

cars[0] = "Opel";

System.out.println(cars[0]);
// Opel
```


배열에 몇 개의 요소가 있는지 확인하려면 length 속성을 활용하면 됩니다

```java
String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};

System.out.println(cars.length);
// 4
```