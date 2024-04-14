
def calculate_sum(num1,num2):
    result=num1+num2
    return result

'''
function signature: def calculate_sum(num1,num2)
                    rest all left is function body

function parameter(formal arguments):takes in value passed from function call

return result: return the result to calling block

sm=calculate_sum(2,3): function call

'''

# if returned value from function is not stored it's lost
# e.g : calculate_sum(3,2)

print(calculate_sum(3,7))



# CONTROL FLOW
'''
    sequential:control flow from all the statement in the order it's written
    selection : based on some condition the control flow to different statement
    Iteration : certain statement executed repeteadly
'''


# while loop iteration : when number of iteration is unknown
count=0
while(count<=10):
    print(count)
    count+=1 #update the condition 
print("Done :this is out of loop")

# for loop: 
for num in 1,2,3,5,7:
    print(num)
print("Done")

print("Uning Range")
for i in range(3,20,2): #start from 3, last at 20(excluded), step size=2
    print(i)


#Infinite loop:Never terminate (generally used in embedded sytem)

#continue: to skip all the sequence below 
#break : to break out of loop

print("Using break and continue")
for i in range(10):

    if(i==2):
        continue
    print(i)
    if i==8:
        break


# selection
num1=2
if (num1==3):
    print(f"Number is {3}")
elif num1==2:
    print(f"Number is 2:{num1}")
else:
    print("Nothing")

