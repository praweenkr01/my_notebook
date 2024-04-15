
# local variable
'''created inside funcn
    -created when owning funcn starts and remains tilll owning funcn finishes execution
    -access inside the funcn only
'''
# global variable
'''created outside funcn
    created when program starts and remain till program terminates
    can be used anywhere in program
'''

wt_limit=30 #global variable
def baggage_check(bagwt):
    extra_charge=0  #local variable
    if bagwt>wt_limit:
        extra_charge=50*(wt_limit-bagwt)
    return extra_charge


def update_wt_limit(new_limit):
    wt_limit=new_limit  #python does not allow modification of global var inside funcn directly
                        #this wt_limit is taken as new local variable not global var
                        #the global wt_limit won't change

#the correct way to modify global varible
def update_wt_global(new_wt):
    global wt_limit #specifying using global keyword
    wt_limit=new_wt






