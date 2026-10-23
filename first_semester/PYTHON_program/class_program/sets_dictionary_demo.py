#employeename,employeenumber,companyname,salary store inside set and dictionary

employeename=input("Enter the employee name:")
employeeid=input("enter the empolyee id:")
employeenumber=int(input("Enter the employee number:"))
companyname=input("Enter the company name:")
empolyee_email=input("enter the empolyee email:")
salary=int(input("Enter the salary:"))

employee_set={employeename,employeenumber,companyname,salary}

employee_set.update(["employeeid","employee_email"])

employee_dict={
    "Name":employeename,
    "Employee Number":employeenumber,
    "Company Name":companyname,
    "Salary":salary
}

employee_dict["empolyeeid"] = 1
employee_dict["empolyee_email"] = "sagar@gmail.com"

print("\nEmployee details using tabular column:")

print("-" * 110)
print(f"{'Employee Name':<20}{'Employee Number':<20}{'Company Name':<20}{'Salary':<15}{'Email':<25}{'Phone Number':<15}")
print("-" * 110)

for name, number, company, salary, email, phone in [
    (employeename, employeenumber, companyname, salary, email, phone_no)
]:
    print(f"{name:<20}{number:<20}{company:<20}{salary:<15}{email:<25}{phone:<15}")

print("-" * 110)
