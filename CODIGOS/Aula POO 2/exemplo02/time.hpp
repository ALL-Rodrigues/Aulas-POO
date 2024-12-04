// exemplo 02: time.hpp

#ifndef TIME_HPP
#define TIME_HPP

// definição das classes time
class Time{
    public:
        // construtor padrão
        explicit Time(int hour = 0, int minute = 0, int second = 0);

        // setters
        void setTime(int hour, int minute, int second); // define hora, minuto, segundo
        void setHour(int hour); // define hora, depois da validação
        void setMinute(int minute); // define minuto, depois da validação
        void setSecond(int second); // define segundos, depois da validação

        // getters
        unsigned int getHour() const; // retorna a hora
        unsigned int getMinute() const; // retorn os minutos
        unsigned int getSecond() const; // retorna os segundos

        void printUniversal() const; // exibe a hora em formato universal
        void printStandard() const; // exibe a hora em formato padrão

    private:
        unsigned int hour; // 0-23
        unsigned int minute; // 0-59
        unsigned int second; // 0-59
};

#endif
