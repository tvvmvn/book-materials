# ORDER BY

The ORDER BY keyword is used to sort the result-set in ascending or descending order.

Syntax
```sql
SELECT column1, column2, ...
FROM table_name
ORDER BY column1, column2, ... ASC|DESC;
```

if you don't specify order, It will ordered by ascending order. 


Sort the products alphabetically by ProductName:

```sql
SELECT * FROM Products
ORDER BY ProductName;
```

Sort the products by ProductName in reverse order:

```sql
SELECT * FROM Products
ORDER BY ProductName DESC;
```


Sort the products from highest to lowest price:

```sql
SELECT * FROM Products
ORDER BY Price DESC;
```


## Several Columns and ORDER BY 

The following SQL statement selects all customers from the "Customers" table, sorted by the "Country" and the "CustomerName" column. This means that it orders by Country, but if some rows have the same Country, it orders them by CustomerName:

```sql
SELECT * FROM Customers
ORDER BY Country, CustomerName;
```

The following SQL statement selects all customers from the "Customers" table, sorted ascending by the "Country" and descending by the "CustomerName" column:

```sql
SELECT * FROM Customers
ORDER BY Country ASC, CustomerName DESC;
```
