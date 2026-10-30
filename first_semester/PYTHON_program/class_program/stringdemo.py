message='good morning'   #single line string 
my_string="how are you"     #single line string
my_para="""good morning
how are you"""             # multi-line string

#indexing 
print(message[0])
print(message[-11])
print(message[-10])
print(message[-9])
print(message[-7])
print(message[-6])
print(message[-5])
print(message[-4])
print(message[-3])
print(message[-2])
print(message[-1]) 
print(message[: :-1])

print(message.lower())
print(message.upper())
print(message.split())
print(len(message))
print(message.count('o'))
print(message.replace('bad','good'))
print(message.title())
print(message.find('d'))