#pragma once
#include "SpecialType.h"
#include "Z.h"

class Q : public SpecialType {

	Z numerator;
	N denominator;

public:

	Q();
	Q(const std::string);
	Q(const Q&);
	Q(Q&&) noexcept;
	~Q();

	Q& operator=(const Q&);
	Q& operator=(Q&&) noexcept;

	void SetZero() override;
	void SetOne() override;
	bool IsZero() const override;
	bool IsOne() const override;
	std::string ToString() const override;
	void Normalize() override;

	friend Q RED_Q_Q(Q&);                  // Q-1
	friend bool INT_Q_B(Q&);               // Q-2
	friend Q TRANS_Z_Q(const Z&);          // Q-3
	friend Z TRANS_Q_Z(Q&);                // Q-4
	friend Q ADD_QQ_Q(const Q&, const Q&); // Q-5
	friend Q SUB_QQ_Q(const Q&, const Q&); // Q-6
	friend Q MUL_QQ_Q(const Q&, const Q&); // Q-7
	friend Q DIV_QQ_Q(const Q&, const Q&); // Q-8

	friend class P;

};

Q RED_Q_Q(Q&);                  // Q-1
bool INT_Q_B(Q&);               // Q-2
Q TRANS_Z_Q(const Z&);          // Q-3
Z TRANS_Q_Z(Q&);                // Q-4
Q ADD_QQ_Q(const Q&, const Q&); // Q-5
Q SUB_QQ_Q(const Q&, const Q&); // Q-6
Q MUL_QQ_Q(const Q&, const Q&); // Q-7
Q DIV_QQ_Q(const Q&, const Q&); // Q-8

