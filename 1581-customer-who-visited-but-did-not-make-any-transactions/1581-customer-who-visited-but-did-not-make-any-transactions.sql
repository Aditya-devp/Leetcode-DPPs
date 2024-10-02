# Write your MySQL query statement below
SELECT  Visits.customer_id, COUNT(Visits.visit_id) AS count_no_trans FROM
Visits LEFT JOIN Transactions on Visits.visit_id=Transactions.visit_id Where Transactions.transaction_id is NULL Group by Visits.customer_id 