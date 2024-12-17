-- Write your PostgreSQL query statement below
SELECT name
FROM (
    SELECT f.id, f.name, COUNT(*)
    FROM employee f
    JOIN employee s
    ON f.id = s.managerId
    GROUP BY f.name, f.id
    HAVING COUNT(*) >= 5 
);

