// 1차원 배열, if문
//#include <stdio.h>
// 두 변수 중에 가장 큰 수
//int main()
//{
//	int one = 1, two = 2;
//	int max = 0;
//
//	if (one > two) max = one;
//	else
//		max = two;
//
//	printf("max = %d\n", max);
//
//	return 0;
//}

//#include <stdio.h>
// 세 변수 중에 가장 큰 수
//int main()
//{	// 값 바꿔서 실행해보기
//	int one = 1, two = 3, three = 2;
//	int max = 0;
//
//	if (one > two) {
//		if (one > three)
//			max = one;
//		else
//			max = three;
//	}
//	else {
//		if (two > three)
//			max = two;
//		else
//			max = three;
//	}
//	printf("max = %d\n", max);
//
//	return 0;
//}

//#include <stdio.h>
// N개 변수 중에 가장 큰 수
//int main()
//{	// array(=배열)의 약자로 arr이나 a를 사용
//	int arr[3] = { 1, 3, 2 };
//	int max = arr[0];
//
//	for (int i = 1; i < 3; i++) {
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//
//	return 0;
//}

// 1차원 배열, if문 문제1
//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = { 1, 3, 6, 4, 2 };
//	int max = arr[0];
//	int min = arr[0];
//	int sum = arr[0];
//	double avg = 0;
//
//	for (int i = 1; i < 5; i++) {
//		if (max < arr[i])
//			max = arr[i];
//		if (min > arr[i])
//			min = arr[i];
//
//		sum += arr[i];
//	}
//
//	avg = (double)sum / 5;
//
//	printf("최대값 : %d\n", max);
//	printf("최소값 : %d\n", min);
//	printf("총합 : %d\n", sum);
//	printf("평균 : %.2lf\n", avg);
//
//	return 0;
//}

// 1차원 배열 문제2
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1, 1, 4, 5, 6, 2, 3, 3, 4, 1 };
//	int num[7] = {};	// 0번째 인덱스는 쓰지 않고, 1-6번째 인덱스만 씀
//
//	// * num의 인덱스를 arr[i]로 함으로써, 주사위 눈이 나온 횟수를 증가시킴 (if문을 쓸 필요 X)
//	for (int i = 0; i < 10; i++) {
//		num[arr[i]] += 1;
//	}
//
//	printf("각 주사위 눈이 나온 횟수\n");
//	for (int i = 1; i <= 6; i++) {
//		printf("%d : %d번\n", i, num[i]);
//	}
//
//	return 0;
//}

// 2차원 배열
//#include <stdio.h>
//
//int main()
//{
//	char arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr2d[5][4] = {
//	   // [0] [1] [2] [3]
//		{ 662, 7, 4, 74 },		// arr2d[0]
//		{ 8, 396, 299, 95 },	// arr2d[1]
//		{ 66, 73, 86, 0 },		// arr2d[2]
//		{ 116, 26, 586, 42 },	// arr2d[3]
//		{ 84, 7, 41, 11 }		// arr2d[4]
//	};
//
//	// 2차원 배열의 요소를 하나씩 출력
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("%3d ", arr2d[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 2차원 배열 문제1
//#include <stdio.h>
//
//int main()
//{
//	int arr[3][3] = {
//		{ 2, 4, 6 },
//		{ 8, 10, 12 },
//		{ 14, 16, 18 }
//	};
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%3d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
