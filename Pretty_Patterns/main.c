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
    //          Inner loop counts up to stars and prints the number of stars
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
    //          Inner loop counts down from stars through one and prints the number of stars
    //      b.  Increment outer counter, decrement inner counter
    for(outer = 1; outer <= 10; outer++)
    {
        for(stars = 1; stars <= 11 - outer; stars++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    
    //  III. Print star pattern that is right aligned with point on bottom
    //      a.  Use a nested for loop,
    //          Outer loop counts up from one through ten each time and prints a new line after the inner loop
    //          First inner loop counts up to spaces and prints the number of spaces
    //          Second inner loop counts from stars down through one and prints the number of stars
    //      b.  Increment outer counter
    //          Increment spaces by one
    //          Decrement stars by one
    
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
    
    
    //  IV. Print star pattern that is right aligned with point on top
    //      a.  Use a nested for loop,
    //          Outer loop counts up from one through ten each time and prints a new line after the inner loop
    //          First inner loop counts down from spaces through one and prints the number of spaces
    //          Second inner loop counts up to stars and prints the number of stars
    //      b.  Increment outer counter
    //          Decrement spaces by one
    //          Increment stars by one
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
    return 0;
}
