/*
175. Combine Two Tables
https://leetcode.com/problems/combine-two-tables/
*/

select firstname, lastname, a.city, a.state from
       person as p
       left outer join
       address as a
       on p.personId = a.personId
