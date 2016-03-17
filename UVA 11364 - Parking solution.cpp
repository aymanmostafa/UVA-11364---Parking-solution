//============================================================================
// Name        : ayman.cpp
// Author      : Ayman Mostafa
// Email       : ayman93live@hotmail.com
// Version     : v5.0
//============================================================================

#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>

using namespace std;

#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

void fastInOut();
//##########################################################################################
//###################################MAIN FUNCTION##########################################
//##########################################################################################
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "rt", stdin);
//freopen("output.txt", "wt", stdout);
#endif
	fastInOut();
//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
// 11364 - Parking
	int t, n, sum, max, min, x;
	cin >> t;
	while (t--) {
		cin >> n;
		max = -1e9;
		min = 1e9;
		sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> x;
			if (x > max)
				max = x;
			if (x < min)
				min = x;
			sum += x;
		}
		sum /= n;
		cout << (abs(sum - max) * 2) + (abs(sum - min) * 2) << endl;
	}
}
void fastInOut() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
}
