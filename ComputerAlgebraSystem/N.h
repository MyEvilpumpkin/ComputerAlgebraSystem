#pragma once
#include "SpecialType.h"
#include <vector>

using digit = char;

class N : public SpecialType {

	std::vector<digit> digits;

public:

	N();
	N(const std::string);
	N(const N&);
	N(N&&) noexcept;
	~N();

	N& operator=(const N&);
	N& operator=(N&&) noexcept; 

	N& operator+() const;
	N& operator++();
	N operator++(int);
	N& operator--();
	N operator--(int);
	N operator+(const N&) const;
	N& operator+=(const N&);
	N operator-(const N&) const;
	N& operator-=(const N&);
	N operator*(const N&) const;
	N& operator*=(const N&);
	N operator/(const N&) const;
	N& operator/=(const N&);
	N operator%(const N&) const;
	N& operator%=(const N&);
	digit& operator[](const int) const;
	auto operator<=>(const N&) const;

	void SetZero() override;
	void SetOne() override;
	bool IsZero() const override;
	bool IsOne() const override;
	std::string ToString() const override;
	void Normalize() override;

	unsigned int ToUInt();

	friend int COM_NN_D(const N&, const N&);                    // N-1
	friend bool NZER_N_B(const N&);                             // N-2
	friend N ADD_1N_N(const N&);                                // N-3
	friend N ADD_NN_N(const N&, const N&);                      // N-4
	friend N SUB_NN_N(const N&, const N&);                      // N-5
	friend N MUL_ND_N(const N&, const unsigned int);            // N-6
	friend N MUL_Nk_N(const N&, const unsigned int);            // N-7
	friend N MUL_NN_N(const N&, const N&);                      // N-8
	friend N SUB_NDN_N(const N&, const unsigned int, const N&); // N-9
	friend int DIV_NN_Dk(const N&, const N&, int&);             // N-10
	friend N DIV_NN_N(const N&, const N&);                      // N-11
	friend N MOD_NN_N(const N&, const N&);                      // N-12
	friend N GCF_NN_N(const N&, const N&);                      // N-13
	friend N LCM_NN_N(const N&, const N&);                      // N-14

	friend class Z;
	friend class Q;
	friend class P;

};

int COM_NN_D(const N&, const N&);                    // N-1
bool NZER_N_B(const N&);                             // N-2
N ADD_1N_N(const N&);                                // N-3
N ADD_NN_N(const N&, const N&);                      // N-4
N SUB_NN_N(const N&, const N&);                      // N-5
N MUL_ND_N(const N&, const unsigned int);            // N-6
N MUL_Nk_N(const N&, const unsigned int);            // N-7
N MUL_NN_N(const N&, const N&);                      // N-8
N SUB_NDN_N(const N&, const unsigned int, const N&); // N-9
int DIV_NN_Dk(const N&, const N&, int&);             // N-10
N DIV_NN_N(const N&, const N&);                      // N-11
N MOD_NN_N(const N&, const N&);                      // N-12
N GCF_NN_N(const N&, const N&);                      // N-13
N LCM_NN_N(const N&, const N&);                      // N-14

