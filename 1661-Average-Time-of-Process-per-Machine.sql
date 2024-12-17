-- Write your PostgreSQL query statement below
SELECT f.machine_id,ROUND(SUM(s.timestamp-f.timestamp)::NUMERIC /COUNT(DISTINCT s.process_id),3) AS processing_time
FROM Activity f 
JOIN Activity s 
ON f.machine_id = s.machine_id 
WHERE f.activity_type = 'start' AND s.activity_type = 'end'
AND f.process_id = s.process_id
GROUP BY f.machine_id
ORDER BY f.machine_id;