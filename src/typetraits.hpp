/***************************************************************************
                               typetraits.hpp
                             -------------------
    begin                : July 22 2002
    copyright            : (C) 2002-2006 by Marc Schellens
    email                : m_schellens@users.sf.net
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

// to be included only from datatypes.hpp

#ifndef TYPETRAITS_HPP_
#define TYPETRAITS_HPP_

#include <vector>
#include <valarray>

#include "basegdl.hpp"
#include "dstructdesc.hpp"

// define type parameterization here
struct SpDByte: public BaseGDL
{
  SpDByte();
  SpDByte( const dimension& dim_);

  BaseGDL* GetTag() const;
  BaseGDL* GetInstance() const;
  BaseGDL* GetEmptyInstance() const;

  typedef DByte Ty;
  typedef GDLArray<Ty>    DataT;

  SizeT NBytes() const
  {
	return (this->N_Elements() * sizeof( Ty));
  }

  static const DType  t;
  static const std::string str; 
  static const DByte zero;

  static const bool IS_INTEGER;
  static const bool IS_SIGNED;
  static const bool IS_NUMERIC;
  static const bool IS_COMPLEX;

  DType   Type()    const;
  const std::string& TypeStr() const;

  ~SpDByte();
};

struct SpDInt: public BaseGDL
{
  SpDInt();
  SpDInt( const dimension& dim_);

  BaseGDL* GetTag() const;
  BaseGDL* GetInstance() const;
  BaseGDL* GetEmptyInstance() const;

  typedef DInt Ty;
  typedef GDLArray<Ty>    DataT;

  SizeT NBytes() const
  {
	return (this->N_Elements() * sizeof( Ty));
  }

  static const DType t;
  static const std::string str; 
  static const DInt zero;

  static const bool IS_INTEGER;
  static const bool IS_SIGNED;
  static const bool IS_NUMERIC;
  static const bool IS_COMPLEX;

  DType   Type()    const;
  const std::string& TypeStr() const;

  ~SpDInt();
};

struct SpDUInt: public BaseGDL
{
  SpDUInt();
  SpDUInt( const dimension& dim_);

  BaseGDL* GetTag() const;
  BaseGDL* GetInstance() const;
  BaseGDL* GetEmptyInstance() const;

  typedef DUInt Ty;
  typedef GDLArray<Ty>    DataT;

  SizeT NBytes() const
  {
	return (this->N_Elements() * sizeof( Ty));
  }

  static const DType t;
  static const std::string str; 
  static const DUInt zero;

  static const bool IS_INTEGER;
  static const bool IS_SIGNED;
  static const bool IS_NUMERIC;
  static const bool IS_COMPLEX;

  DType   Type()    const;
  const std::string& TypeStr() const;

  ~SpDUInt();
};

struct SpDLong: public BaseGDL
{
  SpDLong();
  SpDLong( const dimension& dim_);

  BaseGDL* GetTag() const;
  BaseGDL* GetInstance() const;
  BaseGDL* GetEmptyInstance() const;

  typedef DLong Ty;
  typedef GDLArray<Ty>    DataT;

  SizeT NBytes() const
  {
	return (this->N_Elements() * sizeof( Ty));
  }

  static const DType  t;
  static const std::string str; 
  static const DLong  zero;

  static const bool IS_INTEGER;
  static const bool IS_SIGNED;
  static const bool IS_NUMERIC;
  static const bool IS_COMPLEX;

  DType   Type()    const;
  const std::string& TypeStr() const;

  ~SpDLong();
};

struct SpDULong: public BaseGDL
{
  SpDULong();
  SpDULong( const dimension& dim_);

  BaseGDL* GetTag() const;
  BaseGDL* GetInstance() const;
  BaseGDL* GetEmptyInstance() const;

  typedef DULong Ty;
  typedef GDLArray<Ty>    DataT;

  SizeT NBytes() const
  {
	return (this->N_Elements() * sizeof( Ty));
  }

  static const DType  t;
  static const std::string str; 
  static const DULong zero;

  static const bool IS_INTEGER;
  static const bool IS_SIGNED;
  static const bool IS_NUMERIC;
  static const bool IS_COMPLEX;

  DType   Type()    const;
  const std::string& TypeStr() const;

  ~SpDULong();
};

struct SpDLong64: public BaseGDL
{
  SpDLong64();
  SpDLong64( const dimension& dim_);

  BaseGDL* GetTag() const;
  BaseGDL* GetInstance() const;
  BaseGDL* GetEmptyInstance() const;

  typedef DLong64 Ty;
  typedef GDLArray<Ty>    DataT;

  SizeT NBytes() const
  {
	return (this->N_Elements() * sizeof( Ty));
  }

  static const DType  t;
  static const std::string str; 
  static const DLong64  zero;

  static const bool IS_INTEGER;
  static const bool IS_SIGNED;
  static const bool IS_NUMERIC;
  static const bool IS_COMPLEX;

  DType   Type()    const;
  const std::string& TypeStr() const;

  ~SpDLong64();
};

struct SpDULong64: public BaseGDL
{
  SpDULong64();
  SpDULong64( const dimension& dim_);

  BaseGDL* GetTag() const;
  BaseGDL* GetInstance() const;
  BaseGDL* GetEmptyInstance() const;

  typedef DULong64 Ty;
  typedef GDLArray<Ty>    DataT;

  SizeT NBytes() const
  {
	return (this->N_Elements() * sizeof( Ty));
  }

  static const DType  t;
  static const std::string str; 
  static const DULong64 zero;

  static const bool IS_INTEGER;
  static const bool IS_SIGNED;
  static const bool IS_NUMERIC;
  static const bool IS_COMPLEX;

  DType   Type()    const;
  const std::string& TypeStr() const;

  ~SpDULong64();
};

struct SpDFloat: public BaseGDL
{
  SpDFloat();
  SpDFloat( const dimension& dim_);

  BaseGDL* GetTag() const;
  BaseGDL* GetInstance() const;
  BaseGDL* GetEmptyInstance() const;

  typedef DFloat Ty;
  typedef GDLArray<Ty>    DataT;

  SizeT NBytes() const
  {
	return (this->N_Elements() * sizeof( Ty));
  }

  static const DType  t;
  static const std::string str; 
  static const DFloat zero;

  static const bool IS_INTEGER;
  static const bool IS_SIGNED;
  static const bool IS_NUMERIC;
  static const bool IS_COMPLEX;

  DType   Type()    const;
  const std::string& TypeStr() const;

  ~SpDFloat();
};

struct SpDDouble: public BaseGDL
{
  SpDDouble();
  SpDDouble( const dimension& dim_);

  BaseGDL* GetTag() const;
  BaseGDL* GetInstance() const;
  BaseGDL* GetEmptyInstance() const;

  typedef DDouble Ty;
  typedef GDLArray<Ty>    DataT;

  SizeT NBytes() const
  {
	return (this->N_Elements() * sizeof( Ty));
  }

  static const DType  t;
  static const std::string str; 
  static const DDouble zero;

  static const bool IS_INTEGER;
  static const bool IS_SIGNED;
  static const bool IS_NUMERIC;
  static const bool IS_COMPLEX;

  DType   Type()    const;
  const std::string& TypeStr() const;

  ~SpDDouble();
};

struct SpDString: public BaseGDL
{
  SpDString();
  SpDString( const dimension& dim_);

  BaseGDL* GetTag() const;
  BaseGDL* GetInstance() const;
  BaseGDL* GetEmptyInstance() const;

  typedef DString Ty;
  typedef GDLArray<Ty>    DataT;

  SizeT NBytes() const
  {
	return (this->N_Elements() * sizeof( Ty));
  }

  static const DType    t;
  static const std::string str; 
  static const Ty       zero;

  static const bool IS_INTEGER;
  static const bool IS_SIGNED;
  static const bool IS_NUMERIC;
  static const bool IS_COMPLEX;

  DType   Type()    const;
  const std::string& TypeStr() const;

  ~SpDString();
};

// attention: structs are special
struct SpDStruct: public BaseGDL
{
protected:
  DStructDesc* desc;

  SpDStruct( DStructDesc* desc_=NULL);
  SpDStruct( DStructDesc* desc_, const dimension& dim_);

  void MakeOwnDesc()
  {
//     if( /* desc != NULL && */ desc->IsUnnamed()) desc = new DStructDesc( desc);
    assert( desc != NULL);
    if( desc->IsUnnamed()) desc->AddRef();
  }

public:
  inline SizeT NTags() const { return desc->NTags();}

  inline DStructDesc* Desc() const { return desc;}
  inline void SetDesc( DStructDesc* newDesc) 
  { 
    if( desc != NULL && desc->IsUnnamed()) delete desc;
    desc=newDesc;
  }

  // GetTag returns a tag descriptor (SpType)
  BaseGDL* GetTag() const;
  BaseGDL* GetInstance() const;
  BaseGDL* GetEmptyInstance() const;

  typedef char Ty;
  typedef GDLArray<Ty> DataT;

  SizeT NBytes() const
  {
    return ( this->N_Elements() * desc->NBytes());
  }

  static const DType  t;
  static const std::string str; 
  static const Ty     zero;

  static const bool IS_INTEGER;
  static const bool IS_SIGNED;
  static const bool IS_NUMERIC;
  static const bool IS_COMPLEX;

  DType   Type()    const;
  const std::string& TypeStr() const;

  ~SpDStruct();
};


struct SpDPtr: public BaseGDL
{
  SpDPtr();
  SpDPtr( const dimension& dim_);

  BaseGDL* GetTag() const;
  BaseGDL* GetInstance() const;
  BaseGDL* GetEmptyInstance() const;

  typedef DPtr Ty;
  typedef GDLArray<Ty>    DataT;

  SizeT NBytes() const
  {
	return (this->N_Elements() * sizeof( Ty));
  }

  static const DType    t;
  static const std::string str; 
  static const Ty       zero;

  static const bool IS_INTEGER;
  static const bool IS_SIGNED;
  static const bool IS_NUMERIC;
  static const bool IS_COMPLEX;

  DType   Type()    const;
  const std::string& TypeStr() const;

  ~SpDPtr();
};

// objects are pointer to structs
struct SpDObj: public BaseGDL
{
  SpDObj();
  SpDObj( const dimension& dim_);

  BaseGDL* GetTag() const;
  BaseGDL* GetInstance() const;
  BaseGDL* GetEmptyInstance() const;

  typedef DObj Ty;
  typedef GDLArray<Ty>    DataT;

  SizeT NBytes() const
  {
	return (this->N_Elements() * sizeof( Ty));
  }

  static const DType    t;
  static const std::string str; 
  static const Ty       zero;

  static const bool IS_INTEGER;
  static const bool IS_SIGNED;
  static const bool IS_NUMERIC;
  static const bool IS_COMPLEX;

  DType   Type()    const;
  const std::string& TypeStr() const;

  ~SpDObj();
};

struct SpDComplex: public BaseGDL
{
  SpDComplex();
  SpDComplex( const dimension& dim_);

  BaseGDL* GetTag() const;
  BaseGDL* GetInstance() const;
  BaseGDL* GetEmptyInstance() const;

  typedef DComplex Ty;
  typedef GDLArray<Ty>    DataT;

  SizeT NBytes() const
  {
	return (this->N_Elements() * sizeof( Ty));
  }

  static const DType  t;
  static const std::string str; 
  static const DComplex zero;

  static const bool IS_INTEGER;
  static const bool IS_SIGNED;
  static const bool IS_NUMERIC;
  static const bool IS_COMPLEX;

  DType   Type()    const;
  const std::string& TypeStr() const;

  ~SpDComplex();
};

struct SpDComplexDbl: public BaseGDL
{
  SpDComplexDbl();
  SpDComplexDbl( const dimension& dim_);

  BaseGDL* GetTag() const;
  BaseGDL* GetInstance() const;
  BaseGDL* GetEmptyInstance() const;

  typedef DComplexDbl Ty;
  typedef GDLArray<Ty>    DataT;

  SizeT NBytes() const
  {
	return (this->N_Elements() * sizeof( Ty));
  }

  static const DType  t;
  static const std::string str; 
  static const DComplexDbl zero;

  static const bool IS_INTEGER;
  static const bool IS_SIGNED;
  static const bool IS_NUMERIC;
  static const bool IS_COMPLEX;

  DType   Type()    const;
  const std::string& TypeStr() const;

  ~SpDComplexDbl();
};


#endif