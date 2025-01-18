# Write your MySQL query statement below
SELECT 
    S.user_id,
    ROUND(
        IFNULL(COUNT(CASE WHEN C.action = 'confirmed' THEN 1 END) / COUNT(C.user_id), 0),
        2
    ) AS confirmation_rate
FROM Confirmations AS C
RIGHT JOIN Signups AS S
USING(user_id)
GROUP BY user_id