#include <stdio.h>
#include <math.h>

int main() {
	int x1, y1, r1, x2, y2, r2, t, i;
	double d;

	scanf("%d", &t);

	for (i=0; i<t; i++) {
		scanf("%d%d%d%d%d%d", &x1, &y1, &r1, &x2, &y2, &r2);
		d = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		if (x1==x2 && y1==y2 && r1==r2) printf("-1\n");
		else if (r1+r2<d || r1+d<r2 || r2+d<r1) printf("0\n");
		else if (r1==d+r2 || r2==d+r1 || r1+r2==d) printf("1\n");
		else printf("2\n");
	}

	return 0;
}
