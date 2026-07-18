# Write your MySQL query statement below
UPDATE Salary
SET sex = 
    CASE
        WHEN sex <> "m" THEN "m"
        ELSE "f"
    END;

    