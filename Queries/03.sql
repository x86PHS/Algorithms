/*
183. Customers Who Never Order
https://leetcode.com/problems/customers-who-never-order/
*/

select name as 'Customers' from
       customers as c
       left join
       orders as o
       on c.id = o.customerid
       where o.customerid is null
