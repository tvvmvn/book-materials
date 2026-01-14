# DELETE 문

DELETE 문은 레코드를 삭제할 때 사용되는 명령문입니다

사용 방법
```sql
DELETE FROM 테이블명 WHERE 조건;
```


아래는 테이블 Customers에서 CustomerName이 Alfreds인 고객을 삭제하는 명령문입니다

```sql
DELETE FROM Customers WHERE CustomerName='Alfreds Futterkiste';
```


조건을 제시하지 않으면 테이블의 모든 레코드가 삭제되니 주의하세요.

```sql
DELETE FROM Customers;
```