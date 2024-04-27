

#In shopping we don't have something called a product.we only have specific type of product.
'''In that sense ,an object of product class would not represent a real world object.
    bcz a product is just an abstract concept.
    the best practice would be not to create aobject of product class'''

'''We can programmitaclly declare a class as an abstarct class,
    an abstract class should not be instantiated.'''

'''NOTE: In python we'll not get the error even if we try to instantiate it
         but would get eror in other language like cpp,java'''


#abc-abstract base class
#ABCMeta-Inbuilt special class

'''The only way we can use abstract class is to make other class inherit from abstract class'''

from abc import ABCMeta
from abc import abstractmethod

class Product(metaclass=ABCMeta):
    def __init__(self,price):
        self.price=price

    @abstractmethod
    def return_policy(self):#this method must be overridden
        pass
    

class Furniture(Product):
    
    def return_policy(self):
        print("Can't return")

f1=Furniture(1200)
print(f1.price)
f1.return_policy()



'''
    -Abstract class should not be instantiated.
    =An abstract class may contain 0 or many abstract method
    -Usually parents class is a abstract class
    -Abstarct class are meant to be inherited.
    -If class has an abstract method then the class can't be instantiated
    -the child class must implement/override all the abstract method of parent class else child class cant be instantiated
'''

