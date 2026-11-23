class ProductOfNumbers {
public:

    vector<int> productOfNumbers;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        productOfNumbers.push_back(num);
    }
    
    int getProduct(int k) {
        int sz = size(productOfNumbers);
        int i=1, prod=1, t=sz-1;
        while(i<=k){
            prod*=productOfNumbers[t];
            i++;
            t--;
        }
        return prod;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */