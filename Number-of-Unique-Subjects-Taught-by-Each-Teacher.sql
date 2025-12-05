1-- Write your PostgreSQL query statement below
2select teacher_id, count(distinct subject_id) as cnt 
3from Teacher
4group by teacher_id;
5