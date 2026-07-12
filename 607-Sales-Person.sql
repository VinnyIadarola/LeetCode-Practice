# Write your MySQL query statement below

SELECT name 
FROM SalesPerson
WHERE sales_id NOT IN (
    SELECT O.sales_id
    FROM Orders AS O
    JOIN Company AS C
        ON C.com_id = O.com_id
    WHERE C.name = 'RED'
)