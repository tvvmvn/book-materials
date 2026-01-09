# 문자열과 함수

문자열과 함께 사용할 수 있는 유용한 함수들이 있습니다. 다음의 string 헤더에 포함된 몇가지 문자열 함수들입니다.

- 길이 구하기
- Concat
- Compare
- Copy


# 문자의 개수 구하기

다음은 문자열을 구성하는 문자의 개수를 구하는 방법입니다. strlen 함수에 개수를 구할 변수를 전달합니다. 

```c
char greeting[] = "hello";

printf("%zu", strlen(greeting)); //5
```

참고로 \0(널 문자)는 다루지 않습니다.


# 문자열 연결하기

strcat 함수로 두 문자열을 합칠 수 있습니다. strcat 함수는 합칠 두 개의 변수를 입력받으며 첫번째 인자에 해당하는 변수에 결과를 저장합니다. 여기서 주의할 점은 결과가 저장될 변수의 크기가 충분히 커야 한다는 점입니다. 변수를 선언할 때 미리 고려해야 되겠죠?


```c
char str1[20] = "Hello ";
char str2[] = "World!";

strcat(str1, str2);

printf("%s", str1); // Hello World!
```


# 문자열 비교하기

strcmp 함수를 활용해 두 문자가 일치하는지 여부를 검사할 수 있습니다. 비교할 두 문자를 함수에 전달합니다. 함수는 두 문자가 일치하면 0을 반환하고 일치하지 않으면 0이 아닌 랜덤 숫자를 반환합니다.


```c
char str1[] = "Hello";
char str2[] = "Hello";
char str3[] = "Hi";

printf("%d\n", strcmp(str1, str2));  // 0
printf("%d\n", strcmp(str1, str3));  // -4
```


# 문자열 복사하기

strcpy 함수를 활용해 문자열을 복사할 수 있습니다. 함수의 두번째 인자를 복사해 첫번째 인자에 저장합니다


```c
char str1[20] = "Hello";
char str2[20];

strcpy(str2, str1);

printf("%s", str2); // Hello
```