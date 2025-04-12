// stop loop without print 5
// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         if (i == 5)
//         {
//             break;
//         }
//         printf("%d\n", i);
//     }
//     return 0;
// }

// stop loop with print 5
// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d\n", i);
//         if (i == 5)
//         {
//             break;
//         }
//     }
//     return 0;
// }

// stop loop and print one number
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
        break;
    }
    return 0;
}