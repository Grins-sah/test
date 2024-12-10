import math
# input from the user
mass = float(input("Enter the mass of load (in Kg) : "))
n = int(input("Enter the turn on spindle by string : " ))
N = int(input("Enter the rotation of the fly wheel : "))
t = int(input("Enter the time after the load had fallen (in second)  : "))
r = float(input("Enter the radius of spindle : "))
h = math.pi*2*r*n
MOI = ((N*mass)/(N+n))*(((9.81*h*pow(t,2))/(8*pow(math.pi,2)*pow(N,2)))-pow(r,2))
print("The moment of inertial of flywheel is : ",MOI)
