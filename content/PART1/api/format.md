# API 데이터 포멧

API 통신에서 데이터를 교환하기 위해 사용되는 데이터의 형식(Format)을 의미합니다.

- JSON 
- XML 


# XML (eXtensive Markup Language)

XML은 데이터 교환, 설정 파일 등 여러 용도로 사용되는 언어입니다. SOAP API에서 주로 쓰이는 데이터 교환 포멧입니다.

다음은 XML의 실제 모습입니다. 각 데이터는 태그(Tag) 안에 작성됩니다.

```xml
<name>john</name>
<age>30</age>
<gender>male</gender>
```


# JSON
 
자바 스크립트 객체 표기법(JavaScript Object Notation)의 약자로 자바스크립트에서 객체를 표기하는 방법을 사용하여 데이터를 표현합니다. XML에 비해 좋은 가독성과 가벼운 크기로 많은 부분에서 XML을 대체했습니다. REST API에서 주로 사용되는 데이터 포멧입니다.

다음은 JSON의 실제 모습입니다. 각 필드에서 데이터의 이름을 키(Key), 실제 데이터를 값(Value)이라고 부릅니다.


```json
{ 
  "name": "john", 
  "age": 30,
  "gender": "male"
}
```