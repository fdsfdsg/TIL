#include <stdio.h>
int grade[100004]; // grade[i] : �����ɻ� ������ i���� ����� ���� ���� ���
int N;
int main(void) {
    int T;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        for (int i = 0; i < N; i++) {
            int a, b;
            scanf("%d %d", &a, &b);
            grade[a] = b;
        }
        int cnt = 0;
        int tmpMinGrade = 100005;
        for (int i = 1; i <= N; i++) {
            if (tmpMinGrade > grade[i]) { // ������ �����ɻ� ����� ���� ������� ���� ��� �ּڰ����� �� ���� ������ �� ���� ���
                cnt++;
                tmpMinGrade = grade[i];
            }
        }
        printf("%d\n", cnt);
    }
}
