#ifndef __CENTRALBUREAUCRACY_H__
#define __CENTRALBUREAUCRACY_H__

#include "OfficeBlock.hpp"

class CentralBureaucracy
{
private:
    std::string forms_[3];
    OfficeBlock offices_[20];
    int office_d_idx_;
    std::string queue_[20];
    int queue_idx_ = 0;
public:
    CentralBureaucracy();
    void feedBureaucrat(Bureaucrat &bureaucrat);
    void feedBureaucrat(Bureaucrat bureaucrat[], int size);
    void queueUp(std::string name);
    void doBureaucracy();
};

#endif // __CENTRALBUREAUCRACY_H__