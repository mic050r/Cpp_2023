﻿#include <iostream>
#include <string>	
using namespace std;

// 여러 data들을 하나의 의미있는 구조체로 묶어서 관리
// 구조체, 클래스느느 일반적으로 단어의첫 글자로 대문자로 함
struct Student {
	int hakbun;
	string name;
	string tel;
	string department;
	string address;
};

int main(void) {
	// 자료형 : 자료형 : struct Student(C++에서는 Stdent만 써도 됨)
	struct Student stu1;
	// 성능 때문에 hakbun을 문자열로 하지 않음
	// 일반적으로 문자열은 정수형 데이터보다 많은 메모리 공간을 요구하며
	// 정수는 비교 연산을 한 번에 할 수 있으나, 문자열을 글자수 만큼 반복하여 비교해야함
	stu1.hakbun = 2214;
	stu1.name = "임지현";
	stu1.department = "소프트웨어과";
	stu1.tel = "010-2222-9999";
	stu1.address = "경기도 수원시";

	cout << "==========학생 정보==========" << endl;
	cout << "학번 : " << stu1.hakbun << endl;
	cout << "이름 : " << stu1.name << endl;
	cout << "학과 : " << stu1.department << endl;
	cout << "전화번호 : " << stu1.tel << endl;
	cout << "주소 : " << stu1.address << endl;
}



