#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "ShoppingCart.h"

ShoppingCart AddItem(ItemToPurchase groceryitem, ShoppingCart Cart){
    Cart.cartItems[Cart.cartSize] = groceryitem;
    Cart.cartSize ++;
    
    return Cart;
}

ShoppingCart RemoveItem(ShoppingCart Cart, char itemname[]){
    
    for(int i=0; i <Cart.cartSize;i++){
        if(strcmp(itemname, Cart.cartItems[i].itemName)==0){
            while(i<Cart.cartSize-1){
                Cart.cartItems[i] = Cart.cartItems[i+1];

                i++;
            }
            Cart.cartSize-=1;
            printf("\n");
            return Cart;
        }
    }
    printf("Item not found in cart. Nothing removed.\n\n");
    return Cart;
    
}

ShoppingCart ModifyItem(ShoppingCart Cart, ItemToPurchase groceryitem){
    int newquant=0;
    printf("Enter the new quantity:\n");
    scanf("%d", &newquant);
    for(int i =0;i<Cart.cartSize;i++){
        if(strcmp(Cart.cartItems[i].itemName, groceryitem.itemName)==0){
            Cart.cartItems[i].itemQuantity=newquant;
            printf("\n");
            return Cart;
        }
    }
    printf("Item not found in cart. Nothing modified.\n\n");
    return Cart;
}

int GetNumItemsInCart(ShoppingCart Cart){
    int cartsize=0;
    for(int i=0;i<Cart.cartSize;i++){
        cartsize+=Cart.cartItems[i].itemQuantity;
    }
    return cartsize;
}

int GetCostOfCart(ShoppingCart Cart){
    int totalcost=0;;
    for(int i=0;i<Cart.cartSize;i++){
        totalcost += (Cart.cartItems[i].itemPrice * Cart.cartItems[i].itemQuantity);
    }
    return totalcost;
}

void PrintTotal(ShoppingCart Cart){
    printf("%s's Shopping Cart - %s\n", Cart.customerName, Cart.currentDate);
    printf("Number of Items: %d\n\n", GetNumItemsInCart(Cart));
    if(Cart.cartSize == 0){
        printf("SHOPPING CART IS EMPTY\n");
    }
    for(int i=0;i<Cart.cartSize;i++){
        PrintItemCost(Cart.cartItems[i]);
        
    }
    printf("\nTotal: $%d\n\n", GetCostOfCart(Cart));//LEFT OFF HERE
    return;
}

void PrintDescriptions(ShoppingCart Cart){
    printf("%s's Shopping Cart - %s\n\n", Cart.customerName, Cart.currentDate);
    printf("Item Descriptions\n");
    for(int i=0;i<Cart.cartSize;i++){
                printf("%s: %s", Cart.cartItems[i].itemName, Cart.cartItems[i].itemDescription);
            }
            printf("\n");
    
}