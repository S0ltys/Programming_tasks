#include <stdio.h>

int main(void) 
{

    //   Option 1


    // int numbers, row, column , diagonal;

    // printf("Entern the numbers from 1 to 16 in any order: ");
    // scanf(" %d ", &numbers);


    // printf(" \t\n %16d ", numbers );
    
    // printf("Row sums: ", );
    
    // printf("Column sums: ", );
    
    // printf("Diagonal sums: ", );



    //    Option 2

    int n1 ,n2 , n3 ,n4 ,n5 ,n6 ,n7 ,n8 ,n9 ,n10 ,n11 , n12 , n13, n14 ,n15 , n16;


    printf("Entern the numbers from 1 to 16 in any order: ");

    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &n1 , &n2 , &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);

    printf("%d %d %d %d\t\n%d %d %d %d\t\n%d %d %d %d\t\n%d %d %d %d", n1 ,n2 , n3 ,n4 ,n5 ,n6 ,n7 ,n8 ,n9 ,n10 ,n11 , n12 , n13, n14 ,n15 , n16); 

    printf("\nRow sums: %d %d %d %d ", (n1 + n2 + n3 + n4),(n5 + n6 + n7 + n8), (n9 + n10 + n11 + n12), (n13 + n14 + n15 + n16) );
    
    printf("\nColumn sums: %d %d %d %d", (n1 + n5 + n9 + n13),(n2 + n6 + n10 + n14), (n3 + n7 + n11 + n15), (n4 + n8 + n12 + n16));

    printf("\nDiagonal sums: %d %d ", (n1 + n6 + n11 + n16 ), (n4 + n7 + n10 + n13) );


    //Option 3

    // int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;
    // int row1, row2, row3, row4;
    // int col1, col2, col3, col4;
    // int diag1, diag2;
    
    // // Get input
    // printf("Enter the numbers from 1 to 16 in any order: ");
    // scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
    //       &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, 
    //       &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);
    
    // // Calculate all sums first (before printing anything)
    // row1 = n1 + n2 + n3 + n4;
    // row2 = n5 + n6 + n7 + n8;
    // row3 = n9 + n10 + n11 + n12;
    // row4 = n13 + n14 + n15 + n16;
    
    // col1 = n1 + n5 + n9 + n13;
    // col2 = n2 + n6 + n10 + n14;
    // col3 = n3 + n7 + n11 + n15;
    // col4 = n4 + n8 + n12 + n16;
    
    // diag1 = n1 + n6 + n11 + n16;   // Top-left to bottom-right
    // diag2 = n4 + n7 + n10 + n13;   // Top-right to bottom-left
    
    // // Display the 4x4 grid
    // printf("\n%2d %2d %2d %2d\n", n1, n2, n3, n4);
    // printf("%2d %2d %2d %2d\n", n5, n6, n7, n8);
    // printf("%2d %2d %2d %2d\n", n9, n10, n11, n12);
    // printf("%2d %2d %2d %2d\n", n13, n14, n15, n16);
    
    // // Display sums
    // printf("\nRow sums: %d %d %d %d\n", row1, row2, row3, row4);
    // printf("Column sums: %d %d %d %d\n", col1, col2, col3, col4);
    // printf("Diagonal sums: %d %d\n", diag1, diag2);
    


    return 0;
}