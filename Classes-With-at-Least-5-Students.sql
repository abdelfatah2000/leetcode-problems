1-- Write your PostgreSQL query statement below
2select class
3from Courses
4group by class
5having count(student) >= 5;
6