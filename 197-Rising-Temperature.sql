# Write your MySQL query statement below
select S.id from Weather as F, Weather as S where S.temperature > F.temperature and DATEDIFF(S.recordDate, F.recordDate) = 1;