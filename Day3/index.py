# comparison and logical operators

# Comparison Operators
# Comparison operators are used to compare two values and return a Boolean value (True or False) based on the comparison.

# Equal to (==): Checks if two values are equal.

x = 5
y = 7
print(x == y)  # Output: False


# Not equal to (!=): Checks if two values are not equal.

a = 10
b = 10
print(a != b)  # Output: False


# Greater than (>) and Greater than or equal to (>=):

m = 15
n = 10
print(m > n)   # Output: True
print(m >= n)  # Output: True


# Less than (<) and Less than or equal to (<=):

p = 20
q = 25
print(p < q)   # Output: True
print(p <= q)  # Output: True


# Logical Operators

# Logical operators are used to combine multiple values and return a Boolean result.

# AND (and): Returns True if both conditions are True.

age = 25
is_student = True
print(age > 18 and is_student)  # Output: True


# OR (or): Returns True if at least one condition is True.

is_weekend = True
is_holiday = False
print(is_weekend or is_holiday)  # Output: True


# NOT (not): Returns the opposite Boolean value of the condition.

is_raining = False
print(not is_raining)  # Output: True


# Combining Comparison and Logical Operators:
# You can combine these operators to create complex conditions.

num = 25
print(num > 10 and num < 30)  # Output: True
print(num > 30 or num < 20)   # Output: True
print(not num == 20)          # Output: True