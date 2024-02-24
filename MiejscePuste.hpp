#ifndef MIEJSCEPUSTE_HPP
#define MIEJSCEPUSTE_HPP

#include "Miejsce.hpp"
#include "miejsce_m.hpp"

class MiejscePuste : public Miejsce
{
    public:
        VoidFunctionWithoutParameter show = wyborMiejscePuste;
        void load() { show(); }
        /** Default constructor */
        MiejscePuste();
        /** Default destructor */
        ~MiejscePuste();

    protected:

    private:
};

#endif // MIEJSCEPUSTE_HPP
