// Laba_OOP2.cpp: ���������� ����� ����� ��� ����������� ����������.
//
#include "stdafx.h"
#include <iostream>
#include "Stebel.h"
#include "Tsvetok.h"
#include "Roza.h"
#include "Hrizantema.h"
#include "Upakovka.h"

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Rus");
	Roza rose; 
	Roza flower;
	flower.setSize(21);
	flower.setName("����");
	flower.setColor("�������");
	flower.print();


	/*flower.setName("�������");
	flower.getName();
	flower.setSize(25);
	flower.getSize();*/
	system("pause");
	return 0;
}

