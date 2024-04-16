

# OOPs :object oriented programming
'''the style of programming where we create templete and
     create copies from that template called object oriented programming'''

'''the templete is called class.
The copies that we create is called object.'''


# simple clss
class mob:
    pass

mob()#the object is created but lost(can't be accessed again) as it is not assigned to any var.

mob1=mob()#the var used to acces object(mob1),is called reference variale
mob2=mob() #this is different object and each object independent of each other

print(id(mob1)) #theses both will have different id
print(id(mob2))


# CREATING THE ATTRIBUTE
mob1.price=120000
mob2.price=150000

mob1.brand="apple"
mob2.brand="samsung"

print(mob1.price,mob1.brand)
print(mob2.price,mob2.brand)



'''In python we can make attribute for a specific project alone'''
mob1.ios_version=16
mob2.android_version=13.6

print(mob1.ios_version,mob2.android_version)




'''we can update the attribute value easily'''
mob2.price=124000
print(mob2.price)


mob1.ios_versio=17  #here we wanted to update attribute ios_version
                    #BUT due to wrong typing end up making new attribute
                    # and ios_version attribute have same preious value(not updated)
                #So Best practice is to ensure all object of a class have same attribute.

