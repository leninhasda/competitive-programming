mealCost = float(input())
tipPercent = float(input())
taxPercent = float(input())

tip = mealCost * ( tipPercent / 100 )
tax = mealCost * ( taxPercent / 100 )

totalCost = mealCost + tip + tax
roundCost = round( totalCost )
print("The total meal cost is {} dollars.".format(roundCost))