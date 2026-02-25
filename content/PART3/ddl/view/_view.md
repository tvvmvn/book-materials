# 뷰(View) 생성하기

뷰는 SQL문의 조회 결과를 기반으로 생성되는 가상의 테이블입니다.

다음은 뷰를 생성하는 방법입니다.
```sql
CREATE VIEW view_name AS
SELECT column1, column2, ... FROM table_name 
WHERE condition;
```

예시)
다음은 테이블 Customers로부터 Brazil Customers 뷰를 생성하는 명령문입니다.
```sql
CREATE VIEW [Brazil Customers] 
AS SELECT * FROM Customers 
WHERE Country = 'Brazil';
```