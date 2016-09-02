### Tasks:

#### Queries

two tables:

employee
- id
- first_name - name
- last_name - surname
- salary - payment
- department_id - dept

department
- id
- name - dept name


1. print list of names and surnames of all employers with the names of their depts.
2. List of departments with count of employes in each of them
3. List of departments without employes
4. List of departments with more then two employes
5. list of  с departments with avg and max salary level each of department, ordered by avg salary


1.
```sql
SELECT first_name, last_name, department.name
FROM employee join department on employee.department_id = department.id
```


2
```sql
select department.name, count(employee.id) 
from department join employee on employee.id = department.id 
group by department.id
```

3
```sql
select department.name, count(employee.id) 
from department left join employee on employee.id = department.id 
group by department.id
having count(employee.id) = 0
```

or 
```sql
select name
from department
where id not in(
select distinct department_id
from employee
)
```
4
```sql
select department.name, count(employee.id) 
from department left join employee on employee.id = department.id 
group by department.id
having count(employee.id) > 2
```

5
```sql
select department.name, AVG(salary) as average_col, Max(salary)
from department join employee on department.id = department_id
group by department.id 
order by average_col
```

#### Query with problem

```sql
SELECT distinct name, id
from authors
where room-id in (
select id 
from rooms
where levelId = 7
)
```

What's wrong?



