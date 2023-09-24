while (res >= 1) {
        int num = res % 10;
        cerr<<num<<endl;
        vec.push_back(num);
        res = res / 10;
    }