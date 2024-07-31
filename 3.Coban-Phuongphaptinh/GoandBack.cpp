/*
<-- Input/Output -->
- Input:
    + 
    + 
- Output:
    + 
    + 

<-- Phân tích đề bài -->


<-- Xác định hướng giải -->

*/

#include <iostream>
#include <string>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

string findPath(int sx, int sy, int tx, int ty) {
    string path = "";
    int dx = tx - sx;
    int dy = ty - sy;

    // First path: S to T
    path += string(dy, 'U') + string(dx, 'R');

    // First return: T to S
    path += string(dy, 'D') + string(dx, 'L');

    // Second path: S to T (more complex)
    path += 'L' + string(dy + 1, 'U') + string(dx + 1, 'R') + 'D';

    // Second return: T to S (more complex)
    path += 'R' + string(dy + 1, 'D') + string(dx + 1, 'L') + 'U';

    return path;
}

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;

    string result = findPath(sx, sy, tx, ty);
    cout << result << endl;

    return(0);
}