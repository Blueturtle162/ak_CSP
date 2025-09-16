#AK 6th Update Calculator

def user_expences(amount_per_month):
    float (input("What is your monthly "+ amount_per_month +"?"))
    

income = user_expences("income")
rent = user_expences("rent")
groceries = user_expences("groceries")
utilities = user_expences("utilities")
transportation = user_expences("transportation")

def percent(number):
    return round (number / income * 100,2)

percent_rent = percent(rent)
percent_groceries = percent(groceries)
percent_utilities = percent(utilities)
percent_transportation = percent(transportation)


savings = income*.1
spending = income-(rent + groceries + utilities + transportation + savings)

print ("Your monthly rent is",rent,"and that is",percent_rent,"percent of your monthly income.")
print ("Your groceries cost",groceries,"and that is",percent_groceries,"percent of your monthly income.")
print ("Your monthly utilites cost",utilities,"and that is",percent_utilities,"percent of you monthly income.")
print ("Your cost of transportation is",transportation,"which is",percent_transportation,"percent of your monthly income")
print ("You should save",savings,"which is 10 percent of your monthly income.")
print ("You have",spending,"dollars left for spending.")

