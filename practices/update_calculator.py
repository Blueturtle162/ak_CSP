#AK 6th Update Calculator

def get_user_input(question):
    return float (input(question))

def calculate_expense_percentage(income, expense):
    return (expense / income) * 100

income = get_user_input("What is your monthly income? ")
rent = get_user_input("What is your monthly rent? ")
groceries = get_user_input("What is your monthly groceries? ")
utilities = get_user_input("What is your monthly utilities? ")
transportation = get_user_input("What is your monthly transportation? ")

percent_rent = calculate_expense_percentage(income, rent)
percent_groceries = calculate_expense_percentage(income, groceries)
percent_utilities = calculate_expense_percentage(income, utilities)
percent_transportation = calculate_expense_percentage(income, transportation)

savings = income*.1
spending = income-(rent + groceries + utilities + transportation + savings)

print ("Your monthly rent is",rent,"and that is",percent_rent,"percent of your monthly income.")
print ("Your groceries cost",groceries,"and that is",percent_groceries,"percent of your monthly income.")
print ("Your monthly utilites cost",utilities,"and that is",percent_utilities,"percent of you monthly income.")
print ("Your cost of transportation is",transportation,"which is",percent_transportation,"percent of your monthly income")
print ("You should save",savings,"which is 10 percent of your monthly income.")
print ("You have",spending,"dollars left for spending.")

