#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "ItemToPurchase.h"
// typedef struct ItemToPurchase_struct {
//     char itemName[50];
//     int itemPrice;
//     int itemQuantity;
// }ItemToPurchase;

void MakeItemBlank(ItemToPurchase* groceryitem ){
    // ItemToPurchase temp;
    strcpy(groceryitem->itemName, "none");
    strcpy(groceryitem->itemDescription, "none");
    groceryitem->itemPrice = 0;
    groceryitem->itemQuantity = 0;

    // return temp;
}

void PrintItemCost(ItemToPurchase groceryitem){
    printf("%s %d @ $%d = $%d\n", groceryitem.itemName, groceryitem.itemQuantity, groceryitem.itemPrice, (groceryitem.itemQuantity * groceryitem.itemPrice));
}

void PrintItemDescription(ItemToPurchase groceryitem){
    printf("%s", groceryitem.itemDescription);
}