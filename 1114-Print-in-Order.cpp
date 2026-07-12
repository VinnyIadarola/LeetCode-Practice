class Foo {
public:
    std::mutex mtx1;
    std::mutex mtx2;
    Foo() {
        mtx1.lock();
        mtx2.lock();
    }

    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        mtx1.unlock();
    }

    void second(function<void()> printSecond) {
        // printSecond() outputs "second". Do not change or remove this line.
        mtx1.lock();
        printSecond();
        mtx2.unlock();

    }

    void third(function<void()> printThird) {
        // printThird() outputs "third". Do not change or remove this line.
        mtx2.lock();
        printThird();
    }
};