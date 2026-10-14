#Program to demonstrate real python string processing to clean and transform
# Output formate:
# ==============================
#  PROFILE CARD
# ==============================
#  Name     : Naveen Kumar
#  Initials : NK
#  Email    : naveen.kumar@company.com
#  Domain   : company.com
#  Phone    : *********3210
#  Valid    : True
# ==============================

raw_data = """
   naveen   KUMAR
nk
naveen.kumar@COMPANY.com
company.com
+91-98765-432
true

"""
print("===========================")

print("profile card")

print("===========================")



name,initials,email,domain,phone,valid=raw_data.split("\n")[1],raw_data.split("\n")[2],raw_data.split("\n")[3],raw_data.split("\n")[4],raw_data.split("\n")[5],raw_data.split("\n")[6]
print("name:",name.strip().title().replace("   "," ")) 
print("initials:",initials.upper())
print("email:",email.lower())
print("domain:",domain)
print("phone:",phone.replace("-",""))
print("valid:","TRUE" if len (phone)<=14 else "FALSE")

first,last=name.split()[0],name.split()[1]
initials=first[0].upper()+last[0].upper()