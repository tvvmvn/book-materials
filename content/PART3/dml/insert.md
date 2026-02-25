# INSERT INTO

INSERT INTO는 테이블에 레코드를 추가하는 명령어입니다. 

```sql
INSERT INTO table_name (column1, column2, column3, ...)
VALUES (value1, value2, value3, ...);
```
만약 모든 컬럼에 값을 지정한다면 다음과 같이 컬럼명을 명시하지 않아도 됩니다.


예제)
다음의 컬럼들로 구성된 테이블 <Customers>가 있을 때

- CustomerName
- ContactName
- Address
- City
- PostalCode
- Country

다음은 3개의 컬럼 CustromerName, City, Country의 값과 함께 새 레코드를 추가하는 명령문입니다. 지정되지 않은 컬럼들의 값은 NULL이 적용됩니다. 다만 기존에 지정한 기본값이 있다면 기본값이 적용 됩니다.

```sql
INSERT INTO Customers (CustomerName, City, Country) VALUES ('Cardinal', 'Stavanger', 'Norway');
```

다음은 모든 컬럼 값을 지정하고 삽입하는 명령문입니다.
```sql
INSERT INTO Customers VALUES ('Cardinal', 'Tom B. Erichsen', 'Skagen 21', 'Stavanger', '4006', 'Norway');
```
