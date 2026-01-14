# UPDATE 문

UPDATE문은 레코드를 수정할 때 사용되는 명령어입니다

사용 방법
```sql
UPDATE 테이블명 SET 컬럼1 = 값1, 컬럼2 = 값2, ...
WHERE 조건;
```


다음은 CustomerID가 1인 레코드의 ContactName을 Alfred로 수정하는 명령문입니다.

```sql
UPDATE Customers SET ContactName = 'Alfred Schmidt'
WHERE CustomerID = 1;
```

조건을 제시하지 않으면 테이블의 모든 컬럼이 수정되니 주의하세요.

```sql
UPDATE Customers SET ContactName='Juan'
```