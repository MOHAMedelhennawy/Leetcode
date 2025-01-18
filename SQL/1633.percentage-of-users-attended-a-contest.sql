# Write your MySQL query statement below
SELECT 
    R.contest_id,
    ROUND((COUNT(user_id) / (SELECT COUNT(user_id) FROM Users)) * 100, 2) AS percentage 
FROM Users AS U
JOIN Register AS R
USING(user_id)
GROUP BY R.contest_id
ORDER BY percentage DESC, contest_id;