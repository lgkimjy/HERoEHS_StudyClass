# Our Pizzas

class Pizza:
    HAM_MUSHROOM_PIZZA_TYPE = 0
    DELUXE_PIZZA_TYPE = 1
    SEAFOOD_PIZZA_TYPE= 2

    def __init__(self):
        self._price = None

    def getPrice(self):
        return self._price

class HamAndMushroomPizza(Pizza):
    def __init__(self):
        self._price = 8.50

class DeluxePizza(Pizza):
    def __init__(self):
        self._price = 10.50

class SeafoodPizza(Pizza):
    def __init__(self):
        self._price = 11.50

class PizzaFactory:
    def createPizza(self, pizzaType):
        if pizzaType == Pizza.HAM_MUSHROOM_PIZZA_TYPE:
            return HamAndMushroomPizza()
        elif pizzaType == Pizza.DELUXE_PIZZA_TYPE:
            return DeluxePizza()
        elif pizzaType == Pizza.SEAFOOD_PIZZA_TYPE:
            return SeafoodPizza()
        else:
            return DeluxePizza()

# Usage
pizzaPrice = PizzaFactory().createPizza(Pizza.HAM_MUSHROOM_PIZZA_TYPE).getPrice()
print "$%.02f" % pizzaPrice