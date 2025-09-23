#AK 6th FizzBuzz

r=0

while r<51:
    if r%3 == 0 and r%5 == 0:
        print ("FizzBuzz")
    elif r%5 == 0:
        print ("Buzz")
    elif r%3 == 0:
        print ("Fizz")
    else:
        print(r)
    r+=1