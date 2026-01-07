# Comparison Operator

1. = Equal to
1. > Greater than
1. < Less than
1. >= Greater than or equal to
1. <= Less than or equal to
1. <> Not equal to


## = Equal operator

Select all customers from Mexico:

```sql
SELECT * FROM Customers
WHERE Country='Mexico';
```

## >= Greater than or equal to

It returns students with grade greater than 2th.

```sql
SELECT * FROM Student
WHERE grade >= 2
```