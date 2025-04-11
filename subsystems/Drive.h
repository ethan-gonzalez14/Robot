#include "math.h"

const double x = 0.0;


class Drive
{
    public:
        static Drive *GetInstance();

        void Start();
        void Stop();
    private:
        Drive();
        
        void Analyze();
        void Periodic();
        static Drive *m_drive;
};
