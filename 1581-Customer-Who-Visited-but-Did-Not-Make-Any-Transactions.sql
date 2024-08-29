# Write your MySQL query statement below
select customer_id, count(customer_id) as count_no_trans from visits natural left outer join transactions where transaction_id is NULL group by customer_id;

