-- Write your query below
select employee_id , 
CASE
When employee_id % 2 = 1 AND name not like 'M%' then salary 
else 0 
END as bonus
from employees
order by employee_id