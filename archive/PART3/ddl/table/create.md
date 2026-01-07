# CREATE TABLE

The CREATE TABLE statement is used to create a new table in a database.

Syntax
```sql
CREATE TABLE table_name (
    column1 datatype,
    column2 datatype,
    column3 datatype,
   ....
);
```


The following example creates a table called "Persons" that contains five columns: PersonID, LastName, FirstName, Address, and City:

```sql
CREATE TABLE Persons (
    PersonID int,
    LastName varchar(255),
    FirstName varchar(255),
    Address varchar(255),
    City varchar(255)
);
```