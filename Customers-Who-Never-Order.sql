1# Write your MySQL query statement below
2-- Select name AS Customers
3Select name AS Customers
4From Customers AS C
5LEFT JOIN Orders AS O
6    ON C.id = O.customerId
7Where O.customerId is null
8
9