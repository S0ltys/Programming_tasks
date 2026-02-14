#include <stdio.h>



int main(void)
{

      // First WaY

//     int state, grade;
    
    
//     printf("Enter numerical grade: ");
//     scanf("%d", &grade);

//     if (grade < 0 || grade > 100)  {
//         printf("Grade can't be less than 0 and larger 100");
   
//     } else if (grade >= 90 && grade <= 100 ) {
//         state = 1;
    
//     } else if( grade >= 80 && grade <= 89) {
//         state = 2;
    
//     } else if (grade >= 70 && grade <= 79) {
//         state = 3;
    
//     } else if (grade >= 60 && grade <= 69 ) {
//         state = 4;

//     } else if (grade >= 0 && grade <= 59) {
//         state = 5;
//     }


//    switch (state) {
//         case 1: printf("Letter grade: A");    break;
//         case 2: printf("Letter grade: B");    break;
//         case 3: printf("Letter grade: C");    break;
//         case 4: printf("Letter grade: D");    break;
//         case 5: printf("Letter grade: F");    break;
//      }


//     return 0;
// }

    // Second WaY

    int grade , state;
    
    printf("Enter numerical grade: ");
    scanf("%d", &grade);
    
    if (grade < 0 || grade > 100)  {
        printf("Grade can't be less than 0 and larger 100");
        
    } else if (grade >= 90) {
        state = 1;
        
    } else if( grade >= 80 ) {
        state = 2;
        
    } else if (grade >= 70) {
        state = 3;
        
    } else if (grade >= 60 ) {
        state = 4;
        
    } else if (grade >= 0 ) {
        state = 5;
    }
    
    switch (state) {
        case 1: printf("Letter grade: A");    break;
        case 2: printf("Letter grade: B");    break;
        case 3: printf("Letter grade: C");    break;
        case 4: printf("Letter grade: D");    break;
        case 5: printf("Letter grade: F");    break;
    }
    
    return 0;    
}




    // first option ( bad option)

    // } else {
    //     printf("Grade can't be less than 0 and larger 100");
    // }
     
    // second option ( bad option)

    // } else if  (grade < 0 || grade > 100) {
    //     state = 6;
    // }

 