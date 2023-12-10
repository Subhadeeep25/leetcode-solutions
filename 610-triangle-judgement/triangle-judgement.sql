# Write your MySQL query statement below
select *,
if (abs(x-y)<z and z<x+y, 'Yes', 'No') as triangle
from Triangle