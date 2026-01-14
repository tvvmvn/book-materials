# 서브쿼리

서브쿼리는 메인 쿼리의 조건 부분에 포함된 쿼리입니다. 서브 쿼리로부터 추출된 결과가 메인쿼리에 적용됩니다.

다음은 주문 내역이 있는 고객정보들만 알고 싶을 때 적절한 명령문입니다.

```sql
SELECT * FROM Customers
WHERE CustomerID IN (SELECT CustomerID FROM Orders);
```