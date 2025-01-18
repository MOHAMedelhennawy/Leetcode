# Write your MySQL query statement below
SELECT 
    P.project_id, IFNULL(ROUND(SUM(E.experience_years) / COUNT(E.employee_id), 2), 0) AS average_years
FROM Project AS P
INNER JOIN Employee AS E
USING(employee_id)
GROUP BY (project_id)