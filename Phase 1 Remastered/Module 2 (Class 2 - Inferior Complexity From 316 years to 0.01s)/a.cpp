#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int PA, PB, PC;
        cin >> PA >> PB >> PC;

        int totalPoints = PA + PB + PC;

        if (totalPoints > 12) {
            cout << "Case " << t << ": invalidum" << endl;
        } else {
            int points[3] = {PA, PB, PC};
            sort(points, points + 3);

            if ((points[0] == 3 && points[1] == 3 && points[2] == 6) || 
                (points[0] == 2 && points[1] == 4 && points[2] == 6)) {
                cout << "Case " << t << ": perfectus" << endl;
            } else {
                cout << "Case " << t << ": invalidum" << endl;
            }
        }
    }

    return 0;
}
