class Products:
    def __init__(self, nam, prc, qty):
        self.name = nam
        self.price = prc
        self.quantity = qty

    def details(self):
        print(
            f"""Product Details:
    Name: {self.name}
    Price: Rs {self.price}
    Quantity: {self.quantity}
    Total: Rs {self.price * self.quantity}"""
        )


chips = Products("Lays", 10, 3)

chips.details()
