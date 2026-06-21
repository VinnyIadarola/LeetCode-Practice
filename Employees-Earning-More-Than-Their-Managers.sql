1# Write your MySQL query statement below
2SELECT e.name AS Employee
3FROM Employee AS e
4JOIN Employee AS m
5    ON e.managerId = m.id
6WHERE e.salary > m.salary;