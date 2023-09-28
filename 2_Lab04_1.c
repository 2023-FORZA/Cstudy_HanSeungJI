#include <stdio.h>

int n, m, dir, cnt, curR = 0, curC = 0;
int ck[101][101];
// ©Л, го, аб, ╩С
int dr[] = { 0, 1, 0, -1 };
int dc[] = { 1, 0, -1, 0 };

int main() {
    scanf("%d %d", &n, &m);
    ck[0][0] = 1;

    while (1) {
        curR += dr[dir];
        curC += dc[dir];

        if (0 > curR || curR >= n || 0 > curC || curC >= m || ck[curR][curC]) {
            curR -= dr[dir];
            curC -= dc[dir];
            dir = (dir + 1) % 4;

            if (ck[curR + dr[dir]][curC + dc[dir]]) {
                break;
            }
            cnt++;
        }

        ck[curR][curC] = 1;
    }

    printf("%d\n", cnt);
    return 0;
}