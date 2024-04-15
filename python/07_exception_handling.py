'''
ZeroDivisionError
TypeError
NameError
IndexError
ValueError

'''

alist=[2,4,5,6.7]

def divide(num,div):
    try:
        print(num/div)
    except ZeroDivisionError: #only when it's zero division error
        print("Division with Zero not allowed")
    finally:    #the statement in finally always executed
        print("DONE")
divide(5,0)





try:
    print(alist[5])
except IndexError:
    print("Index Out of Range")
else:
    print("printed alist[5]")   #else only when try block excuted





try:
    print(9+'RAm')
except TypeError:
    print("type error")



