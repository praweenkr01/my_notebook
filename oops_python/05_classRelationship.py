#CLASS RELATIONSHIP


#Aggregation(has a relation)
'''When a object owns other object,but they both have independent life cycle.
    e.g. Customber object has an adress aboject,
    Even if customber is no more there may be other customber in same address,
    so address continue to exixts even after after a customber is no more.'''

#Composition
'''When one object owns another object and they both have same life cycle.
    e.g. college has a department ,if the college closes the department also closes.'''


#Inheritance(is a relation)
'''when an object is type of other object
    e.g. Mobile is a product    '''

'''_______________________________________________________________________________________'''


#if class A owns class B , then class A is said to aggregate class B

class Customber:
    def __init__(self,name,age,address):
        self.name=name
        self.__age=age
        self.__address=address
    
    def view_detail(self):
        print("Name:",self.name)
        print("Age:",self.__age)

        print("State:",self.__address.state)
        self.__address.get_pin()
        # print("Pin Code: ",self.__address.__pin) #INCORRECT
        '''this is incorrect ,private attribute of address class can't be accessed outside the class.'''
        '''The owning class cannot access the private attribute of aggregated class'''

    def purchase(self,payment):
        if payment.type=="online":
            print("Paying online")
        else:
            print("Payment in case")
    
    def call_support(self):
        print("calling",CustomberCare.helpline)
    

class Address:
    def __init__(self,state,pin):
        self.state=state
        self.__pin=pin
    
    def get_pin(self):
        print("PIN:",self.__pin)

ad1=Address("Bihar",851205)
c1=Customber("Praveen",23,ad1)

c1.view_detail()

#Sometimes a class may depend on another class for its use
'''this is not a strict relationship hence won't appear in class diagram'''
# e.g.

class Payment:
    def __init__(self,type):
        self.type=type

p1=Payment("online")

c1.purchase(p1) #paying online


#Sometimes we may access the static values of another class directly in our method.
class CustomberCare:
    helpline=112245

c1.call_support()




