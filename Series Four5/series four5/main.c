#include <stdio.h>



int main()
{
    int number,length,width,area,perimeter;
    char word;
    float perimeter_Circle, area_Circle,radius;

    printf("\n enter the number and a word : ");
    scanf("%d %c",&number,&word);


    if((number == 1) && (word == 'm'))
    {
        printf("\n the perimeter of a square is equal to one side * 4 ");
        printf("\n enter a side : ");
        scanf("%d",&length);
        area == length * 4;
        printf("square perimeter = %d",perimeter);

    }else if ((number == 1) && (word == 'n'))
    {
        printf("\n the area of a square is equal to one side * itself ");
        printf("\n enter a side: ");
        scanf("%d",&length);
        area = length * length;
        printf("square area = %d",area);

    }else if ((number == 2) && (word == 'n'))
    {
        printf("\n the perimeter of a rectangle is equal to (length + width) * 2 . ");
        printf("\n enter the length :");
        scanf("%d",&length);
        printf("\n enter the width :");
        scanf("%d",&width);
        perimeter = (length + width) * 2;
        printf("rectangle perimeter = %d",perimeter);

    }else if ((number == 2) && (word == 'm'))
    {
        printf("\n the area of a rectangle is equal to length * width ");
        printf("\n enter the length:");
        scanf("%d",&length);
        printf("\n enter the width:");
        scanf("%d",&width);
        area = length * width;
        printf("rectangle area = %d",area);

    }else if ((number == 3) && (word == 'n'))
    {
        printf("\n the perimeter of the circle is equal to 2 * radius * pi ");
        printf("\n enter the radius: ");
        scanf("%f", &radius);
        perimeter_Circle = 2 * radius * 3.14;
        printf("perimeter circle= %f ",perimeter_Circle);

    }else if ((number == 3) && (word == 'm'))
    {
        printf("\n the area of the circle is equal to radius * radius * pi ");
        printf("\n enter the radius: ");
        scanf("%f", &radius);
        area_Circle = 3.14 * radius * radius;
        printf("area circle= %f ",area_Circle);

    }else
    {
        printf("\n Wrong Input!");
    }
    return 0;
}