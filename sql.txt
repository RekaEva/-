SELECT DISTINCT users.id, users.name FROM users
JOIN orders ON users.id = orders.user_id
WHERE orders.user_id IS NOT NULL
ORDER by name