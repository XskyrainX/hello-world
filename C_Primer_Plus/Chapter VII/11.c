#include <stdio.h>

#define ARTICHOKES 2.05
#define BEETS 1.15
#define CARROTS 1.09

#define DISCOUNT 0.05
#define CARTAGE_BASE 6.5
#define CARTAGE_EXTRA 14
#define CARTAGE_EXCEED 0.5

double show_price(int artichokes, int beets, int carrots);
double cartage(int artichokes_pounds,int beets_pounds,int carrots_pounds);
int main(void)
{
    int ch;
    int artichokes, beets, carrots;
    int artichokes_pounds, beets_pounds, carrots_pounds;
    artichokes = artichokes_pounds = beets = beets_pounds = carrots = carrots_pounds =0;

    printf("Enter a to purchase artichokes.\nb to purchase beets.\nc to purchase carrots.\nq to exit.\n");
    while ((ch = getchar()) != 'q')
    {
        switch (ch)
        {
        case 'a':
            printf("Please enter the pounds of artichokes: \n");
            scanf("%d", &artichokes_pounds);
            artichokes += artichokes_pounds;
            break;
        case 'b':
            printf("Please enter the pounds of beets: \n");
            scanf("%d", &beets_pounds);
            beets += beets_pounds;
            break;
        case 'c':
            printf("Please enter the pounds of carrots: \n");
            scanf("%d", &carrots_pounds);
            carrots += carrots_pounds;
            break;
        default:
            break;
        }
    }
    printf("Final money is %lf", show_price(artichokes, beets, carrots) + cartage(artichokes, beets, carrots));    

    return 0;
}
double show_price(int artichokes, int beets, int carrots)
{
    double temp;
    double discount;

    printf("artichoeks: %lf dollars per pounds, ordered %d pounds, total is $%lf.\n", ARTICHOKES, artichokes, ARTICHOKES * (double)artichokes);
    printf("beets: %lf dollars per pounds, ordered %d pounds, total is $%lf.\n", BEETS, beets, BEETS * (double)beets);
    printf("carrots: %lf dollars per pounds, ordered %d pounds, total is $%lf.\n", CARROTS, carrots, CARROTS * (double)carrots);
    
    temp = CARROTS * (double)carrots + BEETS * (double)beets + ARTICHOKES * (double)artichokes;
    printf("total price is %lf.\n", temp);

    if (temp <= 100)
    {
        ;
    }
    else
    {
        discount = DISCOUNT * temp;
    }
    printf("Discount is %lf, after discount total price is %lf.\n", discount, temp - discount);

    return temp - discount;
}
double cartage(int artichokes_pounds,int beets_pounds,int carrots_pounds)
{
    int num;
    double cartage = 0;

    num = artichokes_pounds + beets_pounds + carrots_pounds;
    if (num <= 5)
    {
        cartage = CARTAGE_BASE;
    }
    else if (num <= 20)
    {
        cartage = (double)CARTAGE_EXTRA;
    }
    else 
    {
        cartage = (double)CARTAGE_EXTRA + (double)(num - 20) * CARTAGE_EXCEED;
    }
    printf("Cartage is %lf.\n", cartage);
    return cartage;
}