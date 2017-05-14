// Author: Marcin Serwach
// Tutorial: https://github.com/iblis-ms/tutorials/tree/master/Cpp/CMake

#ifndef SHARED_LIBRARY_INTERFACE_H_
#define SHARED_LIBRARY_INTERFACE_H_

class CSharedLibraryInterface
{
public:
  virtual ~CSharedLibraryInterface(){};

  virtual void sharedSayHello() const = 0;
};

#endif // SHARED_LIBRARY_INTERFACE_H_
