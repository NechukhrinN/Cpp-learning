/*Помните иерархию Expression, которую мы разрабатывали на четвёртой неделе? 
Реализуйте ScopedPtr, который будет работать с указателями на базовый класс Expression. 
В этом задании вам требуется реализовать методы get, release и reset, операторы * и -> так, 
как это было описано в предыдущем степе. А также реализуйте конструктор ScopedPtr от указателя на Expression.*/

struct Expression;
struct Number;
struct BinaryOperation;

struct ScopedPtr
{
    // реализуйте следующие методы:
    //
    explicit ScopedPtr(Expression *ptr = 0)
    {
     this->ptr_ = ptr;   
    }
    ~ScopedPtr()
    {
     delete ptr_;   
    }
    Expression* get() const
    {
        return ptr_;
    }
    Expression* release()
    {
        Expression * ptr = this->ptr_;
        this->ptr_ = NULL;
        return ptr;
    }
    void reset(Expression *ptr = 0)
    {
        delete this->ptr_;
        this->ptr_=ptr;
    }
    Expression& operator*() const
    {
         return *ptr_;   
    }
    Expression* operator->() const
    {
         return ptr_;   
    }

private:
    // запрещаем копирование ScopedPtr
    ScopedPtr(const ScopedPtr& other);
    ScopedPtr& operator=(const ScopedPtr& other);

    Expression *ptr_;
};