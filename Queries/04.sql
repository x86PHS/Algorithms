/*
196. Delete Duplicate Emails
https://leetcode.com/problems/delete-duplicate-emails/description/
*/

DELETE FROM Person
WHERE Id NOT IN (
  SELECT MIN(Id)
  FROM Person
  GROUP BY Email
);
