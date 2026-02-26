# Various Combinations

keywords, operators, functions, 

# 

How many different prices are there in the Products table:

```sql
SELECT COUNT(DISTINCT Price)
FROM Products;
```


#
Return all products with a higher price than the average price:

```sql
SELECT * FROM Products
WHERE price > (SELECT AVG(price) FROM Products);
```