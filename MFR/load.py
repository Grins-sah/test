import math
#input the vector r1 and r2
r1 = int(input("Enter the Force F1 (in Newton) : "))
r2 = int(input("Enter the Force F2 (in Newton) : "))
angle = int(input("Enter the angle between the Force F1 and F2 (in degree) : "))
#calculating the Result
result = math.sqrt(pow(r1,2) +pow(r2,2) + 2*r1*r2*math.cos((angle*math.pi)/180))
print("The Resultant of two force is ",result)

