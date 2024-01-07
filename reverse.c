#include <stdio.h>
#include <string.h>

int main()
{
    char reverse[20] = "jagannath";

    int oglen = strlen(reverse);
    int len= oglen;
    for (int i = 0; i < oglen; i++)
    {
        char temp = reverse[len - 1]; // Accessing character at the end
       

        printf("%c", temp); // Printing each character
         len--; // Decrementing length to move to the previous character
    }

    return 0;
}







// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char reverse[20] = "jagannath";

//     int len = strlen(reverse);
//     int originalLen = len; // Store the original length

//     for (int i = 0; i < originalLen; i++) // Use originalLen for iteration
//     {
//         char temp = reverse[len - 1]; // Accessing character at the end
//         len--; // Decrementing length to move to the previous character

//         printf("%c", temp); // Printing each character
//     }

//     return 0;
// }
