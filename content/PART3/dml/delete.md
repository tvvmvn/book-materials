# DELETE Statement

The DELETE statement is used to delete existing records in a table.

DELETE Syntax
```sql
DELETE FROM table_name WHERE condition;
```

Note: Be careful when deleting records in a table! Notice the WHERE clause in the DELETE statement. The WHERE clause specifies which record(s) should be deleted. If you omit the WHERE clause, all records in the table will be deleted!


## Delete Example

The selection from the "Customers" table will now look like this:

- CustomerID
- CustomerName
- ContactName
- Address
- City
- PostalCode
- Country

1. Delete one row

The following SQL statement deletes the customer "Alfreds Futterkiste" from the "Customers" table:

```sql
DELETE FROM Customers WHERE CustomerName='Alfreds Futterkiste';
```


2. Delete all records

```sql
DELETE FROM Customers;
```