rollno=0
name=''
eng,maths,hindi=0


def read_data():
    name=("enter your name:\n")
    rollno=int(input("enter your roll number:\n"))
    eng=int(input("enter your english marks:\n"))
    maths=int(input("enter your maths marks:\n"))
    hindi=int(input("enter your hindi marks:\n"))
    return name , rollno , eng , maths , hindi


def gettotal():    
    global total
    total = eng+ maths+ hindi
    return total


def getpercentage():    
    global percentage
    percentage=total/3
    print("your average=",percentage)
    return percentage


def findgrade():    


    if percentage < 40:
        print("you failed")
    elif percentage > 40 and percentage <60:
        print("you scored second class")
    elif percentage >=60 and percentage < 75:
        print("you scored first class")
    elif percentage >=75 and percentage < 85:
        print("you scored distinction")
    else:
        print("you scored double distiction") 

def displayresult():
    pass
    print("name is=",name)
    print("rollno is=",rollno)
    for number in range(2,5):
         name,rollno,eng,maths,hindi=read_data()
         total = gettotal()
    







