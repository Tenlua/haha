#include <iostream>
#include <vector>

using namespace std;

// Hàm giải bài toán Knapsack
int knapsack(int W, vector<int>& wt, vector<int>& val, int n) {
    vector<vector<int>> dp(n + 1, vector<int>(W + 1));

    // Khởi tạo bảng dp
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (wt[i - 1] <= w)
                dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    return dp[n][W];
}

int main() {
    int n, W;
    cout << "Nhap so luong vat pham (n): ";
    cin >> n;
    cout << "Nhap trong luong toi da (W): ";
    cin >> W;

    vector<int> val(n);
    vector<int> wt(n);

    cout << "Nhap gia tri va trong luong cua tung vat pham:\n";
    for (int i = 0; i < n; i++) {
        cout << "Vat pham " << i + 1 << ": ";
        cin >> val[i] >> wt[i];
    }

    cout << "Gia tri lon nhat co the mang duoc: " << knapsack(W, wt, val, n) << endl;

    return 0;
}