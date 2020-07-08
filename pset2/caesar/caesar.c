#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <cs50.h>


int main(int argc, string argv[])
{
    if (argc == 2)
    {
        char *endp;
        long lkey;
        int errno = 0;

        lkey = strtol(argv[1], &endp, 10);
        if ((errno != 0) || (*argv[1] == 0) || (*endp != 0) || (lkey < 0) || (((int) lkey) != lkey) || argc >= 3)

            // this statement check to see the characters on argv[1] are all digits
        {
            return 1;
            printf("Usage: ./caesar key\n");
        }
        else // if the argv[1] is all digits then prompts the user for a plaintext
        {
            int key = atoi(argv[1]); // converts the key into an integer

            string plaintext = get_string("plaintext: ");
            printf("ciphertext: ");

            for (int i = 0, n = strlen(plaintext); i < n; i++)

                // goes thru each of the chars in plaintext and determines if is uppercase, lowercase or none.
            {
                if (isupper(plaintext[i]))
                {
                    printf("%c", (((plaintext[i] + key) - 65) % 26) + 65);

                    // it takes 65 and then sums it back to convert the character from the ASCII uppercase index and back
                }

                else if (islower(plaintext[i]))
                {
                    printf("%c", (((plaintext[i] + key) - 97) % 26) + 97);

                    // if the case is lower it takes 97 and then adds 97 back just to maintain the ASCII index.
                }

                else // if it not a lower case nor an uppercase, which means is a symbol then leave it like that.
                {
                    printf("%c", plaintext[i]);
                }
            }
            printf("\n");
            return 0;
        }
    }

    else if (argc == 1) // if the user doesnt prompt a key print no key to user
    {
        printf("NO KEY\n");
        return 1;
    }

    else if (argc >= 3) // if user prompts 3 or more keys into argv then prints error message regargind the usage
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}