#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

char* tolowerstr(char str[20]) {
	char ret[20], i;
	for (i = 0; str[i]; i++) {
		ret[i] = tolower(str[i]);
	}
	ret[i] = '\0';
	return(ret);
};

int main(void) {
	system("chcp 1251");
	char i;
	struct student {
		char famil[20], name[20], facult[20];
		int Nomzach;
	} stud[3] = {
		{"Felman","Bleb","OFT",1337},
		{"Gigaev","Mima","MVD",2020},
		{"Kiryaev","Kurill","ZOV",2048}
	};
	for (i = 0; i< 3; i++) {
		printf("C������ %s %s ��������� �� ���������� %s, ����� �������� ������ %d \n", stud[i].famil, stud[i].name,stud[i].facult, stud[i].Nomzach);
	}
	printf("\n�������� ������� ������:\n1 - ����� �� �������\n2 - ����� �� �����\n3 - ����� �� ����������\n4 - ����� �� ������ �������� ������\n");
	char mode = _getch();
	switch (mode) {
	case '1':{
		printf("\n������� �������: ");
		char search[20];
		scanf("%20s", &search);
		strcpy(search,tolowerstr(search));
		for (i = 0; i< 3; i++) {
			if (strcmp(tolowerstr(stud[i].famil), search) == 0) {
				printf("C������ %s %s ��������� �� ���������� %s, ����� �������� ������ %d \n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			}
		}
		break;
	}
	case '2':{
		printf("\n������� ���: ");
		char search[20];
		scanf("%20s", &search);
		strcpy(search, tolowerstr(search));
		for (i = 0; i< 3; i++) {
			if (strcmp(tolowerstr(stud[i].name), search) == 0) {
				printf("C������ %s %s ��������� �� ���������� %s, ����� �������� ������ %d \n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			}
		}
		break;
	}
	case '3':{
		printf("\n������� ���������: ");
		char search[20];
		scanf("%20s", &search);
		strcpy(search, tolowerstr(search));
		for (i = 0; i< 3; i++) {
			if (strcmp(tolowerstr(stud[i].facult), search) == 0) {
				printf("C������ %s %s ��������� �� ���������� %s, ����� �������� ������ %d \n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			}
		}
		break;
	}
	case '4':
	default: {
		printf("\n������� ����� �������� ������: ");
		int search;
		scanf("%i", &search);
		for (i = 0; i< 3; i++) {
			if (stud[i].Nomzach == search) {
				printf("C������ %s %s ��������� �� ���������� %s, ����� �������� ������ %d \n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			}
		}
		break;
	}

	}
}
