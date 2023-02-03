#ifndef BRAIN_HPP
# define BRAIN_HPP
# include<iostream>
# include<string>

class Brain
{
    private:
    std::string ideas[100];
    void copyIdeas(Brain const &rhs);

    public:
    Brain();
    Brain(const Brain& other);
    ~Brain();
    Brain &operator=(Brain const &other);

    const std::string* getIdeas() const;
};

#endif