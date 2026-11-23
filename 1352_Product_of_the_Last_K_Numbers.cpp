class ProductOfNumbers {
private:
    vector<int> prefix;
public:
    ProductOfNumbers() {
        prefix.push_back(1); // 用push back 推新的element
    }
    
    void add(int num) {
        if (num == 0) {
            prefix.clear();
            prefix.push_back(1);
        }
        else {
            prefix.push_back(prefix.back() * num);
        }
    }
    
    int getProduct(int k) {
        int n = prefix.size();
        if (k >= n) {
            return 0;
        }
        return prefix[n - 1] / prefix[n - 1 - k];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */


//  // 1. 一般物件
// ProductOfNumbers obj;
// obj.add(3);

// // 2. Pointer 指向動態配置的物件
// ProductOfNumbers* obj = new ProductOfNumbers();
// obj->add(3);

// // 3. Reference（參考）
// ProductOfNumbers obj;
// ProductOfNumbers& ref = obj;
// ref.add(3);