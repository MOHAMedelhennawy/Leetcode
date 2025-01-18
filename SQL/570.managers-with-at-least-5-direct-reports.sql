# Write your MySQL query statement below
SELECT E.name
FROM Employee AS E
INNER JOIN Employee AS M
ON E.id = M.managerId
GROUP BY M.managerId
HAVING COUNT(M.managerId) >= 5;
