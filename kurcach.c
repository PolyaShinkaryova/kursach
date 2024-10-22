#include <locale.h>
#include <stdio.h>
#include <conio.h>
int main() 
{
	setlocale(LC_CTYPE, "RUS");
	char pair [] = "пара";
	char sudya [] = "судья";
	char kor [] = "короткая";
	char obyaz [] = "обязательная";
	char proizv [] = "произвольная";
	char str[] = "---------------------------------------------------------------------------------------------------------------------------------";

	printf("%s-\n", str);
	printf("      |%39s1|%39s2|%39s3|\n", sudya, sudya, sudya);
	printf("      |--------------------------------------------------------------------------------------------------------------------------|\n");
	printf("      | %s | %s | %s | %s | %s | %s | %s | %s | %s |\n", kor, obyaz, proizv, kor, obyaz, proizv, kor, obyaz, proizv);
	printf("%s|\n", str);
	printf("|%-s1|    5.2   |      7.5     |      8.4     |    6.0   |     4.5      |      7.2     |    6.1   |      7.9     |      9.5     |\n", pair);
	printf("%s|\n", str);
	printf("|%-s2|    8.7   |      3.6     |     10.0     |    7.0   |     4.6      |      6.9     |   10.0   |      2.6     |      9.0     |\n", pair);
	printf("%s|\n", str);
	printf("|%-s3|    2.6   |      7.3     |      4.7     |    3.0   |     7.9      |      5.1     |    3.0   |      8.1     |      4.9     |\n", pair);
	printf("%s|\n", str);
	printf("|%-s4|    7.4   |      6.8     |      9.3     |    6.9   |     7.0      |     10.0     |    7.9   |      7.0     |      9.5     |\n", pair);
	printf("%s|\n", str);
	printf("|%-s5|   10.0   |      5.4     |      6.8     |    9.2   |     6.0      |      7.2     |    9.5   |      5.8     |      7.2     |\n", pair);
	printf("%s-\n", str);
}