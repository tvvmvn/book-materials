# Create view

In SQL, a view is a virtual table based on the result-set of an SQL statement.

```sql
CREATE VIEW view_name AS
SELECT column1, column2, ... FROM table_name WHERE condition;
```


The following SQL creates a view that shows all customers from Brazil:

```sql
CREATE VIEW [Brazil Customers] AS
SELECT CustomerName, ContactName FROM Customers WHERE Country = 'Brazil';
```