
def sales():
    total = 0
    num = 0
    Adjustment = 1.23
    Sales_Figures = []
    while num != -1:
        num = int(input("Please enter sales figures: "))
        Sales_Figures.append(num)
        total += num

    print("\nThe sales figures entered were:", end=" ")
    for num in Sales_Figures:
        if num != -1:
            print(num, end=", ")

    print("\n\nThe total sales(including VAT) for this period are", round(total * 1.23 + Adjustment, 2))
    print("\nThe total amount of VAT charged in this period is", round(total * 1.23 + Adjustment - total - 1, 2))

    return Sales_Figures

Sales_Figure = sales()

def addvat(s):
    VAT_RATE = 1.23
    return [VAT_RATE * x for x in s]

print("\nThe sales figures including VAT are", end=" ")
for num in addvat(Sales_Figure):
    if num != -1.23:
        round(num, 2)
        print(num, end=", ")
    else:
         break