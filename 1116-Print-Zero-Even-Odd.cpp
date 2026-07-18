class ZeroEvenOdd {
private:
    int n;
    int count = 0;
    std::mutex z;
    std::mutex e;
    std::mutex o;
    bool was_even = true;
public:
    ZeroEvenOdd(int n) {
        this->n = n;
        e.lock();
        o.lock();
        
    }

    // printNumber(x) outputs "x", where x is an integer.
    void zero(function<void(int)> printNumber) {
        while(true) {
            z.lock(); 

            if(count >= n)
                break;

            printNumber(0);
            ++count;


            (was_even) ? o.unlock() : e.unlock();


            was_even = !was_even;
        }

        (was_even) ? o.unlock() : e.unlock();



    }

    void even(function<void(int)> printNumber) {
        while(true) {
            e.lock(); 

            if(count > n)
                break;


            printNumber(count);

            if(count == n)
                break;

            z.unlock();

        }
      
      
        ++count;
        o.unlock();
        z.unlock();





    }

    void odd(function<void(int)> printNumber) {
        while(true) {
            o.lock(); 

            if(count > n)
                break;


            printNumber(count);

            if(count == n)
                break;
            
            z.unlock();

        }
      
      
        ++count;
        e.unlock();
        z.unlock();



        
    }
};