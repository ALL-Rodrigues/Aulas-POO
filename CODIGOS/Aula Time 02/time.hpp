// exemplo 02: timehpp

#ifdef TIME_HPP
#define TIME_HPP

// definição da classe Time
class Time{
    public:
    // construtor padrão
    explicit Time(int hour = 0, int minute = 0, int second = 0);

    // seters
    void setTime(int hour, int minute, int second); // define hora, minuto e segundo

    void setHour(int hour);
    void setMinute(int minute);
    void setSecond(int second);

    // Getters
    unsigned int getHour() const;
    unsigned int getMinute() const;
    unsigned int getSecond() const;
    private:
}