auto Print = [&RecMin](std::vector<int> tVec) {
            std::cout << RecMin(tVec, tVec.size()); 
        };
        int n, m;
        std::vector<int> vec;
        std::cin >> n;
        for(int i = 0; i < n; i++){
            std::cin >> m;
            vec.push_back(m);
        }
        Print(vec);
        return 0;
    }
