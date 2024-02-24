#ifndef MAXIZYW_HPP
#define MAXIZYW_HPP

#include "Sprzet.hpp"
#include "zywiec_m.hpp"

/// brief: Sprzet maksymalny na Zywca
class MaxiZyw : public Sprzet
{
    public:
        VoidFunctionWithoutParameter show = maxiz;
        void load() { show(); }
        /** Default constructor */
        MaxiZyw();
        /** Default destructor */
        ~MaxiZyw();

    protected:

    private:
};

#endif // MAXIZYW_HPP
