class MyHashSet {
private:
    bool present[1000001]{};   // all elements become false

public:
    MyHashSet() {}

    void add(int key) {
        present[key] = true;
    }

    void remove(int key) {
        present[key] = false;
    }

    bool contains(int key) {
        return present[key];
    }
};