#include <stdio.h>

int main()
{
    int choice,total,pay;
    int pizza = 0, pasta = 0, burger = 0, coffee = 0;
    float gst,grand_total;

    printf("------ WELCOME TO MUSAFIR CAFE ------\n\n");

    do
    {
        label:
        printf("1. Pizza  = 100\n");
        printf("2. Pasta = 150\n");
        printf("3. Burger = 200\n");
        printf("4. Coffee = 40\n");
        printf("5. Finish order\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                pizza++;
                printf("Added Pizza (quantity %d)\n", pizza);
                break;

            case 2:
                pasta++;
                printf("Added Pasta (quantity %d)\n", pasta);
                break;

            case 3:
                burger++;
                printf("Added Burger (quantity %d)\n", burger);
                break;

            case 4:
                coffee++;
                printf("Added Coffee (quantity %d)\n", coffee);
                break;

            case 5:
                break;

            default:
                printf("No item found please try again\n");
                goto label;
        }
    } while (choice != 5);

    printf("YOUR ORDER\n");
    if (pizza > 0)
        printf("Pizza  x %d = %d\n", pizza, pizza * 100);
    if (pasta > 0)
        printf("Pasta x %d = %d\n", pasta, pasta * 150);
    if (burger > 0)
        printf("Burger x %d = %d\n", burger, burger * 200);
    if (coffee > 0)
        printf("Coffee  x %d = %d\n", coffee, coffee * 40);

    printf("\n");
    total = pizza * 100 + pasta * 150 + burger * 200 + coffee * 40;
    gst = total * 0.18;
    grand_total = total + gst; 

    printf("Total amount  :%d\n",total);
    printf("GST           :%.2f\n",gst);
    printf("Grand total   :%.2f\n",grand_total);

    printf("\n");
    pay = 0;
    while (pay != 1 && pay != 2)
    {
        printf("Payment option: 1. Cash  2. UPI\n");
        printf("Enter choice: ");
        scanf("%d", &pay);

        switch (pay)
        {
            case 1:
                printf("You selected Cash payment\n");
                break;

            case 2:
                printf("You selected UPI payment\n");
                break;

            default:
                printf("Select a valid payment option\n");
        }
    }

    printf("**** THANK YOU, COME AGAIN ****\n\n");

    return 0;
}