#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "ItemToPurchase.h"

typedef struct ShoppingCart_struct{
    char customerName [50];
    char currentDate[50];
    ItemToPurchase cartItems[10];
    int cartSize; 
}ShoppingCart;

ShoppingCart AddItem(ItemToPurchase groceryitem, ShoppingCart Cart);
ShoppingCart RemoveItem(ShoppingCart Cart, char itemname[]);
ShoppingCart ModifyItem(ShoppingCart Cart, ItemToPurchase groceryitem);
int GetNumItemsInCart(ShoppingCart Cart);
int GetCostOfCart(ShoppingCart Cart);
void PrintTotal(ShoppingCart Cart);
void PrintDescriptions(ShoppingCart Cart);
