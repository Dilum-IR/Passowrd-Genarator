# Encript-Passowrd-Genarator
DWQ agency is an intelligence agency. The agency is concerned about developing a C program application to enable encryption for all its passwords.


A password is a combination of text and numbers and should contain at least one
number.

  ● The minimum length of a password must be 6 characters and the maximum
  length is 9 characters.
  
  ● If a password where the length is not between 6 and 9, an error message should
  be displayed and re prompt the user until a valid input is entered.
  
  ● If a number is not available in a password the program should terminate by
  displaying an error message.

With encryption, a new password is generated based on several rules. You have been
asked to design a program application (name it as PasswordGenerator.c) to obtain the
password as an input, encrypt it and display it to the user.

The process of encryption is intended to work as follows:

  ● Add 4 to each digit of the password
  
  ● Convert all simple letters to capital letters
  
  ● Add the length of the string at the beginning of the password
  
  ● Add * to the end of the password
  
  ● Reverse the password such that it is read backwards.

E.g.: Suppose the password is Hello3, then after adding 4, password becomes Hello7.
Then
    So, the final password is  *7OOLLEH6.
