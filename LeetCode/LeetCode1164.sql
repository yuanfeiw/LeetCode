-----------------------------------------------------------------------
-- 	LeetCode 1164. Product Price at a Given Date
--
--  Medium
--
--  SQL Schema
--
--  Table: Products
--  +---------------+---------+
--  | Column Name   | Type    |
--  +---------------+---------+
--  | product_id    | int     |
--  | new_price     | int     |
--  | change_date   | date    |
--  +---------------+---------+
--  (product_id, change_date) is the primary key of this table.
--  Each row of this table indicates that the price of some product 
--  was changed to a new price at some date.
-- 
--  Write an SQL query to find the prices of all products on 
--  2019-08-16. Assume the price of all products before any change is 10.
--  The query result format is in the following example:
--  Products table:
--  +------------+-----------+-------------+
--  | product_id | new_price | change_date |
--  +------------+-----------+-------------+
--  | 1          | 20        | 2019-08-14  |
--  | 2          | 50        | 2019-08-14  |
--  | 1          | 30        | 2019-08-15  |
--  | 1          | 35        | 2019-08-16  |
--  | 2          | 65        | 2019-08-17  |
--  | 3          | 20        | 2019-08-18  |
--  +------------+-----------+-------------+
--
--  Result table:
--  +------------+-------+
--  | product_id | price |
--  +------------+-------+
--  | 2          | 50    |
--  | 1          | 35    |
--  | 3          | 10    |
--  +------------+-------+
--------------------------------------------------------------------
SELECT 
    A.product_id,
    CASE WHEN B.new_price IS NULL THEN 10 ELSE B.new_price END AS price
FROM 
(
    SELECT
        DISTINCT 
        product_id
    FROM 
        Products 
) AS A
LEFT OUTER JOIN
(
    SELECT
        product_id,
        new_price,
        ROW_NUMBER () OVER (PARTITION BY product_id ORDER BY change_date DESC) AS row_id
    FROM
        Products
    WHERE change_date <= '2019-08-16'
) AS B
ON 
    A.product_id = B.product_id
WHERE
   B.row_id IS NULL OR B.row_id = 1
;
 