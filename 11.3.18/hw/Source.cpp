#include "stdio.h"
#include "string.h"

//void main()
//{
//	char str1[20] = "Hello";
//	char str2[20] = "World";
//	char str3[20];
//	strcpy(str3, str1);
//	strcat(str1, str2);
//	printf("%d", strlen(str1));
//
//}

//
//void main()
//{
//	char str[] = "This is a sample string";
//	char * pch;
//	pch = strrchr(str, 's');
//	printf("Last occurence of 's' found at %d \n", pch - str + 1);
//
//}

//void main()
//{
//	char s[10] = "string";
//	char p[10];
//	int length = strlen(s);
//	for (int i = 0; i < length; i++)
//		p[i] = s[length - i];
//	printf("%s", p);
//}

//void main()
//{
//	char arr[50] = "GeeksQuiz";
//	printf("%s", arr + 5);
//}

//void main()
//{
//	char MILEY[36];
//	strncpy(MILEY, "\nI CAME IN LIKE A WRECKING BALL!!!", 34);
//	printf("%30s\n", MILEY);
//}

//void main()
//{
//	char str[20];
//	printf("Nhap chu: ");
//	gets_s(str);
//	for (int i = 0; i <= strlen(str); i++)
//	{
//		if (str[i] >= 65 && str[i] <= 90)
//			str[i] = str[i] + 32;
//	}
//	printf("Ket qua:%s", str);
//}


//void main()
//{
//	char str1[] = "GeeksQuiz";
//	char str2[] = { 'G', 'e', 'e', 'k', 's', 'Q', 'u', 'i', 'z' };
//	int n1 = sizeof(str1) / sizeof(str1[0]);
//	int n2 = sizeof(str2) / sizeof(str2[0]);
//	printf("n1=%d,n2=%d", n1, n2);
//}

//int fun(char p[])
//{
//	if (p[0] == '\0') return 0;
//	int current = 1, i = 1;
//	while (p[current]){
//		if (p[current] != p[current - 1]){
//			p[i] = p[current];
//			i++;
//		}
//		current++;
//	}
//	p[i] = '\0';
//	return i;
//}
//
//int main(){
//	char str[] = "geekskeeg";
//	fun(str);
//	puts(str);
//	return 0;
//}

//void main()
//{
//	char str[] = "hello, world";
//	char str1[19];
//	strncpy(str1, str, 9);
//	printf("%s %d", str1, strlen(str1));
//
//}

void main()
{
	char s[10] = "string";
	char p[10];
	int length = strlen(s);
	for (int i = 0; i < length; i++)
		p[i] = s[length - i];
	printf("%s", p);
}