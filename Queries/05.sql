/*
577. Employee Bonus
https://leetcode.com/problems/employee-bonus/description/
*/

select name, bonus from 
       employee as e
       left outer join
       bonus as b
       on e.empId = b.empid
       where bonus < 1000 or bonus is null
