#AK 6th old enough

age = int(input("What is your age?"))

if age == 15:
    print ("You can get your learners permit.")
elif age == 16 or age ==17:
    print("You are old enough to drive.")
elif age < 4:
    print ("You are not old enogh to drive, vote, go to school, or get you learners permit.")
elif age < 18 and age >= 4:
    print ("You are old enough to go to school.")
else:
    print ("You are old enogh to vote.")
