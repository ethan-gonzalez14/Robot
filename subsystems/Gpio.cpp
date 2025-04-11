#include "Gpio.h"

Gpio *Gpio::GetInstance()
{
    if (m_gpio == nullptr)
    {
        m_gpio = new Gpio();
    }
    return m_gpio;
}

