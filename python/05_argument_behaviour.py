

import random #importing a python library 
print(random.random()) #anything random between 0-1

print(random.randrange(10,50))  #anynum between 10-50(integer only)
print(random.choice([2,3,4,5,6,7,8]))   #choose any random from this list

import math 

print(math.ceil(2.4))
print(math.floor(2.4))

print(math.factorial(3))
print(math.pi)



import time
print(time.gmtime())
print(time.localtime())
print(time.strftime("%d/%m/%y"))

#PASS OF ARGUMETS
'''Everything in python is object ,and can be either mutable or immutable
    primitive object like int are immutable,any attempt to change will lead to creation of new obj.
'''
num=10
def double(num): #copy of num is passed(value only passed)
    num=2*num
double(num)
print(f"Number {num}") #still number =10


#PASS BY REFERENCE:mutable object
def add_ele(alist):
    alist.append("World")

lis=["Hello"]
add_ele(lis)
print(lis) #the original lis list has been changed


def sub(a,b):
    return a-b

print(sub(8,3)) #5(positional manner of passing argument)
print(sub(3,8)) #-5(positional manner of passing argument)
# but
print(sub(b=3,a=8)) #5 (keyword,flexibility in passing the arguments)



#the default arguments should be last in the order
#the default is used when no value passed
def factorial(n,res=1):
    for i in range(1,n,1):
        res*=i
    return res
print(factorial(0))  #the default val of res=1 returned



def summ(a,b,*nums):
    res=0
    res+=a
    res+=b
    for ele in nums:
        res+=ele
    print(type(nums))#tuple
    return res
print(summ(1,2,3,4,5))#15

