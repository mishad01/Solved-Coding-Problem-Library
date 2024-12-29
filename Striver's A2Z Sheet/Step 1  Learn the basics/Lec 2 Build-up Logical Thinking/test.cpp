void p11(int n) {
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < i + 1; j++) {
                if (j % 2 == 0) {
                    cout << "1";
                } else {
                    cout << "01";
                }
            }
        }

        cout << nl;
    }
}