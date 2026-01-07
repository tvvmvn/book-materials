# SELECT

1. Basic
1. ORDER BY
1. Sub Query
1. JOIN
1. Group
1. Set Operator


The SELECT statement is used to select data from a database.

Syntax
```sql
SELECT column1, column2, ...
FROM table_name;
```

Return data from the Customers table:
```sql
SELECT CustomerName, City FROM Customers;
```

If you want to return all columns, without specifying every column name, you can use the SELECT * syntax:

```sql
Return all the columns from the Customers table:

SELECT * FROM Customers;
```

