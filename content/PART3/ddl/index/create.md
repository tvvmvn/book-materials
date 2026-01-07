# Create index

The CREATE INDEX statement is used to create indexes in tables.


```sql
CREATE INDEX index_name ON table_name (column1, column2, ...);
```


The SQL statement below creates an index named "idx_lastname" on the "LastName" column in the "Persons" table:

```sql
CREATE INDEX idx_lastname ON Persons (LastName);
```

