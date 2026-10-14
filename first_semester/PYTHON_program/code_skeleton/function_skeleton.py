def get_price(item):
    if item == "idli":
        return 30
    elif item == "dosa":
        return 40
    elif item == "sambar":
        return 50
    elif item == "golibajje":
        return 25
    elif item == "vada":
        return 20
    else:
        return 0


def item_cost(item, qty):
    price = get_price(item)
    return price * qty


def calculate_gst(amount, rate=0.05):
    gst = amount * 0.05
    return round(gst,2)


def generate_bill(subtotal, discount_percent=0):
    discount = subtotal * discount_percent / 100
    amount_after_discount = subtotal - discount_percent
    gst = calculate_gst(amount_after_discount)
    total = amount_after_discount + gst
    return discount,gst,total


def split_bill(total, people):
    each_pays = total / people
    left_over = total % people
    return each_pays,left_over




subtotal1 = item_cost("dosa",2)
discount1, gst1, total1 = generate_bill(subtotal1,0.02)
subtotal2 = item_cost("idli",3)
discount2, gst2, total2 = generate_bill(subtotal2,0.02) 

each, extra = split_bill(total1+total2,3)

print("Subtotal1 :", subtotal1)
print("Discount1 :", discount1)
print("GST1      :", gst1)
print("Total1    :", total1)
print("Subtotal2 :", subtotal2)
print("Discount2 :", discount2)
print("GST2      :", gst2)
print("Total2    :", total2)

print("Each pays:", each, "| Left over:", extra)