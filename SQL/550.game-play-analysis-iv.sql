# Write your MySQL query statement below
SELECT
    ROUND(
        count(*) / (SELECT COUNT(DISTINCT player_id) FROM Activity)
    , 2) AS fraction
FROM Activity
WHERE (player_id, event_date) in (
	SELECT player_id, DATE_ADD(MIN(event_date), INTERVAL 1 DAY)
    FROM Activity
    GROUP BY player_id
);

-- Better solution using join:

SELECT 
    ROUND(
        COUNT(DISTINCT A1.player_id) / (SELECT COUNT(DISTINCT player_id) FROM Activity),
        2
    ) AS fraction
FROM Activity AS A1
JOIN (
	SELECT 
		player_id,
		DATE_ADD(MIN(event_date), INTERVAL 1 Day) AS next_day
    FROM Activity
    GROUP BY player_id
) AS first_login
ON 
	A1.player_id = first_login.player_id
	And
    A1.event_date = first_login.next_day