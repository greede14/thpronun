// sylstring.inl - Thai syllable string class
// Author: Theppitak Karoonboonyanan <theppitak@gmail.com>
// Created: 2018-01-16

#include <utility>

///////////////////////
//  class SylString  //
///////////////////////

inline
SylString::SylString()
    : mSyls() {}

inline
SylString::SylString (const SylString& other)
    : mSyls (other.mSyls) {}

inline
SylString::SylString (SylString&& other)
    : mSyls (std::move (other.mSyls)) {}

inline SylString&
SylString::operator= (const SylString& other)
{
    mSyls = other.mSyls;
    return *this;
}

inline SylString&
SylString::operator= (const Syl& syl)
{
    mSyls.clear();
    return *this += syl;
}

inline SylString&
SylString::operator+= (const Syl& syl)
{
    mSyls.push_back (syl);
    return *this;
}

/*
vi:ts=4:ai:expandtab
*/
