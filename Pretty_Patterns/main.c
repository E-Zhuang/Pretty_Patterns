//
//  main.c
//  Pretty_Patterns
//
//  Created by Zhuang, Emily on 11/6/17.
//  Copyright © 2017 Zhuang, Emily. All rights reserved.
//


//  1. Integer counter for stars (counter for inner loop)
//     Integer counter for spaces (counter for inner loop)
//     Integer counter for outer loop



#include <stdio.h>

int main()
{
    //2. Declare variables
    int spaces;
    int stars;
    int outer;
    
    //3.
    //  I. Print star pattern that is left aligned and the point is on top
    //      4.
    //      a.  Use a nested for loop,
    //          Outer loop counts up from one through ten each time and prints a new line after the inner loop
    //          Inner loop counts up from one until outer and prints the number of stars
    //      b.  Increment both counters
    for(outer = 1; outer <= 10; outer++)
    {
        for(stars = 1; stars <= outer; stars++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    
    putchar('\n');
    
    
    //  II. Print star pattern that is left aligned with point on bottom
    //      a.  Use a nested for loop,
    //          Outer loop counts up from one through ten each time and prints a new line after the inner loop
    //          Inner loop counts up from 1 until stars equals 11 - outer and print respective stars
    //      b.  Increment both counters
    for(outer = 1; outer <= 10; outer++)
    {
        for(stars = 1; stars <= 11 - outer; stars++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    
    putchar('\n');
    
    //  III. Print star pattern that is right aligned with point on bottom
    //      a.  Use a nested for loop,
    //          Outer loop counts up from one through ten each time and prints a new line after the inner loop
    //          First inner loop up from one until spaces equals outer - 1
    //          Second inner loop counts up from one until stars equals 11 - outer
    //      b.  Print a star or space in each inner loop
    
    for(outer = 1; outer <= 10; outer++)
    {
        for(spaces = 1; spaces < outer; spaces++)
        {
            putchar(' ');
        }
        
        for(stars = 1; stars <= 11 - outer; stars++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    
    putchar('\n');
    
    //  IV. Print star pattern that is right aligned with point on top
    //      a.  Use a nested for loop,
    //          Outer loop counts up from one through ten each time and prints a new line after the inner loop
    //          First inner loop counts up from one until spaces equals 10 - outer
    //          Second inner loop counts up from one until stars equals outer
    //      b.  Print a star or space in each inner loop
    for(outer = 1; outer <= 10; outer++)
    {
        for(spaces = 1; spaces <= 10 - outer; spaces++)
        {
            putchar(' ');
        }
        
        for(stars = 1; stars <= outer; stars++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    
    putchar('\n');
    
    return 0;
}
