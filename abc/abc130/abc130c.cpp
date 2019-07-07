#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int W, H, x, y;

	cin >> W >> H >> x >> y;

	double max;
	int method = 0;

	//左下
	if ((x <= (W/2)) && (y <= (H/2)))
	{
		//下
		if ((W * y) > (x * H))
		{
			max = (double)W * (double)y;
		}
		//左
		else if ((W * y) < (x * H))
		{
			max = (double)x * (double)H;
		}
		//面積が等しい
		else
		{
			max = (double)W * (double)y;
			method = 1;
		}
	}
	//右下
	else if ((x > (W/2)) && (y <= (H/2)))
	{
		//下
		if ((W * y) > ((W - x) * H))
		{
			max = (double)W * (double)y;
		}
		//右
		else if ((W * y) < ((W - x) * H))
		{
			max = ((double)W - (double)x) * (double)H;
		}
		//面積が等しい
		else
		{
			max = (double)W * (double)y;
		}
	}
	//左上
	else if ((x <= (W/2)) && (y > (H/2)))
	{
		//上
		if ((W * (H - y)) > (x * H))
		{
			max = (double)W * ((double)H - (double)y);
		}
		//左
		else if ((W * (H - y)) < (x * H))
		{
			max = (double)x * (double)H;
		}
		//面積が等しい
		else
		{
			max = (double)x * (double)H;
		}
	}
	//右上
	else if ((x > (W/2)) && (y > (H/2)))
	{
		//上
		if ((W * (H - y)) > ((W - x) * H))
		{
			max = (double)W * ((double)H - (double)y);
		}
		//右
		else if ((W * (H - y)) < ((W - x) * H))
		{
			max = ((double)W - (double)x) * (double)H;
		}
		//面積が等しい
		else
		{
			max = (double)W * ((double)H - (double)y);
		}
	}

	printf("%lf %d", max, method);
	//cout << max << " " << method << endl;

	return 0;
}
