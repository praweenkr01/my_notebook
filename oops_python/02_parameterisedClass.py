

#CONSTRUCTOR:
'''when we create an object ,the special __init__() method,
    inside the class of object is invoked automatically, 
    that special function/method is called CONTRUCTOR.
'''



#We can make constructor without parameter but that is merely useful.
#e.g.
class cLass:
    def __init__(self):# self: self is not a keyword,self refer to the current object being executed.
        print("Inside the cLass")
cLass()



# parameterized constructors:constructor takes parameter

class Mobile:
    def __init__(self, price,brand): #here price and brand is parameter

        #these below are the attributes
        self.price=price
        self.brand=brand

mob1=Mobile(12000,"REDMI")
mob2=Mobile(15000,"LAVA")

print(mob1.price)


# mob=Mobile(2333) #this will give error as 2 parameter needed
'''if we invoke the constructor with different number of parameter,
give error message indicating how many missed or exceeded parameter
'''

#Inside the class:
'''
-attribute can be created by using self variable and dot operator.
-without self we are creating only local variable not attribute
-local variable can't be accessed outside the __init__(),(constructor)
-using self creates attribute which are accessible in other method as well
'''



#We can create behaviour in class by adding a function in a class.
#However those function should have special parameter called self(as first parameter)
#Such function are called method.
#we can access attribute in a method by using ,self.attribute
#we can even invoke one method from other using self.methodName.

class Mob:
    def __init__(self,brand,price):
        self.brand=brand
        self.price=price
    
    def update_price(self,newprice):#can be  invoked only on a object.(can't be invoked without obj)
                                    #at least one parameter(self)

        self.price=newprice
    
m1=Mob("Samsung",12000) #here m1 is reference variable
                        #an object can have multiple reference
'''when we assign an alredy creadted variable(reference var) to other var,
                     same object is assigned, no other object formed.
'''
mm1=m1
print(id(m1)) #these both id will be same
print(id(mm1))

print(mm1.price)
mm1.price=20000
print(m1.price) #20000

m2=Mob("Redmi",15000)
m2.update_price(13000)

print(m2.price)#13000


