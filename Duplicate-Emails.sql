1# Write your MySQL query statement below
2SELECT email AS Email
3FROM Person
4GROUP BY email
5Having Count(email) > 1
6 