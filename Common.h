#pragma once
#include <iostream>

#ifndef __COMMON_H__
#define __COMMON_H__//pragma once가 지원 안할때 쓰는 문법==컴파일러 버전이 달라서 안되기 때문에 pragma once 와 기왕이면 같이 사용

#define MAX 52
extern int A[MAX];
extern int SplitCard[52]; // 전역 변수는 초기화 해주지마
extern int Player[26];
extern int Dealer[26];

#endif //ifdef 또는 ifndef는 endif와 짝꿍