#include <stdio.h>
#include <algorithm>
using namespace std;
int N, C;
int x[200005];
 
bool isPossibleDist(int dist) { // ������ ������ �Ÿ��� dist�� �ϴ� ���� ��������
    int cnt = 1;
    int cur = x[0];
    for (int i = 1; i < N; i++) {
        if (x[i] - cur >= dist) {
            cnt++;
            cur = x[i]; // x[i]�� ������ ��ġ
        }
    }
    return cnt >= C;
}
int main(void) {
    scanf("%d %d", &N, &C);
    for (int i = 0; i < N; i++) 
        scanf("%d", &x[i]);
    sort(x, x + N);
    int lo = 1;
    int hi = 1000000000; // lo~hi-1 �ȿ� ���� ����
    while (hi > lo + 1) { // �̺�Ž��
        int mid = (lo + hi) / 2;
        if (isPossibleDist(mid)) // ������ �� �Ÿ��� mid�� �� C�� �̻� ��ġ �����ϴٸ�
            lo = mid; // �Ÿ��� �÷��� ����
        else // ������ �� �Ÿ��� mid�� �� C�� �̻� ��ġ�� �� ���ٸ�
            hi = mid; // �Ÿ��� ����
    }
    printf("%d", lo);
}
