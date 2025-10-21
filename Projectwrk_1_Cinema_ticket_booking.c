#include <stdio.h>
    int main()
{
    int Premium_seat,Standard_seat,Economy__seat,choice;
    
    char book_choice;
    printf("Do you want to book the ticket? (y/n): ");
    scanf(" %c",&book_choice);

    if (book_choice=='y') {
        printf("Ticket booking in proccess...!\n");
    } else {
        printf("Booking cancelled.\n");
        return 0; // Exit program here if bookin cacelled
    }
    
    int num_seats;
    int total_price=0;

    printf("How many seats do you want to book? ");
    scanf("%d", &num_seats);
    printf("Please select a seat type:\n");
    printf("1. Premium 200 rupee \n");
    printf("2. Standard 150 rupee \n");
    printf("3. Economy 100 rupee \n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

        switch(choice) 
    {
        case 1:
            printf("You selected Premium seat.\n");
            total_price=200*num_seats;
            break;
        case 2:
            printf("You selected Standard seat.\n");
            total_price=150*num_seats;
            break;
        case 3:
            printf("You selected Economy seat.\n");
            total_price=100*num_seats;
            break;
        default:
            printf("Invalid choice.\n");
            return 0; // Exit if invalid choice
    }

    if (num_seats>5) {
        printf("You get a 5%% discount!\n");
        total_price=total_price-(total_price*5/100);
    }

    printf("Total price to pay: %d rupees\n", total_price);
       
    return 0;
}
