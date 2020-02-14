/*步骤 1：令状态 dp[i] 表示以 A[i] 作为末尾的连续序列的最大和（这里是说 A[i] 必须作为连续序列的末尾）。

　　步骤 2：做如下考虑：因为 dp[i] 要求是必须以 A[i] 结尾的连续序列，那么只有两种情况：

 这个最大和的连续序列只有一个元素，即以 A[i] 开始，以 A[i] 结尾。
 这个最大和的连续序列有多个元素，即从前面某处 A[p] 开始 (p<i)，一直到 A[i] 结尾。*/
 /*
    最大连续子序列和 
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define maxn 10010
int A[maxn], dp[maxn];    // A[i] 存放序列，dp[i] 存放以 A[i] 为结尾的连续序列的最大和 

// 求较大值
int max(int a, int b) {
    return a>b ? a : b; 
} 

int main() {
    int n, i, k;
    printf("请输入序列长度："); 
    scanf("%d", &n);
    for(i=0; i<n; ++i) { 
		printf("请输入序列：");       // 输入序列 
        scanf("%d", &A[i]);
    }
    dp[0] = A[0];                // 边界
    for(i=1; i<n; ++i) {
        // 状态转移方程 
        dp[i] = max(A[i], dp[i-1] + A[i]);
    } 
    // 求最大连续子序列和 
    k = dp[0];
    for(i=1; i<n; ++i) {
        if(dp[i] > k) {
            k = dp[i];
        }
    }
    printf("最大子序列的值为%d\n", k);        // 输出 

    return 0;
}
