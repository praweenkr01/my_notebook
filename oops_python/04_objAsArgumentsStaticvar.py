
# passing object as  parameter to a function.
'''The parameter name become a reference variable and the change made through any refernce var shows up'''

class Mob:
    def __init__(self,brand,macAdress):
        self.brand=brand
        self.__macAddress=macAdress
    
    def get_mac(self):
        print(self.__macAddress)
    
    def set_mac(self,nw):
        self.__macAddress=nw


m1=Mob("LAVA",2345)

def change_mcadress(m):
    m.__macAddress=9876 #this will not change the macAddress(end up making new attribute)
    m.set_mac(77777)    #this will change the real macaddress.


change_mcadress(m1)
m1.get_mac()

'''We can store number of object inside a list or distionary'''






#STATIC VARIABLE

#If we have to change a attribute for all the object of a class: STATIC VARIABLE
'''when we make an attributet shared across objects.'''
'''data is shared by each object ,not owned by each object
    making a single change it would refelect in all object at one go'''


class Mobile:

    discount=500 #static variable
    __margin=200 #private static variable

    def __init__(self,brand,MRP):
        self.brand=brand
        self.MRP=MRP
    
    def get_price(self):
        print(self.MRP-Mobile.discount)#static var accessed using class name


    @staticmethod
    def get_margin():#no self in static method
        print(Mobile.__margin)

    @staticmethod
    def set_margin(val):#no self in static method
        Mobile.__margin=val
    


#update static var
Mobile.discount=400

mob=Mobile("SAMSUNG",15000)
mob.get_price() #14500

#margin is private static var hence can't be modified or accessed directly
#hence static method is required
Mobile.get_margin() #200
Mobile.set_margin(250) #set the margin to 250
Mobile.get_margin()
