#pragma once
#include "SpecialType.h"
#include "N.h"

class Z : public SpecialType {

	N number;
	bool sign;

public:

	Z();
	Z(const std::string);
	Z(const Z&);
	Z(Z&&) noexcept;
	~Z();

	Z& operator=(const Z&);
	Z& operator=(Z&&) noexcept;

	void SetZero() override;
	void SetOne() override;
	bool IsZero() const override;
	bool IsOne() const override;
	std::string ToString() const override;
	void Normalize() override;

	friend N ABS_Z_N(const Z&);            // Z-1
	friend int POZ_Z_D(const Z&);          // Z-2
	friend Z MUL_ZM_Z(const Z&);           // Z-3
	friend Z TRANS_N_Z(const N&);          // Z-4
	friend N TRANS_Z_N(const Z&);          // Z-5
	friend Z ADD_ZZ_Z(const Z&, const Z&); // Z-6
	friend Z SUB_ZZ_Z(const Z&, const Z&); // Z-7
	friend Z MUL_ZZ_Z(const Z&, const Z&); // Z-8
	friend Z DIV_ZN_Z(const Z&, const N&); // Z-9
	friend Z MOD_ZN_Z(const Z&, const N&); // Z-10

	friend class Q;
	friend class P;

};

N ABS_Z_N(const Z&);            // Z-1
int POZ_Z_D(const Z&);          // Z-2
Z MUL_ZM_Z(const Z&);           // Z-3
Z TRANS_N_Z(const N&);          // Z-4
N TRANS_Z_N(const Z&);          // Z-5
Z ADD_ZZ_Z(const Z&, const Z&); // Z-6
Z SUB_ZZ_Z(const Z&, const Z&); // Z-7
Z MUL_ZZ_Z(const Z&, const Z&); // Z-8
Z DIV_ZN_Z(const Z&, const N&); // Z-9
Z MOD_ZN_Z(const Z&, const N&); // Z-10

