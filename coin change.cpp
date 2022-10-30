int coinChange(vector<int> const &S, int sum)
{
    if (sum == 0) {
        return 0;
    }
    if (sum < 0) {
        return INT_MAX;
    }
    int coins = INT_MAX;
    for (int i: S)
    {
        int result = coinChange(S, sum - i);
        if (result != INT_MAX) {
            coins = min(coins, result + 1);
        }
    }
    return coins;
}
