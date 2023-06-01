// whileTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 1~10까지 while문으로 출력해보기

#include <iostream>

//int main()
//{
//    int loopCount = 1;
//    while (10 >= loopCount )
//    {
//        printf("몇 번째 돌고 있는가 %d \n", loopCount);
//        loopCount += 1;
//    }
//
//    int loopCount = 1;
//    while (10 >= loopCount)
//    {
//        printf("★ ★ ★ ★ ★\n", loopCount);
//        loopCount += 1;
//    }
//}

// [과제] -while 8개정도로 할 수 있음
//유저에게 정사각형의 사이즈를 입력 받아서 ★ 로 출력하는(정사각형) 프로그램 만들기
//-유저 입력은 3 이상 ~ 10 이하로만 입력한다

int main() {

	
	char num;

	printf("3 ~ 10 을 입력하세요");
	scanf_s("%c", &num);

	bool isNumber = ('0' <= num && num <= '10');
	
    
	if (isNumber)
	{
		printf("★★★★★★★★★★\n");
		printf("★★★★★★★★★★\n");
		printf("★★★★★★★★★★\n");
		printf("★★★★★★★★★★\n");
		printf("★★★★★★★★★★\n");
		printf("★★★★★★★★★★\n");
		printf("★★★★★★★★★★\n");
		printf("★★★★★★★★★★\n");
		printf("★★★★★★★★★★\n");


	}
	

	    
}

