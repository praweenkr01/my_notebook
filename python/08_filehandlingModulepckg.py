#the number of file that can be simultaneously opened is limited :important to close the file when done

flight_file=open("flights.txt",'w') #if no file will create such file
flight_file.write("Hello")
flight_file.close()

if flight_file.closed:
    print("flight file closed")
else:
    print("flight file open")



try:
    file=open("flights.txt",'r')
    txt=file.read()
    print(txt)

    # file.write("World")#THIS FILE OPENED AS READ ONLY
except:
    print("error occured")

finally:
    file.close()
    if file.closed:print("file closed")


#Module & Packages
# Module:
''' A module is a normal python file(file with .py extension)'''

#package
'''A normal folder which contain an empty file whose name is __init__.py
since,package is a folder it can store many python modules files in it'''

import modulexample
import mypackage.functions
print(modulexample.div(6,3))

from mypackage import functions
print(functions.square(3))

from  mypackage.functions import half
print(half(4))

import mypackage
print(mypackage.functions.cube(2))

from modulexample import *
print(mul(5,6))