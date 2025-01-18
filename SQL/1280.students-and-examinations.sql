# Write your MySQL query statement below
SELECT 
    Stu.student_id,
    Stu.student_name,
    Sub.subject_name,
    COUNT(Ex.subject_name) AS attended_exams
FROM 
    Students AS Stu
CROSS JOIN 
    Subjects AS Sub
LEFT JOIN 
    Examinations AS Ex
ON 
    Stu.student_id = Ex.student_id AND Sub.subject_name = Ex.subject_name
GROUP BY
    Stu.student_id, Stu.student_name, Sub.subject_name
ORDER BY 
    Stu.student_id, Sub.subject_name;
