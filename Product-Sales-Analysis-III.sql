1SELECT s.product_id,
2       s.year AS first_year,
3       s.quantity,
4       s.price
5FROM Sales s
6JOIN (
7    SELECT product_id, MIN(year) AS first_year
8    FROM Sales
9    GROUP BY product_id
10) t
11ON s.product_id = t.product_id
12AND s.year = t.first_year;