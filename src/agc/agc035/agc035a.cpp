#include <bits/stdc++.h>
using namespace std;

int main()
{
	// string S;
	// long long int K;

	// cin >> S >> K;

	// long long int ans = 0;

	// if (S.length() == 1)
	// {
	// 	cout << K / 2 << endl;
	// 	return 0;
	// }

	// //全部同じか

	// bool zenbuonaji = true;
	// for (int i = 1; i < S.length(); i++)
	// {
	// 	if (S[i] != S[i - 1])
	// 	{
	// 		zenbuonaji = false;
	// 		break;
	// 	}
	// }

	// if (zenbuonaji == true)
	// {

	// 	ans = S.length() * K / 2;
	// 	cout << ans << endl;
	// 	return 0;
	// }

	// // 全部同じでないとき

	// // 両端異なるとき

	// int count = 1;

	// char Sbegin = S[0];
	// char Send = S[S.length() - 1];

	// if (Sbegin != Send)
	// {
	// 	for (int i = 1; i < S.length(); i++)
	// 	{
	// 		if (S[i] == S[i - 1])
	// 		{
	// 			count++;
	// 		}

	// 		if ((S[i] != S[i - 1]) || (i == S.length() - 1))
	// 		{
	// 			if (count != 1)
	// 			{
	// 				ans += (count / 2) * K;
	// 				count = 1;
	// 			}
	// 		}
	// 	}
	// }
	// else // 両端同じとき
	// {
	// 	int begincount = 1;
	// 	int endcount = 1;

	// 	int ibegin;
	// 	int iend;

	// 	for (int i = 1;; i++)
	// 	{
	// 		if (S[i] == S[i - 1])
	// 		{
	// 			begincount++;
	// 		}
	// 		else
	// 		{
	// 			ibegin = i;
	// 			break;
	// 		}
	// 	}

	// 	for (int i = S.length() - 2;; i--)
	// 	{
	// 		if (S[i] == S[i + 1])
	// 		{
	// 			endcount++;
	// 		}
	// 		else
	// 		{
	// 			iend = i + 1;
	// 			break;
	// 		}
	// 	}

	// 	for (int i = ibegin + 1; i < iend; i++)
	// 	{
	// 		if (S[i] == S[i - 1])
	// 		{
	// 			count++;
	// 		}

	// 		if ((S[i] != S[i - 1]) || (i == iend - 1))
	// 		{
	// 			if (count != 1)
	// 			{
	// 				ans += (count / 2) * K;
	// 				count = 1;
	// 			}
	// 		}
	// 	}

	// 	if (begincount > 1)
	// 	{
	// 		ans += begincount / 2;
	// 	}

	// 	if (endcount > 1)
	// 	{
	// 		ans += endcount / 2;
	// 	}

	// 	ans += (begincount + endcount) / 2 * (K - 1);
	// }

	// cout << ans << endl;

	return 0;
}
