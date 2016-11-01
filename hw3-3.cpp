/* 
 
  �Τ@�o���I��: 
  �Τ@�o���O�@�ӤK��Ʀr(���)������覡�A���T�ӯS�O�����ΤT���Y�������A�����h�O�ھڤU
  ���W�h���I:
  �M�S�O�����X�����ۦP         ���� 2000000 �� 
  �M�Y�����X�����ۦP          ����  200000 �� 
  �M�Y�����X�̫� 7 ��Ʀr�ۦP�A����   40000 �� 
  �M�Y�����X�̫� 6 ��Ʀr�ۦP�A����   10000 �� 
  �M�Y�����X�̫� 5 ��Ʀr�ۦP�A����    4000 �� 
  �M�Y�����X�̫� 4 ��Ʀr�ۦP�A����    1000 �� 
  �M�Y�����X�̫� 3 ��Ʀr�ۦP�A����     200 ��
 
  Copyright (c) 2016 by Hawk Sun
 
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

#define SPECIAL_NO_COUNT 3
#define FIRST_NO_COUNT 3
#define USER_NO_COUNT 100
#define RECEIPT_LEN 8
#define SECCESS 8
#define DIGITS_COMPARE_TIMES RECEIPT_LEN - 3 + 1

int main(void)
{
  char  specialNo[SPECIAL_NO_COUNT][9];
  char  firstNo[FIRST_NO_COUNT][9];
  char  userNo[USER_NO_COUNT][9];

  int   price[] = {200000, 40000, 10000, 4000, 1000, 200};
  int   loop1, loop2, loop3;
	int   total = 0;
  int   equalFlag;
  int   index;

	printf("�S�O�����X\n�п�J�Ĥ@�Ӹ��X:");
  scanf("%s", specialNo[0]);
	printf("�п�J�ĤG�Ӹ��X:");
  scanf("%s", specialNo[1]);
	printf("�п�J�ĤT�Ӹ��X:");
  scanf("%s", specialNo[2]);
	
	printf("�Y�����X\n�п�J�Ĥ@�Ӹ��X:");
  scanf("%s", firstNo[0]);
	printf("�п�J�ĤG�Ӹ��X:");
	scanf("%s", firstNo[1]);
	printf("�п�J�ĤT�Ӹ��X:");
	scanf("%s", firstNo[2]);

  printf("�ϥΪ̵o�����X\n");

	/*�S�O�������p��*/

  for (loop1 = 0; loop1 < USER_NO_COUNT; loop1++) {
    printf("�п�J�� %d �Ӹ��X:", loop1 + 1);
    scanf("%s", userNo[loop1]);

    for (loop2 = 0; loop2 < SPECIAL_NO_COUNT; loop2++) {
      if (0 == strcmp(userNo[loop1], specialNo[loop2])){
        total += 2000000;
        printf("�S�O������%d��\n", total);
      }
    }
  }
	
	/*�Y�������p��*/

  for (loop1 = 0; loop1 < USER_NO_COUNT; loop1++) {
    for (loop2 = 0; loop2 < FIRST_NO_COUNT; loop2++) {
      for (loop3 = 0; loop3 < DIGITS_COMPARE_TIMES; loop3++) {
          equalFlag = true;
          for (index = loop3; index <= RECEIPT_LEN -1 ; index++) {
            if (userNo[loop1][index] != firstNo[loop2][index]) {
              equalFlag = false;
              index = RECEIPT_LEN; // exit this loop
            }
          }
          if (equalFlag) { // all digits are equal
            total += price[loop3];
            printf("�Y������%d��\n", total);
            loop3 = DIGITS_COMPARE_TIMES; // exit the loop3, means to compare the next number
          }
        }
    }
  }
	
	printf("\n�`����%d��", total);
	
	return SECCESS;
}
