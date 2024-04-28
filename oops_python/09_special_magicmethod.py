
#SPECIAL/MAGIC/DUNDER METHODs

'''
    we don't call by name as we do in other metods
    get called on given condition
    e.g __add__,__sub__,__mul__ etc.


    constructor: is also a magic method
        -get called itself whenever object is formed or class is instantiated
        -code within constructor is executed on class Instantiation or obj formation.
'''

'''The self itself is an object
    we write self in every method bcz inclass too one method can't call other.
    Only object can access data and method of a class
'''
import math
class Fraction:
    def __init__(self,numberator,denomirator):
        self.num=numberator
        self.deno=denomirator
    
    def __str__(self) -> str:
        return str(self.num)+'/'+str(self.deno)
    
    def __add__(f1,f2):

        lcm=math.lcm(f1.deno,f2.deno)
        nm=int(((lcm/f1.deno)*f1.num)+((lcm/f2.deno)*f2.num))

        return Fraction(nm,lcm)
    
    def __sub__(self,f2):

        lcm=math.lcm(self.deno,f2.deno)
        nm=int(((lcm/self.deno)*self.num)-((lcm/f2.deno)*f2.num))

        return Fraction(nm,lcm)


f1=Fraction(2,3)
f2=Fraction(5,3)

print(f1) #2/3
print(f1+f2) #7/3
print(f2-f1) #7/3

