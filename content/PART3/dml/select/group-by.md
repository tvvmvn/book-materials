# GROUP BY

The GROUP BY statement groups rows that have the same values into summary rows, like "find the number of customers in each country".

The GROUP BY statement is often used with `aggregate functions` to group the result-set by one or more columns.

```sql
GROUP BY column_name(s)
```

The following SQL statement lists the number of customers in each country:

```sql
SELECT COUNT(CustomerID), Country FROM Customers
GROUP BY Country;
```


## HAVING Clause

You should use HAVING Clause to filter groups.
WHERE filters rows while HAVING filters groups.

```sql
GROUP BY column_name(s) HAVING condition
```

The following SQL statement lists the number of customers in each country. Only include countries with more than 5 customers:

Example:
```sql
SELECT COUNT(CustomerID), Country FROM Customers
GROUP BY Country HAVING COUNT(CustomerID) > 5;
```