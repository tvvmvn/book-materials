# Sub query

With a subquery you can return all records from the main query that are present in the result of the subquery.

Return all customers that have an order in the Orders table:

```sql
SELECT * FROM Customers
WHERE CustomerID IN (SELECT CustomerID FROM Orders);
```