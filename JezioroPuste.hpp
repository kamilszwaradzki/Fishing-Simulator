#ifndef JEZIOROPUSTE_HPP
#define JEZIOROPUSTE_HPP

#include "Jezioro.hpp"
#include "jezioro_m.hpp"

class JezioroPuste : public Jezioro
{
    public:
        VoidFunctionWithoutParameter show = wyborJezioroPusta;
        void load() { show(); }
        /** Default constructor */
        JezioroPuste();
        /** Default destructor */
        ~JezioroPuste();

    protected:

    private:
};

#endif // JEZIOROPUSTE_HPP
