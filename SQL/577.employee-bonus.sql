# Write your MySQL query statement below
SELECT E.name, sum(B.bonus) AS bonus
FROM Employee AS E
LEFT JOIN Bonus AS B
USING (empId)
WHERE bonus < 1000 OR bonus is NULL
GROUP BY (empId)