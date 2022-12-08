#include <iostream>
#include "OfficeBlock.hpp"

int main()
{
    Intern idiotOne;
    Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
    Bureaucrat bob = Bureaucrat("Bobby Bobson", 44);
    OfficeBlock ob;
    ob.setIntern(idiotOne);
    ob.setSigner(bob);
    ob.setExecutor(hermes);
    try
    {
        ob.doBureaucracy("robotomy request", "Pigley");
    }
    catch (OfficeBlock::InvalidFormRequest &e)
    {
        std::cout << e.what() << '\n';
    }
    catch (OfficeBlock::InternNotInitialised &e)
    {
        std::cout << e.what() << '\n';
    }
    catch (OfficeBlock::SignerNotInitialised &e)
    {
        std::cout << e.what() << '\n';
    }
    catch (OfficeBlock::ExecutorNotInitialised &e)
    {
        std::cout << e.what() << '\n';
    }
    catch (OfficeBlock::SignerGradeTooLow &e)
    {
        std::cout << e.what() << '\n';
    }
    catch (OfficeBlock::ExecutorGradeTooLow &e)
    {
        std::cout << e.what() << '\n';
    }
    catch (std::exception & e)
    {
        std::cout << "Unknown error occured : " << e.what() << '\n';
    }
}
// zaz@blackjack ex04 $ ./ex04
// Intern creates a Mutant Pig Termination Form (s.grade 130, ex.grade 50) targeted on Pigley (Unsigned)
// Bureaucrat Bobby Bobson (Grade 123) signs a Mutant Pig Termination Form (s.grade 130, ex.grade 50)
// targeted on Pigley (Unsigned)
// Bureaucrat Hermes Conrad (Grade 37) executes a Mutant Pig Termination Form (s.grade 130, ex.grade 50)
// targeted on Pigley (Signed)
// That'll do, Pigley. That'll do ...
// zaz@blackjack ex04 $
// 13
