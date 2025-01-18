# Write your MySQL query statement below
SELECT W1.id
FROM Weather AS W1
INNER JOIN Weather AS W2
ON W1.recordDate = DATE_ADD(W2.recordDate, INTERVAL 1 DAY)
AND W1.temperature > W2.temperature 
