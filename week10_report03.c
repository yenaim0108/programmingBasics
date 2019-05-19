﻿#include <stdio.h>
/*
	char형으로 선언한 배열을 사용해서 10개의 방에 넣어준 알파벳들을 거꾸로 뒤집어서 넣어주고 출력하기
	1. char형 배열 11개를 선언한다. --> char str[11];

	2. 선언한 배열을 사용해서 총 11개의 방 中 10개의 방에 알파벳을 넣어준다.
	마지막 한 개의 방에는 문자열이 끝났다는 의미로 '\0'을 넣어준다
	--> str[10] = '\0'; (이때 0은 숫자 '영'이다.)

	3. str[0] ~ str[9]에 넣은 알파벳들을 넣어준다.
	ex> ​str[0] = 's';
	str[1] = 'e';
	str[2] = 'k';
	str[3] = 'i';
	str[4] = 'L';
	str[5] = 'e';
	str[6] = 'l';
	str[7] = 'p';
	str[8] = 'p';
	str[9] = 'A';

	이렇게 알파벳을 10개의 방 안에 넣어준다.
	<이 상태에서 str[0] ~ str[9]를 출력하면 sekiLelppA 이렇게 출력된다.>

	4. str[0] ~ str[9]에 넣어준 알파벳들을 거꾸로 뒤집어서 넣어준 뒤 출력한다.
	<단, 배열은 하나만 선언한다. 즉, 처음에 선언한 배열(char str[11];)만 사용한다.>

	ex> 3번에 지정한 것을 거꾸로 뒤집어서 넣어준 뒤 str[0] ~ str[9]를 출력하면 AppleLikes 이렇게 출력된다.
*/
// 임시저장공간을 하나 더 확보하고(tmp 확보 O) 뒤집는 방법
void main()
{
	//저장공간 확보 - 14개
	char str[11];     //10개의 알파벳 저장공간,문자
	int i;            //str[]의 인덱스 저장공간,숫자,정수
	int k = 9;        //str[]의 인덱스 저장공간,숫자,정수
	char tmp;        //str[]의 임시저장공간,문자
	//값지정
	str[0] = 'E';
	str[1] = 'V';
	str[2] = 'O';
	str[3] = 'L';
	str[4] = 'a';
	str[5] = 'n';
	str[6] = 'e';
	str[7] = 'Y';
	str[8] = 'm';
	str[9] = 'I';
	str[10] = '\0';

	for (i = 0; i < 5; i++)
	{
		tmp = str[i];
		str[i] = str[k];
		str[k] = tmp;

		k--;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%c ", str[i]);
	}
}