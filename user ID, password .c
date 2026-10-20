#include <stdio.h>
void main()
{
    int userID, password;
    printf("Enter user ID: ");
    scanf("%d", &userID);
    if (userID != 101)
    {
        printf("User not found");
    }
    else
    {
        printf("Enter password: ");
        scanf("%d", &password);
         if (password == 4321)
        {
            printf("Login successful");
        }
        else
        {
            printf("Incorrect password");
        }
    }
}
