# Write your MySQL query statement below
SELECT EU.unique_id, E.name
FROM EmployeeUNI AS EU
RIGHT JOIN Employees AS E
ON EU.id = E.id;
