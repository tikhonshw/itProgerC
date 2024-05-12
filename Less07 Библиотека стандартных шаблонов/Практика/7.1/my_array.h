#pragma once

template<typename T>
class my_array { 
    private:
        int len;
        T* data;
    public:
        // my_array() {
        //     len = 0;
        //     data = nullptr;
        // }
        my_array(): len(0), data(nullptr) {}

        my_array(int length);

        ~my_array();

        void empty();

        void resize(int new_length);

        T& operator [](int index);

        void print();

        int get_length();
}; 
