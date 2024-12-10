import math
# input from User
u = float(input("Enter the initial velocity of particle (in m/s) : "))
angle = float(input("Enter the Angle of projectile from Horizontal (in degree) : "))
angle = (angle*math.pi)/180
# range from Range formule for Projectile 
# range = (u^2sin(2*angle))/9.81;
range = (pow(u,2)*math.sin(2*angle))/9.81
#diplay the range
print("The Range of the projectile praticle is : ",range)