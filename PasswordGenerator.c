#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char password[20];

char *InputValidate()
{
    int flag_1 = 1;
    // Terminate the program
    while (flag_1)
    {
        // Get the user inputs
        printf("\nEnter the password :");
        scanf("%s", &password);
        int len = strlen(password);

        // Check the password contains
        int flag_2 = 1;
        for (int i = 0; i < len; i++)
        {
            if (password[i] >= 48 && password[i] <= 57)
            {
                flag_2 = 0;
                // Check the password length
                if (6 <= len && len <= 9)
                {
                    flag_1 = 0;
                    return password;
                }
                else
                {
                    // Displaying Error for invalid length
                    printf("Error!. Your entered password length is wrong..\n");
                    
                }
                break;
            }
        }
        // Displaying Error for invalid charactors
        if (flag_2 == 1)
        {
            printf("A password should be contain at least ONE number..\n");
            break;
        }
    }
    printf("\n\n");
}


char *Pwd_Encription(char New_Password[])
{

    int len_UserPwd = strlen(New_Password);
    int newlength = len_UserPwd;

    for (int i = 0; i < newlength; i++)
    {
        char n = New_Password[i];
        int digit , remain;
        // Add 4 to each digit of the password

        // n charactor value > 5
        if (n >= 54 && n <= 57)
        {
            digit = (int)n - '0';
            digit += 4;

            remain = digit % 10;
            digit /= 10;

            // For add two digit in the array
            for (int j = newlength; j > i; j--)
                New_Password[j] = New_Password[j - 1];

            New_Password[i] = digit + '0';
            New_Password[i + 1] = remain + '0';

            newlength++;
            i++;
        }

        // n charactor value < 5
        else if (n >= 48 && n <= 53)
        {
            n += 4;
            New_Password[i] = n;
        }
        // Convert simple letters to capital letters
        else if (n >= 97 && n <= 122)
            New_Password[i] = n - 32;
    }

    // password all charactors take to next step
    for (int i = newlength; i >= 0; i--)
    {
        New_Password[i] = New_Password[i - 1];
    }
    // Add length value beginning of the password
    New_Password[0] = len_UserPwd + '0';

    // Add the * mark end
    New_Password[newlength + 1] = '*';

    return New_Password;
}

// reverse the Encryption password
char *reverse(char New_Password[])
{
    int Length = strlen(New_Password);

    for (int i = Length; i >= 0; i--)
        printf("%c", New_Password[i]);
}

void main()
{
    char *userValid = InputValidate();
    char *encript = Pwd_Encription(userValid);
    reverse(encript);
}
