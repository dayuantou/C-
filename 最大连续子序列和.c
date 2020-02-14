/*���� 1����״̬ dp[i] ��ʾ�� A[i] ��Ϊĩβ���������е����ͣ�������˵ A[i] ������Ϊ�������е�ĩβ����

�������� 2�������¿��ǣ���Ϊ dp[i] Ҫ���Ǳ����� A[i] ��β���������У���ôֻ�����������

 ������͵���������ֻ��һ��Ԫ�أ����� A[i] ��ʼ���� A[i] ��β��
 ������͵����������ж��Ԫ�أ�����ǰ��ĳ�� A[p] ��ʼ (p<i)��һֱ�� A[i] ��β��*/
 /*
    ������������к� 
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define maxn 10010
int A[maxn], dp[maxn];    // A[i] ������У�dp[i] ����� A[i] Ϊ��β���������е����� 

// ��ϴ�ֵ
int max(int a, int b) {
    return a>b ? a : b; 
} 

int main() {
    int n, i, k;
    printf("���������г��ȣ�"); 
    scanf("%d", &n);
    for(i=0; i<n; ++i) { 
		printf("���������У�");       // �������� 
        scanf("%d", &A[i]);
    }
    dp[0] = A[0];                // �߽�
    for(i=1; i<n; ++i) {
        // ״̬ת�Ʒ��� 
        dp[i] = max(A[i], dp[i-1] + A[i]);
    } 
    // ��������������к� 
    k = dp[0];
    for(i=1; i<n; ++i) {
        if(dp[i] > k) {
            k = dp[i];
        }
    }
    printf("��������е�ֵΪ%d\n", k);        // ��� 

    return 0;
}
