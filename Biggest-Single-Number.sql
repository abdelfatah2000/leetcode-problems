1-- Write your PostgreSQL query statement below
2select Max(num) as num
3from (select num from MyNumbers group by num having count(num) = 1)
4