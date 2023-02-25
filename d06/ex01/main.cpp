#include <iostream>

struct Data
{
    std::string s1;
    int n;
    std::string s2;
};

void *serialize(void)
{
    std::cout << "Serializing... " << '\n';
    void *data = operator new(sizeof(char) * 8 + sizeof(int) * 1 + sizeof(char) * 8); // 8 + 4 + 8
    for (int i = 0; i < 8; i++)
    {
        int rand_num = std::rand()%36;
        if (rand_num < 10)
        {
            *((char*)data + i) = rand_num + '0';
            std::cout << (char)(rand_num + '0');
        }
        else
        {
            *((char *)data + i) = rand_num - 10 + 'a';
            std::cout << (char)(rand_num - 10 + 'a');
        }
    }

    int rand_num = std::rand();
    *(int*)((char*)data + 8) = rand_num;
    std::cout << rand_num;
    
    for (int i = 8 + 4; i < 8 + 4 + 8; i++)
    {
        int rand_num = std::rand()%36;
        if (rand_num < 10)
        {
            *((char*)data + i) = rand_num + '0';
            std::cout << (char)(rand_num + '0');
        }
        else
        {
            *((char *)data + i) = rand_num - 10 + 'a';
            std::cout << (char)(rand_num - 10 + 'a');
        }
    }
    std::cout << std::endl;
    return data;
}

Data *deserialize(void *raw)
{
    std::cout << "Deserializing..." << '\n';
    Data *dat = new Data();
    dat->s1.assign((char*)raw, 8);
    dat->n = *(int *)((char*)raw + 8);
    dat->s2.assign((char*)raw + 12, 8);
    return dat;
}

int main()
{
    void* data_ser = serialize();
    Data* dat_deser = deserialize(data_ser);
    std::cout << "Desrialized data obtained...\n" << dat_deser->s1 << '\n' << dat_deser->n << '\n' << dat_deser->s2 << std::endl;
}