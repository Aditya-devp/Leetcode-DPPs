# Write your MySQL query statement below
SELECT Product.product_name, Sales.year, Sales.price FROM Sales LEFT JOIN Product on sales.product_id=Product.product_id;
