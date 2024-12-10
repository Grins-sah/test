#input from the user
l = float(input("Enter the span of the Beam (in Meter) : "))
w1 = float(input("Enter the Weight of object 1 in (Newton) : "))
w2 = float(input("Enter the Weight of object 2 in (Newton) : "))
# input the distance of object from left side 
x1 = float(input("Enter the distance of object 1 from left side (in Meter) : "))
x2 = float(input("Enter the distance of object 2 from left side (in Meter) : "))
# calculation of support reaction 
r2 = (w1*x1+w2*x2)/l
r1= w1+w2-r2
# display the output
print("The Support reaction of Beam left Point (Newton) : ",r1)
print("The support reaction of Beam Right Point (Newton): ",r2)


