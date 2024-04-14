

import random #importing a python library 
print(random.random()) #anything random between 0-1

print(random.randrange(10,50))  #anynum between 10-50(integer only)
print(random.choice([2,3,4,5,6,7,8]))   #choose any random from this list

import math 

print(math.ceil(2.4))
print(math.floor(2.4))

print(math.factorial(3))
print(math.pi)


#PASS OF ARGUMETS

#this swap funcn doesn't work as passed value is just the copy
def swap( a, b):
    a,b=b,a
a,b=3,6
print(f"Before swap a:{a},b:{b}")
swap(a,b)
print(f"Before swap a:{a},b:{b}")


#PASS BY REFERENCE
def add_ele(alist):
    alist.append("World")

lis=["Hello"]
add_ele(lis)
print(lis) #the original lis list has been changed


# global variable
'''
'''
