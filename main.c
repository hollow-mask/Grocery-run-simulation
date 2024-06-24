#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "ShoppingCart.h"


void PrintMenu(ShoppingCart cart) {
    char userInput[2];
    int valid = 1;
        //scanf("%s", userInput);
        //printf("user entered %s\n", userInput);
        //printf("user entered %s\n", userInput);
    while(1) {
       if(valid==1){printf("MENU\na - Add item to cart\nr - Remove item from cart\nc - Change item quantity\ni - Output items' descriptions\no - Output shopping cart\nq - Quit\n\nChoose an option:\n");
       }
       else{
            printf("Choose an option:\n");

       }
       valid =1;

        ItemToPurchase item;
        //printf("MENU\na - Add item to cart\nr - Remove item from cart\nc - Change item quantity\ni - Output items' descriptions\no - Output shopping cart\nq - Quit\n\nChoose an option:\n");
        scanf("%s", userInput);
        //printf("user entered %s\n", userInput);
        if(userInput[0] == 'q') {
            return;
        } 
        else if(userInput[0] == 'a') {
            printf("ADD ITEM TO CART\nEnter the item name:\n");
            char itemName[50];
            scanf("%c",itemName);
            fgets(itemName, 50, stdin);
            itemName[strlen(itemName)-1]='\0';
            printf("Enter the item description:\n");
            char itemdescribe[50];
            fgets(itemdescribe, 50, stdin);

            printf("Enter the item price:\n");
            int itemprice=0;
            scanf("%d", &itemprice);

            printf("Enter the item quantity:\n");
            int itemcount=0;
            scanf("%d",&itemcount);
            printf("\n");

            //ItemToPurchase item;
            strcpy(item.itemName, itemName);
            strcpy(item.itemDescription, itemdescribe);
            item.itemPrice = itemprice;
            item.itemQuantity = itemcount;
            //for(int v=0;v<item.itemQuantity;v++){
                cart = AddItem(item,cart);
            //}
            //cart = AddItem(item,cart);
            //printf("%d\n", cart.cartSize);
        }
        else if(userInput[0] == 'r'){
            printf("REMOVE ITEM FROM CART\nEnter name of item to remove:\n");
            char itemName[50];
            scanf("%c",itemName);
            fgets(itemName, 50, stdin);
            itemName[strlen(itemName)-1]='\0';
            cart = RemoveItem(cart, itemName);
            //printf("%s", itemName);
        }
        else if(userInput[0] == 'o'){

            printf("OUTPUT SHOPPING CART\n");
            PrintTotal(cart);
        }

        else if(userInput[0] == 'i'){
            printf("OUTPUT ITEMS' DESCRIPTIONS\n");
         PrintDescriptions(cart);
        }

        else if(userInput[0] == 'c'){
           printf("CHANGE ITEM QUANTITY\nEnter the item name:\n");
           char itemName[50];
           scanf("%c",itemName);
            fgets(itemName, 50, stdin);
            itemName[strlen(itemName)-1]='\0';
            //printf("Enter the item name:\n");
            ItemToPurchase item;
            strcpy(item.itemName, itemName);
            cart = ModifyItem(cart, item);
        }

        else{
            // printf("Choose an option:\n");
            valid = 0;
        }
    }
}

int main() {
    //ItemToPurchase groceryitem1;
    //ItemToPurchase groceryitem2;
     char customerName[50];
     char date[50];

    printf("Enter Customer's Name:\n");
    fgets(customerName, 50, stdin);
    if(customerName[strlen(customerName)-1] == '\n'){
        customerName[strlen(customerName)-1] = '\0';
    }
    
    printf("Enter Today's Date:\n");
    fgets(date, 50, stdin);
    if(date[strlen(date)-1] == '\n'){
        date[strlen(date)-1] = '\0';
    }
    printf("\n");
    printf("Customer Name: %s\n", customerName);
    printf("Today's Date: %s\n\n", date);
    
    ShoppingCart cart;
    strcpy(cart.customerName, customerName);
    strcpy(cart.currentDate, date);
    cart.cartSize=0;
    PrintMenu(cart);

    

    return 0;
}