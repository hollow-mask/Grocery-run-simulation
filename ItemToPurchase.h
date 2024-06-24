#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct ItemToPurchase_struct {
    char itemName[50];
    char itemDescription[50];
    int itemPrice;
    int itemQuantity;
}ItemToPurchase;

void MakeItemBlank(ItemToPurchase* groceryitem );

void PrintItemDescription(ItemToPurchase groceryitem);

void PrintItemCost(ItemToPurchase groceryitem);