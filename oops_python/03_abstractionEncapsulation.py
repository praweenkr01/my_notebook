class Mob:
    def __init__(self,brand,price):
        self.brand=brand
        self.price=price
    
    def purchase(self):
        print("Purchasing the Mobile ")
        print("Brand:",self.brand,"price: ",self.price)

m1=Mob("samsung",24000)
m1.purchase()
#when we invoke purchase on a Mob object we don't have to know the detail of the method to invoke it.
#ABSTRACTION
'''The Ability to use something without having to know
    the details of how it is working is called ABSTRACTION '''



#PRIVATE ATTRIBUTE

'''In python adding double underscore makes the attributes a private attribute'''
'''Private attribute are those that are accessible only inside the class.'''
#ENCAPSULATION
#The method of restricting access to our data is called Encapsulation.

class Customber:
    def __init__(self,id,password):
        self.id=id
        self.__password=password
    
    def set_password(self,newpassword):
        self.__password=newpassword
        return 
    
    def get_password(self):
        print(self.__password)
        return

c1=Customber(123,"aqswde")
# print(c1.__password) #AttributeError: 'Customber' object has no attribute '__password'.

'''How does encapsulation work'''
#when we put __(double underscore)infront of any attribute name ,python automatically change that to
# _ClassName__attribute

print(c1._Customber__password) #this will give the password

c1._Customber__password="opopop" #setting the password
print(c1._Customber__password) #this will give the password
print(c1.get_password()) #this will also give the same password

c1.__password="ghjhl" #this will create new attribute for obj c1


'''In Python encapsulation is more like a caution sign than a lock
        It's gentleman's agreement not to access it directly
        It is used only to prevent accidental case'''

#ERROR FREE WAYS OF ACCESSING AND UPDAING PRIVATE VARIBLE

#the method which are ment to set a value to private variable are called shetter methods.
#the method which are ment to access private variable are called getter methods.

c1.set_password("JAI SHREE RAM")
c1.get_password()




    


