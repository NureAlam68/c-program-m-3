// even number
// #include <stdio.h>
// int main() 
// {
//     for(int i = 1; i <= 10; i++)
//     {
//         if(i % 2 == 0)
//         {
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }


// odd number
// #include <stdio.h>
// int main() 
// {
//     for(int i = 1; i <= 10; i++)
//     {
//         if(i % 2 == 1)
//         {
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }

//  even and odd number
#include <stdio.h>
int main()
{
    for(int i = 1; i <= 10; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d is even\n", i);
        }
        else
        {
            printf("%d is odd\n", i);
        }
    }
    return 0;
}