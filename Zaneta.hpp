#ifndef ZANETA_HPP
#define ZANETA_HPP
#pragma once
#ifndef LIBS_IMP
    #define LIBS_IMP
    #pragma once
    #include <iostream>
    #include <windows.h>
    using namespace std;
#endif

class Zaneta
{
    public:
        double GetdbMultiplier() { return dbMultiplier; }
        virtual void load() = 0;
        /** Default constructor */
        Zaneta(const double dbMultiplier);
        /** Default destructor */
        virtual ~Zaneta();

    protected:
        const double dbMultiplier;
    private:

};

#endif // ZANETA_HPP
