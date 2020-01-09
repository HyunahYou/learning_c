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