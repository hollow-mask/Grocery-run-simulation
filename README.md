# Grocery-run-simulation

Project simulates doing groceries at the store. It uses a shopping cart struct and an item to purchase struct.  When the program starts running it will prompt the user for the customer name and then prompt the user for the date and then it'll print all the menu options.

MENU:
a - Add item to cart
r - Remove item from cart
c - Change item quantity
i - Output items' descriptions
o - Output shopping cart
q - Quit

*Letter abbreviation is the input that you need to put into the terminal. 

The maximum amount of cart items is predefined in ShoppincgCart.h file. Every time you use the add item command the item count goes up by one, but when adding Items to the cart you can control the quantity of the item that you add to the cart. The quantity that you enter won't fill up Extra Spaces in the cart item array. For example if you used the add item command and you wanted to add eggs you could set the quantity to 10 eggs but only one slot in the cart items array would be filled but the program will still record the 10 eggs so it can output the shopping carts price when prompted. 


compile command: gcc main.c ItemToPurchase.c ShoppingCart.c
