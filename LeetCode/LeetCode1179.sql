-----------------------------------------------------------------------
-- 	LeetCode 1179. Reformat Department Table
--
--  Easy
--
--  SQL Schema
--  Table: Department
--  +---------------+---------+
--  | Column Name   | Type    |
--  +---------------+---------+
--  | id            | int     |
--  | revenue       | int     |
--  | month         | varchar |
--  +---------------+---------+
--  (id, month) is the primary key of this table.
--  The table has information about the revenue of each department per month.
--  The month has values in ["Jan","Feb","Mar","Apr","May","Jun","Jul","Aug",
--  "Sep","Oct","Nov","Dec"].
-- 
--  Write an SQL query to reformat the table such that there is a department 
--  id column and a revenue column for each month.
--  The query result format is in the following example:
--  Department table:
--  +------+---------+-------+
--  | id   | revenue | month |
--  +------+---------+-------+
--  | 1    | 8000    | Jan   |
--  | 2    | 9000    | Jan   |
--  | 3    | 10000   | Feb   |
--  | 1    | 7000    | Feb   |
--  | 1    | 6000    | Mar   |
--  +------+---------+-------+
--
--  Result table:
--  +------+-------------+-------------+-------------+-----+-------------+
--  | id   | Jan_Revenue | Feb_Revenue | Mar_Revenue | ... | Dec_Revenue |
--  +------+-------------+-------------+-------------+-----+-------------+
--  | 1    | 8000        | 7000        | 6000        | ... | null        |
--  | 2    | 9000        | null        | null        | ... | null        |
--  | 3    | null        | 10000       | null        | ... | null        |
--  +------+-------------+-------------+-------------+-----+-------------+
--
--  Note that the result table has 13 columns (1 for the department id + 12 
--  for the months).
--------------------------------------------------------------------
SELECT
    A.id,
    B.revenue AS Jan_Revenue,
    C.revenue AS Feb_Revenue,
    D.revenue AS Mar_Revenue,
    E.revenue AS Apr_Revenue,
    F.revenue AS May_Revenue,
    G.revenue AS Jun_Revenue,
    H.revenue AS Jul_Revenue,
    I.revenue AS Aug_Revenue,
    J.revenue AS Sep_Revenue,
    K.revenue AS Oct_Revenue,
    L.revenue AS Nov_Revenue,
    M.revenue AS Dec_Revenue
FROM
(
    SELECT
        DISTINCT
	    id
    FROM Department
)
AS A
LEFT OUTER JOIN
(
    SELECT
	    id,
        revenue
    FROM Department
    WHERE 
        Month = 'Jan'
) AS B
ON A.id = B.id
LEFT OUTER JOIN
(
    SELECT
	    id,
        revenue
    FROM Department
    WHERE 
        Month = 'Feb'
) AS C
ON A.id = C.id
LEFT OUTER JOIN
(
    SELECT
	    id,
        revenue
    FROM Department
    WHERE 
        Month = 'Mar'
) AS D
ON A.id = D.id
LEFT OUTER JOIN
(
    SELECT
	    id,
        revenue
    FROM Department
    WHERE 
        Month = 'Apr'
) AS E
ON A.id = E.id
LEFT OUTER JOIN
(
    SELECT
	    id,
        revenue
    FROM Department
    WHERE 
        Month = 'May'
) AS F
ON A.id = F.id
LEFT OUTER JOIN
(
    SELECT
	    id,
        revenue
    FROM Department
    WHERE 
        Month = 'Jun'
) AS G
ON A.id = G.id
LEFT OUTER JOIN
(
    SELECT
	    id,
        revenue
    FROM Department
    WHERE 
        Month = 'Jul'
) AS H
ON A.id = H.id
LEFT OUTER JOIN
(
    SELECT
	    id,
        revenue
    FROM Department
    WHERE 
        Month = 'Aug'
) AS I
ON A.id = I.id
LEFT OUTER JOIN
(
    SELECT
	    id,
        revenue
    FROM Department
    WHERE 
        Month = 'Sep'
) AS J
ON A.id = J.id
LEFT OUTER JOIN
(
    SELECT
	    id,
        revenue
    FROM Department
    WHERE 
        Month = 'Oct'
) AS K
ON A.id = K.id
LEFT OUTER JOIN
(
    SELECT
	    id,
        revenue
    FROM Department
    WHERE 
        Month = 'Nov'
) AS L
ON A.id = L.id
LEFT OUTER JOIN
(
    SELECT
	    id,
        revenue
    FROM Department
    WHERE 
        Month = 'Dec'
) AS M
ON A.id = M.id
;