#include <bits/stdc++.h>
using namespace std;

int ans[10][10][10];
int main (){

ans[2][2][1] = 1;
ans[2][2][2] = 2;
ans[2][2][3] = 3;
ans[2][2][4] = 3;
ans[2][2][5] = 3;
ans[2][2][6] = 3;
ans[2][2][7] = 3;
ans[2][2][8] = 3;
ans[2][3][1] = 1;
ans[2][3][2] = 2;
ans[2][3][3] = 4;
ans[2][3][4] = 4;
ans[2][3][5] = 5;
ans[2][3][6] = 5;
ans[2][3][7] = 5;
ans[2][3][8] = 5;
ans[2][4][1] = 2;
ans[2][4][2] = 4;
ans[2][4][3] = 6;
ans[2][4][4] = 6;
ans[2][4][5] = 6;
ans[2][4][6] = 6;
ans[2][4][7] = 6;
ans[2][4][8] = 6;
ans[2][5][1] = 2;
ans[2][5][2] = 4;
ans[2][5][3] = 6;
ans[2][5][4] = 7;
ans[2][5][5] = 8;
ans[2][5][6] = 8;
ans[2][5][7] = 8;
ans[2][5][8] = 8;
ans[2][6][1] = 2;
ans[2][6][2] = 6;
ans[2][6][3] = 8;
ans[2][6][4] = 9;
ans[2][6][5] = 10;
ans[2][6][6] = 10;
ans[2][6][7] = 10;
ans[2][6][8] = 10;
ans[3][2][1] = 1;
ans[3][2][2] = 2;
ans[3][2][3] = 4;
ans[3][2][4] = 4;
ans[3][2][5] = 5;
ans[3][2][6] = 5;
ans[3][2][7] = 5;
ans[3][2][8] = 5;
ans[3][3][1] = 1;
ans[3][3][2] = 3;
ans[3][3][3] = 5;
ans[3][3][4] = 6;
ans[3][3][5] = 7;
ans[3][3][6] = 7;
ans[3][3][7] = 7;
ans[3][3][8] = 8;
ans[3][4][1] = 2;
ans[3][4][2] = 4;
ans[3][4][3] = 8;
ans[3][4][4] = 8;
ans[3][4][5] = 10;
ans[3][4][6] = 10;
ans[3][4][7] = 10;
ans[3][4][8] = 10;
ans[3][5][1] = 2;
ans[3][5][2] = 4;
ans[3][5][3] = 9;
ans[3][5][4] = 11;
ans[3][5][5] = 12;
ans[3][5][6] = 12;
ans[3][5][7] = 12;
ans[3][5][8] = 13;
ans[3][6][1] = 2;
ans[3][6][2] = 6;
ans[3][6][3] = 10;
ans[3][6][4] = 12;
ans[3][6][5] = 14;
ans[3][6][6] = 14;
ans[3][6][7] = 15;
ans[3][6][8] = 16;
ans[4][2][1] = 2;
ans[4][2][2] = 4;
ans[4][2][3] = 6;
ans[4][2][4] = 6;
ans[4][2][5] = 6;
ans[4][2][6] = 6;
ans[4][2][7] = 6;
ans[4][2][8] = 6;
ans[4][3][1] = 2;
ans[4][3][2] = 4;
ans[4][3][3] = 8;
ans[4][3][4] = 8;
ans[4][3][5] = 10;
ans[4][3][6] = 10;
ans[4][3][7] = 10;
ans[4][3][8] = 10;
ans[4][4][1] = 4;
ans[4][4][2] = 6;
ans[4][4][3] = 12;
ans[4][4][4] = 12;
ans[4][4][5] = 12;
ans[4][4][6] = 12;
ans[4][4][7] = 12;
ans[4][4][8] = 12;
ans[4][5][1] = 4;
ans[4][5][2] = 8;
ans[4][5][3] = 12;
ans[4][5][4] = 14;
ans[4][5][5] = 16;
ans[4][5][6] = 16;
ans[4][5][7] = 16;
ans[4][5][8] = 16;
ans[4][6][1] = 4;
ans[4][6][2] = 8;
ans[4][6][3] = 14;
ans[4][6][4] = 18;
ans[4][6][5] = 20;
ans[4][6][6] = 20;
ans[4][6][7] = 20;
ans[4][6][8] = 20;
ans[5][2][1] = 2;
ans[5][2][2] = 4;
ans[5][2][3] = 6;
ans[5][2][4] = 7;
ans[5][2][5] = 8;
ans[5][2][6] = 8;
ans[5][2][7] = 8;
ans[5][2][8] = 8;
ans[5][3][1] = 2;
ans[5][3][2] = 4;
ans[5][3][3] = 9;
ans[5][3][4] = 11;
ans[5][3][5] = 12;
ans[5][3][6] = 12;
ans[5][3][7] = 12;
ans[5][3][8] = 13;
ans[5][4][1] = 4;
ans[5][4][2] = 8;
ans[5][4][3] = 12;
ans[5][4][4] = 14;
ans[5][4][5] = 16;
ans[5][4][6] = 16;
ans[5][4][7] = 16;
ans[5][4][8] = 16;
ans[5][5][1] = 4;
ans[5][5][2] = 8;
ans[5][5][3] = 14;
ans[5][5][4] = 16;
ans[5][5][5] = 18;
ans[5][5][6] = 19;
ans[5][5][7] = 20;
ans[5][5][8] = 21;
ans[5][6][1] = 4;
ans[5][6][2] = 10;
ans[5][6][3] = 16;
ans[5][6][4] = 20;
ans[5][6][5] = 23;
ans[5][6][6] = 24;
ans[5][6][7] = 25;
ans[5][6][8] = 26;
ans[6][2][1] = 2;
ans[6][2][2] = 6;
ans[6][2][3] = 8;
ans[6][2][4] = 9;
ans[6][2][5] = 10;
ans[6][2][6] = 10;
ans[6][2][7] = 10;
ans[6][2][8] = 10;
ans[6][3][1] = 2;
ans[6][3][2] = 6;
ans[6][3][3] = 10;
ans[6][3][4] = 12;
ans[6][3][5] = 14;
ans[6][3][6] = 14;
ans[6][3][7] = 15;
ans[6][3][8] = 16;
ans[6][4][1] = 4;
ans[6][4][2] = 8;
ans[6][4][3] = 14;
ans[6][4][4] = 18;
ans[6][4][5] = 20;
ans[6][4][6] = 20;
ans[6][4][7] = 20;
ans[6][4][8] = 20;
ans[6][5][1] = 4;
ans[6][5][2] = 10;
ans[6][5][3] = 16;
ans[6][5][4] = 20;
ans[6][5][5] = 23;
ans[6][5][6] = 24;
ans[6][5][7] = 25;
ans[6][5][8] = 26;
ans[6][6][1] = 4;
ans[6][6][2] = 12;
ans[6][6][3] = 20;
ans[6][6][4] = 24;
ans[6][6][5] = 28;
ans[6][6][6] = 29;
ans[6][6][7] = 30;
ans[6][6][8] = 32;

for (int i=2;i<=6;++i) for (int j=2;j<=6;++j) for (int k=1;k<=8;++k) {

assert(ans[i][j][k] == ans[j][i][k]);}
int T; cin >> T;
while (T--) { int a,b,c; cin >> a >> b >> c; cout << ans[a][b][c] << endl;}
}