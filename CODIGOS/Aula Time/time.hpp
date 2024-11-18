// exemplo : time.hpp

#ifndef TIME_HPP
#define TIME_HPP

// definição da classe Time
class Time{
    public:
    Time(); // construtor
    void setTime(int h, int m, int s); // define hora, minuto e segundo 
    void printUniversal() const;  // exibe a hora em formato universal
    void printStandard() const;   // exibe a hora em formato padrão

    private:
    unsigned int hour;    // 0 - 23 
    unsigned int minute;  // 0 - 59
    unsigned int second;  // 0 - 59
};

#endif