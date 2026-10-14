normal_ticket =250


day = input("enter the current day:").strip().lower()
time = input("enter the current time of the day(morning , afternoon , evening)")
age = int(input("enter your age:"))



if day =="saturday" or day =="sunday":
    price =  normal_ticket *1.25
else:
    price = normal_ticket    

if time== "morning":
    price= price
elif time== "afternoon":
    price= price *1.10  
elif time=="evening":
    price= price *1.30
            

    
if age<5:
    price=price *0.05
elif age >60:
    price = price *0.90

print("final ticket price : ",price)
