-----------------------------------------------------------------------
-- 	LeetCode 180. Consecutive Numbers
--
-- 	Medium
--
-- 	SQL Schema
--
--  Write a SQL query to find all numbers that appear at least three times 
--  consecutively.
--
--  +----+-----+
--  | Id | Num |
--- +----+-----+
--- | 1  |  1  |
--- | 2  |  1  |
--  | 3  |  1  |
--  | 4  |  2  |
--  | 5  |  1  |
--  | 6  |  2  |
--  | 7  |  2  |
--  +----+-----+
--  For example, given the above Logs table, 1 is the only number that 
--  appears consecutively for at least three times.
--
--  +-----------------+
--  | ConsecutiveNums |
--  +-----------------+
--  | 1               |
--  +-----------------+
--------------------------------------------------------------------
SELECT 
    DISTINCT
	A.Num AS ConsecutiveNums
FROM 	
	Logs AS A
INNER JOIN
    Logs AS B
ON 
   A.Id + 1 = B.Id AND A.Num = B.Num
INNER JOIN
    Logs AS C
ON 
   A.Id + 2 = C.Id AND A.Num = C.Num
;
