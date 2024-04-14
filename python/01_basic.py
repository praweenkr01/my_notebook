# single line comments
'''it's 
    multiple line comments
'''

# Python:Dynamically typed 
'''
    depending on how the value is used ,
    the data type of value is dynamically and automatically assigned.
'''

# Data Type:
'''
    Numeric: int ,long ,float ,complex
    Alphanumeric:string
    Boolean: boolean
'''

print(type(6)) #this will give the data type o/p:<class 'int'>

# reserved keyword(built -in -keyword):can't be used as variable

# VARIABLE:
'''
name:        identifies the value
data type:   determine memory requirment and operation that can be performned
address:     specification where it is stored in memory

value:       the data it holds
lifetime:    how long it can be stored in memory
scope:       where in program it can be used

'''

num1=3 #name:num1,value :3
print(id(num1)) #unique id


# operator:
''' helps to perform operation.

Arithematic Operatior: +,-,%,//,/,*

Relational Operator(boolean): ==,<=,>=,!=

Assignment operator: =,+=,-=,*=,/=,//=

Logical operator(boolean): and ,or, not

Bitwise operator: &,|,~,^,<<,>>
'''

print(5|2)      #bitwise or o/p:7
print(5==3)     #relational o/p:False

print(not 4)    #logical o/p:False
print(~4)       #bitwise o/p:-5  , ~n=-(n+1)
# ~a =1's compliment of a,hence the sign bit invert
#-ve number is represented in 2's compliment


# Common False value in Python:"",'',0,None,False


#BODMAS
'''
Brackets, Order(power,roots),[modulo,division,multiplication](left to right),addition,subtraction
'''
print(3*2+2)    #O/P:8


#implicit conversion
num=1+1.0   #integer+float=float
print(num,end=":")  #2.0
print(type(num))    #float


#explicit conversion
num=1+ int(1.2)
print(num,end=":")  #o/p:2
print(type(num))    #o/p:int

