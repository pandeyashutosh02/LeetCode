class ProductOfNumbers {
public:
    deque<int> q;
    long long prod=1;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        if(num==0) {
            q.clear();
            prod=1;
        }
        else {
            q.push_back(num);
            prod*=num;
        }
    }
    
    int getProduct(int k) {
        if(k > q.size())return 0;
        int temp=prod;
        for (int i = 0; i < q.size() - k; i++)temp /= q[i];
        
        return temp;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */