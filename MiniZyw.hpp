#ifndef MINIZYW_HPP
#define MINIZYW_HPP

#include "Sprzet.hpp"
#include "zywiec_m.hpp"

/// brief: Sprzet minimalny na Zywca
class MiniZyw : public Sprzet
{
    public:
        VoidFunctionWithoutParameter show = miniz;
        void load() { show(); }
        /** Default constructor */
        MiniZyw();
        /** Default destructor */
        ~MiniZyw();

    protected:

    private:
};

#endif // MINIZYW_HPP
