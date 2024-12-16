-- Write your PostgreSQL query statement below
SELECT contest_id, ROUND((COUNT(user_id)::NUMERIC/(SELECT COUNT(u.user_id) FROM Users u)) * 100, 2) AS percentage
FROM Register 
GROUP BY contest_id
ORDER BY percentage DESC, contest_id ASC;