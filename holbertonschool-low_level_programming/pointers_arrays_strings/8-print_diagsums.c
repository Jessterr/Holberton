#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals
 * of a square matrix of integers.
 * @a: points to array
 * @size: number of rows and columns
 * tlbr: the diagonal line from top left to bottom right
 * trbl: the diagonal line from top right to bottom left
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int tlbr_sum, trbl_sum, diag_tldr, diag2_trbl;

	tlbr_sum = 0;
	trbl_sum = 0;

	for (diag_tldr = 0; diag_tldr < size; diag_tldr++)
	{
		tlbr_sum = tlbr_sum + a[diag_tldr * size + diag_tldr];
	}

	for (diag2_trbl = size - 1; diag2_trbl >= 0; diag2_trbl--)
	{
		trbl_sum += a[diag2_trbl * size + (size - diag2_trbl - 1)];
	}

	printf("%d, %d\n", tlbr_sum, trbl_sum);
}
