# Logical Operator 

1. AND
1. OR
1. NOT


## AND

The WHERE clause can contain one or many AND operators.

Syntax
```sql
SELECT column1, column2, ...
FROM table_name
WHERE condition1 AND condition2 AND condition3 ...;
```

The following SQL statement selects all fields from Customers where Country is "Brazil" AND City is "Rio de Janeiro" AND CustomerID is higher than 50:

```sql
SELECT * FROM Customers
WHERE Country = 'Brazil'
AND City = 'Rio de Janeiro' AND CustomerID > 50;
```


## OR

The WHERE clause can contain one or more OR operators.

Syntax:

```sql
SELECT column1, column2, ...
FROM table_name
WHERE condition1 OR condition2 OR condition3 ...;
```

Select all customers from Germany or Spain:

```sql
SELECT *
FROM Customers
WHERE Country = 'Germany' OR Country = 'Spain';
```


## NOT

The NOT operator is used in combination with other operators to give the opposite result, also called the negative result.

Select only the customers that are NOT from Spain:

```sql
SELECT * FROM Customers
WHERE NOT Country = 'Spain';
```

combination with many other operator like:
NOT LIKE, NOT BETWEEN, NOT IN,