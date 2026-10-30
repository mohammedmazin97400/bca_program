print("enter the first student details:")
firstname=input("enter your name:")
english1=int(input("enter english maeks:"))
maths1=int(input("enter maths marks:"))
python1=int(input("enter python marks:"))
total=english1+maths1+python1
percentage1=total/300*100
print(f"percentage1: {percentage1:.2f}")
print("----------------------")

print("second student details:")
secondname=input("enter your name:")
english2=int(input("enter english maeks:"))
maths2=int(input("enter maths marks:"))
python2=int(input("enter python marks:"))
total2=english2+maths2+python2
percentage2=total2/300*100
print(f"percentage2: {percentage2:.2f}")
print(f"{'name':<20}{'english':<20}{'maths':20}{'python':<20}{'total':<20}{'percentage':<20}")
print(f"{firstname:<20}{english1:<20}{maths1:<20}{python1:<20}{total:<20}{percentage1:<20}"'%')
print(f"{secondname:<20}{english2:<20}{maths2:<20}{python2:<20}{total2:<20}{percentage2:<20}"'%')
