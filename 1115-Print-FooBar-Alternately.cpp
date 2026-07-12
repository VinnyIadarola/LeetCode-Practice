class FooBar {
private:
    int n;
    std::mutex mtx1;
    std::mutex mtx2;

public:
    FooBar(int n) {
        this->n = n;
        mtx2.lock();
    }

    void foo(function<void()> printFoo) {
        
        for (int i = 0; i < n; i++) {
            mtx1.lock();
        	printFoo();
            mtx2.unlock();
        }
    }

    void bar(function<void()> printBar) {
        
        for (int i = 0; i < n; i++) {
            mtx2.lock();
        	printBar();
            mtx1.unlock();
        }
    }
};