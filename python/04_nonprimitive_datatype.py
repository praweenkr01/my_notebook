
#LIST:mutable,ordered
'''
element of list stored in contegious mempry location
each element in the list has a position known as index 
can store both homogeneous and hetrogeneous ele

ele out of bound error is index>=len(list)

'''

empty_list=[]
list_with_size=[None]*10
print(len(list_with_size))  #o/p:10

alist=[1,2,3,4,6,3]
alist[4]=5 #modifing list at a position


alist.sort()
alist.reverse()
alist.remove(3)     #remove 3 from list remove the first coming 3
alist.index(4)  #if 4 is not in list error else index
print(4 in alist)   #True
print(alist[1:3])   #start from index 1 and end at 3 (excluded)
print(alist[-1])    #last ele :negative indexing


#TUPLE:immutable ,ordered
print("TUPLE")

atuple=("1","2","3")
print(atuple[0])

# () is optional in tuple
btuple="3","4","5"
print(btuple)

a,b,c=btuple    #the number of ele in tuple and no.of var should be equal
print(a)

# atuple[0]='9' #it's error ,no addition or modification in same tuple
new_tuple=atuple+btuple
print(btuple)


#STRING: immutable,used when sequence of char as info,where as tuple when sequence of individual ele
print("STRING")
astring="Arm2i$Ting"
# each val of string is char 

newstr=astring+" World"
print(newstr)
print(newstr.count('r'))    #gives the number of 'r'present in str
newstr=newstr.replace('T','t')  #string being immutable can't be chnaged hence regenerated and returned
print(newstr)
# newstr[0]='Z' #error as str is immutable

print(newstr.isalnum()) #because there is $ as well
print(newstr.split('r'))    #wherever there is 'r' split that that point and return list of str
print(newstr.upper())   #upper case
print(newstr.lower)     #no paranthesis gives address of where function is written
print(newstr.lower())   #lower case

print(newstr.startswith('Ar'))  #True as Arm2isting World starts with Ar
print(newstr.endswith('World')) #True


#DICTIONARY :hashmap,key:value pair,unordered

'''fast search of ele based on key O(n)
   key of dictionary is immutable type only e.g:tuple,string,integer,float
'''

gdp={'USA':21,'CHINA':18,'INDIA':3.8}

print(gdp['USA'])   #21
print(gdp.get('RUSSIA',0))  #as russia not there i provided default to 0
gdp.update({'RUSSIA':2,'IRAN':1.4,'UK':3.4})
print(gdp)

gdp['JAPAN']=4.1
print(gdp.items()) #list of tuple containg (key,value)

print(gdp.values()) #list of values
print(gdp.keys())   #list of keys
print(type(gdp.keys())) #<class 'dict_keys'>

gdp[4.7]=5.6    #this is correct

fnm=4.8
gdp[fnm]=7
fnm=89  #the key will still be 4.8 
# print(gdp[fnm]) #key error as no such key



#SET: unordred,no duplicate allowed,

aset={2,3,4,4}
print(aset) #only three ele there 
bset={5,6,4}

print(aset&bset)    #return the set of ele common in both
print(aset|bset)    #return set of all the unique ele either in aset or bset

print(aset-bset)    #return set of ele only present in aset not in bset
print(aset^bset)    #return set ele only in aset ,only in bset (not in both ,only in one)


















