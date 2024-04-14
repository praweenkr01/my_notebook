#meaningful variable name
#comments wherever possible to explain code




import turtle

window=turtle.Screen() #create a graphic window
window.setup()          #set window dimwnsion

my_turtle=turtle.Turtle()   #create a turtle named my_turtle
my_turtle.shape("turtle")   #my_turtle looks like turtle
my_turtle.color("red")      #color red

i=0
my_turtle.speed(10)
while(i<50):
    my_turtle.circle(i+10)
    i+=1

'''
variable_name : snake_case
this is multiline comments

'''
first_num=3
second_num=7
sum=first_num+second_num
print(sum)


