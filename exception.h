#ifndef _EXCEPTION_H_
#define _EXCEPTION_H_ 1

#include <exception>

class table_exist : public std::exception {

};

class table_not_exist : public std::exception {

};

class attribute_not_exist : public std::exception {

};

class index_exist : public std::exception {

};

class index_not_exist : public std::exception {

};

class tuple_type_conflict : public std::exception {

};

class primary_key_conflict : public std::exception {

};

class data_type_conflict : public std::exception {

};

#endif 
