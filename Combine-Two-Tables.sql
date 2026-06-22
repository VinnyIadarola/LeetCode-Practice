1# Write your MySQL query statement below
2SELECT P.firstName, P.lastName, A.city, A.state
3FROM Person AS P
4LEFT JOIN Address A
5    ON P.personId = A.personId