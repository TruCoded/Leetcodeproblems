# Write your MySQL query statement below
select Person.firstName, Person.lastName, A.city ,A.state 
FROM Person
LEFT JOIN Address A
ON Person.personId = A.personId;