//09-4 예제1
//void Recursive (int num) {
//    if (num<=0)
//        return;
//    printf("Recursive call! %d\n", num);
//    Recursive(num-1);
//}
//
//int main (void) {
//    Recursive(3);
//    return 0;
//}

//09-4 예제2
//int Factorial (int n) {
//    if (n==0)
//        return 1;
//    else return n*Factorial(n-1);
//}
//
//int main (void) {
//    printf("1!=%d\n", Factorial(1));
//    printf("2!=%d\n", Factorial(2));
//    printf("3!=%d\n", Factorial(3));
//    printf("4!=%d\n", Factorial(4));
//    printf("9!=%d\n", Factorial(9));
//    return 0;
//}

//chapter10
//도전1
//int main (void) {
//    int num;
//    printf("정수 입력: ");
//    scanf("%d", &num);
//    printf("%d의 16진수 값: %X\n", num, num);
//    return 0;
//}

//도전2
//int main (void) {
//
//    int dan1, dan2, is;
//
//    printf("구구단을 출력할 두 개의 단 입력: ");
//    scanf("%d, %d", &dan1, &dan2);
//
//    if (dan1<dan2) {
//        for (; dan1<dan2+1; dan1++) {
//            for (is=1; is<10; is++)
//                printf("%d*%d=%d\n", dan1, is, dan1*is);
//            printf("\n");
//        }
//    } else for (; dan2<dan1+1; dan2++) {
//            for (int is=1; is<10; is++)
//                printf("%d*%d=%d\n", dan2, is, dan2*is);
//            printf("\n");
//        }
//    return 0;
//}

//도전3
//int main (void) {
//    int num1, num2;
//    printf("두 정수 입력: ");
//    scanf("%d, %d", &num1, &num2);
//    printf("두 수의 최대공약수: %d\n", GCD(num1, num2));
//    return 0;
//}
//
//int GCD (int g1, int g2) {
//    int gcd,GCD;
//
//    if (g1>g2) {
//        for (gcd=1; gcd<=g2; gcd++) {
//            if (g1%gcd==0 && g2%gcd==0)
//                GCD=gcd;
//        }
//    } else for (gcd=1; gcd<=g1; gcd++) {
//            if (g1%gcd==0 && g2%gcd==0)
//                GCD=gcd;
//        }
//    return GCD;
//}

//도전4
//int cal (int, int, int, int);
//
//int main (void) {
//    int k1, k2, k3;
//    printf("현재 당신이 소유하고 있는 금액: 3500원\n");
//    cal(k1, k2, k3,0);
//    printf("어떻게 구입하시겠습니까?");
//    return 0;
//}
//
//int cal (int c1, int c2, int c3, int s) {
//    s=3500;
//    for (c1=1; c1<s/700; c1++)
//        for (c2=1; c2<s/500; c2++)
//            for (c3=1; c3<s/400; c3++) {
//                if (c1*700+c2*500+c3*400==s) {
//                    printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개\n", c2, c1, c3);
//                    continue;
//                }
//
//            }
//}