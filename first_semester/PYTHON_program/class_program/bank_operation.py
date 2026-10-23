#write a python script to demonstarte bank operation,collect the data from the keyboard 
n=int(input("enter the number of account:"))
account_no =int(input("enter account number:"))
account_name=input("enter account name:")
dob=input("enter date of birth:")
Pan_Card=int(input("enter pan card no:"))
email_id=input("enter email id:")
contact_no=int(input("enter contact no:"))
address=input("enter your address:")
current_balance=int(input("enter your current balance:"))

bank_acc_data=[(account_no,account_name,dob,Pan_Card),email_id,contact_no,address,current_balance]



current_balance=bank_acc_data[4]
new_deposite=500
current_balance = current_balance + new_deposite
bank_acc_data[4] = current_balance

print(bank_acc_data)