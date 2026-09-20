select name
from customers
where id NOT in (Select customer_id from orders)