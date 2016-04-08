#du bist eine Kartoffel
# - Amy

def fizzbuzz(x):
    out = ""
    if(x%3 == 0):
        out+= "Fizz"
    if(x%5 == 0):
        out+= "Buzz"
    if(out == ""):
        out = x
    return out;
    

for i in range(1, 101):
    print(fizzbuzz(i))
