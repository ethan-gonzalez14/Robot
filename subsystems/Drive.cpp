#include "Drive.h"

Drive *Drive::GetInstance()
{
    if (m_drive == nullptr)
    {
        m_drive = new Drive();
    }
    return m_drive;
}

Drive::Drive()
{
    Start();
}

void Drive::Start()
{

}

void Drive::Stop()
{

}

void Drive::Analyze()
{

}

void Drive::Periodic()
{

}