#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 200

struct Product{
    int id;
    char name[50];
    float price;
    int stock;
};

struct Product products[MAX];
int count = 0;

/* ---------- FILE FUNCTIONS ---------- */

void loadProducts(){

    FILE *fp = fopen("products.dat","rb");

    if(fp==NULL) return;

    while(fread(&products[count],sizeof(struct Product),1,fp))
        count++;

    fclose(fp);
}

void saveProducts(){

    FILE *fp = fopen("products.dat","wb");

    for(int i=0;i<count;i++)
        fwrite(&products[i],sizeof(struct Product),1,fp);

    fclose(fp);
}

/* ---------- PRODUCT MANAGEMENT ---------- */

void addProduct(){

    printf("Product ID: ");
    scanf("%d",&products[count].id);

    printf("Name: ");
    scanf("%s",products[count].name);

    printf("Price: ");
    scanf("%f",&products[count].price);

    printf("Stock: ");
    scanf("%d",&products[count].stock);

    count++;

    saveProducts();

    printf("Product Added\n");
}

void viewProducts(){

    printf("\n----- INVENTORY -----\n");

    for(int i=0;i<count;i++){

        printf("ID:%d | %s | Price:%.2f | Stock:%d\n",
        products[i].id,
        products[i].name,
        products[i].price,
        products[i].stock);
    }
}

void searchProduct(){

    int id;

    printf("Enter ID: ");
    scanf("%d",&id);

    for(int i=0;i<count;i++){

        if(products[i].id==id){

            printf("Found: %s | Price %.2f | Stock %d\n",
            products[i].name,
            products[i].price,
            products[i].stock);
            return;
        }
    }

    printf("Product Not Found\n");
}

/* ---------- BILLING SYSTEM ---------- */

void makeSale(){

    int id,qty;
    float total=0;
    int more=1;

    printf("\n----- BILLING -----\n");

    while(more){

        printf("Product ID: ");
        scanf("%d",&id);

        int found=0;

        for(int i=0;i<count;i++){

            if(products[i].id==id){

                found=1;

                printf("Quantity: ");
                scanf("%d",&qty);

                if(qty>products[i].stock){

                    printf("Not enough stock\n");
                    break;
                }

                float cost = qty*products[i].price;

                products[i].stock -= qty;

                total += cost;

                printf("%s x%d = %.2f\n",
                products[i].name,qty,cost);
            }
        }

        if(!found)
            printf("Product not found\n");

        printf("Add more items? (1=Yes 0=No): ");
        scanf("%d",&more);
    }

    saveProducts();

    printf("\nTOTAL BILL: %.2f\n",total);

    FILE *sales=fopen("sales.txt","a");
    fprintf(sales,"Sale Total: %.2f\n",total);
    fclose(sales);
}

/* ---------- SALES REPORT ---------- */

void salesReport(){

    char line[100];

    FILE *fp=fopen("sales.txt","r");

    if(fp==NULL){
        printf("No sales yet\n");
        return;
    }

    printf("\n----- SALES HISTORY -----\n");

    while(fgets(line,100,fp))
        printf("%s",line);

    fclose(fp);
}

/* ---------- LOGIN ---------- */

int login(){

    char user[20];
    char pass[20];

    printf("Username: ");
    scanf("%s",user);

    printf("Password: ");
    scanf("%s",pass);

    if(strcmp(user,"admin")==0 && strcmp(pass,"1234")==0)
        return 1;

    return 0;
}

/* ---------- MAIN ---------- */

int main(){

    int choice;

    loadProducts();

    printf("=== SUPERMARKET POS ===\n");

    if(!login()){

        printf("Access Denied\n");
        return 0;
    }

    while(1){

        printf("\n===== MENU =====\n");
        printf("1 Add Product\n");
        printf("2 View Inventory\n");
        printf("3 Search Product\n");
        printf("4 Make Sale\n");
        printf("5 Sales Report\n");
        printf("6 Exit\n");

        printf("Choice: ");
        scanf("%d",&choice);

        switch(choice){

            case 1: addProduct(); break;
            case 2: viewProducts(); break;
            case 3: searchProduct(); break;
            case 4: makeSale(); break;
            case 5: salesReport(); break;
            case 6: exit(0);

            default:
            printf("Invalid choice\n");
        }
    }
}