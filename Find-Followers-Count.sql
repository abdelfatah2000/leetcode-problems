1-- Write your PostgreSQL query statement below
2select user_id, count(*) as followers_count
3from Followers
4group by user_id
5order by user_id;