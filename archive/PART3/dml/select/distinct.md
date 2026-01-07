# DISTINCT

The SELECT DISTINCT statement is used to return only distinct (different) values.

Syntax
```sql
SELECT DISTINCT column1, column2, ...
FROM table_name;
```

Example

Select all the different countries from the "Customers" table:
```sql
SELECT DISTINCT Country FROM Customers;
```
