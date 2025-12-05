1-- Write your PostgreSQL query statement below
2select c.customer_id
3from Customer c
4group by c.customer_id
5having count(distinct product_key) = (select count(*) from Product);
6