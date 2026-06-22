1# Write your MySQL query statement below
2DELETE 
3FROM Person 
4WHERE id NOT IN (
5    SELECT id 
6    FROM (
7        SELECT MIN(id) as id
8        FROM Person
9        GROUP BY email
10    ) AS Derived
11)