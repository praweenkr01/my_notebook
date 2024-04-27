
#if two or more class have lot in common

'''the class which is inheriting is called child/sub/derived class'''
'''The class getting inheriated is called parent/super/base class'''


#Advanatge of Inheritance
'''We can keep commob properties ona sigle place ,
    thus any changes need to be made need not to be repeated'''

'''Inheritance encourages code reusability thus saving time'''
'''In any futher such feature object need to be created can be simply inherited
                                             instead of writing from the scratch'''


#A child class inherits 
    #constructor
    #non-private attribute
    #non private methods

'''unlike other language private variables get inherited in PYTHON'''

'''If  any child class has it's own constructor then constructor of parent is not inherited,
                hence attribute also not inherited'''
'''A child class can't directly access the private attribute of the parents'''
'''Sometimes a child may not want to use what it has inherited from parents
        child class may create it's own method with the same name ,method over riding(POLYMORPHISM)'''

# super()#Invoke Overridden method/constructor from parent class


class Phone:
    def __init__(self,brand,price,camera):
        self.brand=brand
        self.price=price
        self.camera=camera
    
    def buy(self):
        print("Buying a Phone")



class FeaturePhone(Phone):
    def buy(self): #method override
        print("Buying a Feature phone")
        super().buy() #whatever is present in parents.

f1=FeaturePhone("Nikia",5000,13)
f1.buy()    #Buying a Feature phone
            #Buying a Phone


'''_______________________________________________________________________--'''

class SmartPhone(Phone):
    def __init__(self,brand,price,camera,ram,rom):
        super().__init__(brand,price,camera)
        self.ram=ram
        self.rom=rom
    

s1=SmartPhone('LAVA',15000,13,8,256)
s1.buy() #buying a phone
print(s1.brand)
print(s1.ram)



#Single Level Inheritance: Single parent and single child
#Multi level Inheritance: GrandParent->Parent->Child
#Multiple Inheritance: One child many parents
'''when a child is inheriting from multiple parents and there is common behaviours to be inherited
It inherits the method in parents class which is first in list.'''
#Hierarchical :One parent many child








