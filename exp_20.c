#include <stdio.h>
#define MAX_BOOKS 100

struct Book
{
    char title[100];
    char author[100];
    float price;
};

int main()
{
    printf("Name: Harshit Beniwal \n");
    printf("Roll no.: 125113054 \n\n");
    
    int n;
    
    struct Book books[MAX_BOOKS];
    
    printf("Enter the number of books (max %d): ", MAX_BOOKS);
    scanf("%d", &n);
    
    if (n <= 0)
    {
        printf("Invalid number of books.\n");
        return 1;
    }
    if (n > MAX_BOOKS)
    {
        printf("Error: Cannot store more than %d books.\n", MAX_BOOKS);
        return 1;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("\n--- Enter Details for Book %d ---\n", i + 1);
        
        printf("Enter title: ");
        scanf(" %[^\n]", books[i].title);
        
        printf("Enter author: ");
        scanf(" %[^\n]", books[i].author);
        
        printf("Enter price: ");
        scanf("%f", &books[i].price);
    }
    
    printf("\n--- Books Priced Above 500 ---\n");
    
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (books[i].price > 500)
        {
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Price: %.2f\n\n", books[i].price);
            found = 1;
        }
    }
    
    if (found == 0)
    {
        printf("No books found with a price above 500.\n");
    }
    
    return 0;
}