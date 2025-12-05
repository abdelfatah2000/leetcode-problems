1-- Write your PostgreSQL query statement below
2select activity_date AS day, count(distinct user_id) as active_users
3from Activity
4where activity_date between '2019-06-28' and '2019-07-27'
5group by activity_date;