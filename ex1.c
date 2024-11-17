/******************
Name: Gal Refaeli
ID: 318876299
Assignment: Ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {


	// First task:
	// What bit
	printf("What bit:\n");
	/*Scan two integers (representing number and a position)
	Print the bit in this position. */

	int Original_num1,pos1,kind;
	int mask1 = 0x1;

	printf("Please enter a number:\n");
	scanf("%d", &Original_num1); // The number the member wants
	printf("Please enter a position:\n");
	scanf("%d", &pos1); // The position the member wants
	mask1 = mask1 << pos1; // I shift the "1" left, to the location the member wants
	kind = (Original_num1 & mask1); // I reset all the bits to "0", except the one the member wanted to check
	kind = kind >> pos1; // I push back the position that the member picked to be the LSB
	printf("The bit in position %d of the number %d is: %d\n", pos1, Original_num1, kind);



	// Second task:
	// Set bit
	printf("\nSet bit:\n");
	/*Scan two integers (representing number and a position)
	Make sure the bit in this position is "on" (equal to 1)
	Print the output
	Now make sure it's "off" (equal to 0)
	Print the output */

	int Original_num2,pos2,num2_one,num2_zero;
	int mask2 = 0x1;

	printf("Please enter a number:\n");
	scanf("%d", &Original_num2); // The number the member wants
	printf("Please enter a position:\n");
	scanf("%d", &pos2); // The position the member wants
	mask2 = mask2 << pos2;
	num2_one = Original_num2 | mask2; // num2_one is the number with bit 1 at the end
	printf("Number with bit %d set to 1: %d\n", pos2, num2_one);
	mask2 = ~mask2;
	num2_zero = Original_num2 & mask2; // num2_zero is the number with bit 0 at the end
	printf("Number with bit %d set to 0: %d\n", pos2, num2_zero);



	// Third task
	// Toggle bit
	printf("\nToggle bit:\n");
	/*Scan two integers (representing number and a position)
	Toggle the bit in this position
	Print the new number */

	int Original_num3,pos3,num3_Toggle;
	int mask3 = 0x1;

	printf("Please enter a number:\n");
	scanf("%d", &Original_num3); // The number the member wants
	printf("Please enter a position:\n");
	scanf("%d", &pos3); // The position the member wants
	mask3 = mask3 << pos3; // I put the mask in the location the member wants
	num3_Toggle = Original_num3 ^ mask3;
	printf("Number with bit %d toggled: %d\n", pos3, num3_Toggle);



	// Fourth task
	// Even - Odd
	printf("\nEven - Odd:\n");
	/* Scan an integer
	If the number is even - print 1, else - print 0. */

	int Original_num4,num4_Answer,mask4_new;
	int mask4 = 0x1;

	printf("Please enter a number:\n");
	scanf("%d", &Original_num4); // The number the member wants
	mask4_new = Original_num4 & mask4; // The "mask4_new" will contain the same LSB as the original number
	num4_Answer = mask4_new ^ mask4;
	printf("%d\n",num4_Answer);



	// Fifth task
	// 3, 5, 7, 11
	printf("\n3, 5, 7, 11:\n");
	/* Scan two integers in octal base
	sum them up and print the result in hexadecimal base
	Print only 4 bits, in positions: 3,5,7,11 in the result. */

	int First_oct,Second_oct,Sum,Answer_bits;
	int mask5=0x1;
	int Bit_3,Bit_5,Bit_7,Bit_11;
	int mask_Bits = 0x8A8; // A mask which I place "1" in the 3,5,7,11 bits, and "0" in the rest

	printf("Please enter the first number (octal):\n");
	scanf("%o", &First_oct);
	printf("Please enter the second number (octal):\n");
	scanf("%o", &Second_oct);
	Sum = First_oct + Second_oct;
	printf("The sum in hexadecimal: %X\n", Sum); // Printing the sum of both the octal numbers, in hexadecimal
	Answer_bits = Sum & mask_Bits; /* "Answer_bits" will be the integer where all the bits are "0"
					except the places: 3,5,7,11 which will be the bits in those places of the hexadecimal number */
	Bit_3 = (Answer_bits >> 3) & (mask5);
	Bit_5 = (Answer_bits >> 5) & (mask5);
	Bit_7 = (Answer_bits >> 7) & (mask5);
	Bit_11 = (Answer_bits >> 11) & (mask5);
	printf ("The 3,5,7,11 bits are: %d%d%d%d\n", Bit_3, Bit_5, Bit_7, Bit_11);



	printf("Bye!\n");

	return 0;
}
