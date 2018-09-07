/*Дополните класс Array перемещающим конструктором и перемещающим оператором присваивания.
Замечание: все объявленные методы класса Array уже реализованы.*/

#include <utility>

template<class T>
struct Array
{
    // все объявленные ниже методы уже реализованы
    explicit Array(size_t size = 0);
    Array(Array const& a);
    Array & operator=(Array const& a);
    ~Array();

    size_t size() const;
    T &         operator[](size_t i);
    T const&    operator[](size_t i) const;
    
    void swap(Array & array){
        std::swap(size_, array.size_);
        std::swap(data_, array.data_);
    }
    
    // реализуйте перемещающий конструктор
    Array(Array && array){
        swap(array);
    }
    // реализуйте перемещающий оператор присваивания
    Array & operator = (Array && array){
        swap(array);
        return *this;
    }
    
    
private:    
    size_t  size_ = 0;
    T *     data_ = nullptr;    
};