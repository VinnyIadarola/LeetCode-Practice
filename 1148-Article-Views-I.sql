# Write your MySQL query statement below
SELECT v1.author_id AS id
FROM Views AS v1
JOIN Views as v2
    on v1.author_id = v2.viewer_id
    AND v1.article_id = v2.article_id 

GROUP BY v1.author_id
ORDER BY v1.author_id ASC