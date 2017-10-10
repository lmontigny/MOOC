-- Q1
SELECT * FROM cd.facilities

-- Q2
SELECT name, membercost FROM cd.facilities

-- Q3
SELECT name, membercost FROM cd.facilities
WHERE membercost > 0

-- Q4
SELECT name, membercost,monthlymaintenance,facid FROM cd.facilities
WHERE membercost > 0 AND membercost < monthlymaintenance/50

-- Q5
SELECT name FROM cd.facilities
WHERE name LIKE '%Tennis%'

-- Q6
SELECT * FROM cd.facilities
WHERE facid IN (1,5)

-- Q7
SELECT memid, surname, firstname, joindate FROM cd.members
WHERE joindate >= '2012-09-01'

-- Q8
SELECT DISTINCT surname FROM cd.members
ORDER BY surname ASC
LIMIT 10

-- Q9
SELECT joindate FROM cd.members
ORDER BY joindate DESC
LIMIT 1

-- Q10
SELECT COUNT(*) FROM cd.facilities
WHERE guestcost >= 10

-- Q11
null

-- Q12
SELECT facid, SUM(slots) FROM cd.bookings
WHERE starttime BETWEEN '2012-09-01' AND '2012-09-30'
GROUP BY facid
ORDER BY SUM(slots)

-- Q13
SELECT facilities.facid,SUM(slots) FROM cd.facilities
INNER JOIN cd.bookings ON bookings.facid = facilities.facid
GROUP BY facilities.facid
ORDER BY facid

-- Q14
SELECT facilities.facid, facilities.name,bookings.starttime FROM cd.facilities
INNER JOIN cd.bookings ON bookings.facid = facilities.facid
WHERE facilities.name LIKE 'Tennis%' AND  cd.bookings.starttime BETWEEN '2012-09-21 00:00:00' AND '2012-09-21 23:59:59'

-- Q15
SELECT surname, firstname, starttime FROM cd.members
INNER JOIN cd.bookings ON bookings.memid = members.memid
WHERE surname = 'Farrell' AND firstname = 'David'
