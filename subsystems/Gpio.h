#include <pico.h>
const double x = 0.0;


class Gpio
{
    public:
        static Gpio *GetInstance();

        void Start();
        void Stop();
    private:
        Gpio();
        
        void Analyze();
        void Periodic();
        static Gpio *m_gpio;
};
