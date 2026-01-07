# SQL Aggregate Functions

An aggregate function is a function that performs a calculation on a set of values, and returns a single value.

Aggregate functions are often used with the `GROUP BY` clause of the SELECT statement. The GROUP BY clause splits the result-set into groups of values and the aggregate function can be used to return a single value for each group.

The most commonly used SQL aggregate functions are:

- MIN() 
- MAX() 
- COUNT()
- SUM()
- AVG()

Aggregate functions ignore null values (except for COUNT(*)).


## MIN() and MAX()

The MIN() function returns the smallest value of the selected column.

The MAX() function returns the largest value of the selected column.

```sql
SELECT MIN(column_name) FROM table_name ...
SELECT MAX(column_name) FROM table_name ...
```

Find the lowest price in the Price column:

```sql
SELECT MIN(Price) FROM Products;
```

Find the highest price in the Price column:

```sql
SELECT MAX(Price) FROM Products;
```


## COUNT()

The COUNT() function returns the number of rows that matches a specified criterion.

```sql
SELECT COUNT(column_name)
FROM table_name
WHERE condition;
```

Find the total number of rows in the Products table:

```sql
SELECT COUNT(*)
FROM Products;
```

You can specify a column name instead of the asterix symbol (*).
If you specify a column name instead of (*), NULL values will not be counted.


Find the number of products where the ProductName is not null:
```sql
SELECT COUNT(ProductName)
FROM Products;
```


## SUM()

The SUM() function returns the total sum of a numeric column.

```sql
SELECT SUM(column_name) FROM table_name ...
```

Return the sum of all Quantity fields in the OrderDetails table:

```sql
SELECT SUM(Quantity)
FROM OrderDetails;
```


## AVG()

The AVG() function returns the average value of a numeric column.

```sql
SELECT AVG(column_name) FROM table_name ...
```

Find the average price of all products:

```sql
SELECT AVG(Price)
FROM Products;
```