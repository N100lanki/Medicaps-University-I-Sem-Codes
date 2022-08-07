# %%
#Area of Circle
pi=3.14

radii=int(input("Enter Radius of Circle : "))
print("Area of Circle is : ",pi*radii**2)
    

# %%
#swap of vars
x,y="Number one","Number two"
print("Before Swapping : ",x,y)
x,y=y,x
print("After Swapping : ",x,y)

# %%
#perimeter of rectangle
l,w=input("Enter Length and width : ").split()

print("Perimeter of Rectangle is : ",2*(float(l)+float(w)))

# %%
#Circumference of Circle
pi=3.14

radii=int(input("Enter Radius of Circle : "))
print("Circumference of Circle is : ",2*pi*radii)
    

# %% [markdown]
# ##### 

# %%
import keyword
keyword.kwlist



# %%
n=10
print(n," is of type ",type(n))
n="Str"
print(n+" is of type ",type(n))
n=True
print(n,"is of type ",type(n))
n=234.653
print(n,"is of type ",type(n))
n=3j+2
print(n,"is of type ",type(n))

# %%
n =200
print(n," in decimal is  ",n)
print(n," in binary is  ",bin(n))
print(n," in octal is  ",oct(n))
print(n," in hexadecimal is  ",hex(n))
print()
n=0xAB
print(n," in decimal is  ",n)
print(n," in binary is  ",bin(n))
print(n," in octal is  ",oct(n))
print(n," in hexadecimal is  ",hex(n))
print()
n=0b10010101
print(n," in decimal is  ",n)
print(n," in binary is  ",bin(n))
print(n," in octal is  ",oct(n))
print(n," in hexadecimal is  ",hex(n))
print()
n=0o12542456
print(n," in decimal is  ",n)
print(n," in binary is  ",bin(n))
print(n," in octal is  ",oct(n))
print(n," in hexadecimal is  ",hex(n))

# %%

ch=input("What do you want to convert F or C :")
if(ch=="F" or ch=="f"):
    fahrenheit=float(input("Enter temperature in fahrenheit: "))
    print("Temperature in Celcius is :",(fahrenheit-32)*5/9)
elif(ch=="C" or ch=="c"):
    celcius=float(input("Enter temperature in Celcius: "))
    print("Temperature in Fahrenheit is :",(celcius*9/5)+32)
else:
        print("Enter correct choice.")
        


# %%
#formatting
str1="The very First Line."
list1= str1.split()
print(list1)
print("{} {} {} {}".format(list1[0][0],list1[1][0],list1[2][0],list1[3][0]))
print("right aligned by 5->%5c \nleft aligned by 7->%-7c \nright aligned by 8->%8c \nleft aligned by 9->%-9c"%(list1[0][0],list1[1][0],list1[2][0],list1[3][0]))

# %%
dict = {1: {"name": "Hariom","age":20}, 2: {"Name": "Hello"}}
for key, val in dict.items():
    print(key)
    for info in val:
        print(info)
    

# %%
class A:
    def __init__(self):
        self.a=10
class B(A):
    pass
class C(A):
    pass
class D(B,C):
    def print_a(self):
        print(self.a)
d =D();
d.print_a()

# %%



