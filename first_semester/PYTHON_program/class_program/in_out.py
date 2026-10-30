my_string = '''sachin_kumar\n-
sachin@google.com\n
+91-1234-578'''

name = my_string.split('\n')[0]

email = my_string.split('\n')[2]

contact_no = my_string.split('\n')[4]

print('name=',name.title())
print('email=',email)
print('contact_no=',contact_no())