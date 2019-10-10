

class Brand{
    private:
        char brand;
    public:
        Brand(char br);
        void print(); 
};

class Type{
    private:
        char type;
    public:
        void print(); 
};

class Engine{
    private:
        char engine;
    public:
        void print();
};

class Wheels{
    private:
        char wheel;
    public:
        void print();
};

class Seats{
    private:
        char seat;
    public:
        void print();
};

class Steering{
    private:
        char steering;
    public:
        void print();
};

class Car{
    private:
        Brand brand;
        Type type;
        Engine engine;
        Wheels wheels;
        Seats seats;
        Steering steering;
    public:
        void print();
        Car(Brand br,Type ty,Engine en,Wheels wh,Seats se,Steering st);
        
};