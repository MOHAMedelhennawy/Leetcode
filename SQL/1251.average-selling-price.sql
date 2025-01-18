# Write your MySQL query statement below

-- Wrong solution
SELECT product_id, ROUND(SUM((units * price)) / SUM(units), 2) AS average_price 
FROM Prices AS P
RIGHT JOIN UnitsSold AS US
USING(product_id)
WHERE purchase_date >= start_date AND purchase_date <= end_date
GROUP BY (product_id);



-- The right solution
# Write your MySQL query statement below
SELECT P.product_id, IFNULL(ROUND(SUM((units * price)) / SUM(units), 2), 0) AS average_price 
FROM Prices AS P
LEFT JOIN UnitsSold AS US
ON
    P.product_id = US.product_id
    AND
    US.purchase_date BETWEEN P.start_date AND P.end_date
GROUP BY (product_id);


-- There ara difference between ON And WHERE