#ifndef _VENDOR_H_
#define _VENDOR_H_
#include "include/vendor.h"

  char* vendor::getcategory()
  {
    return category;
  }
  char vendor::setcategory()
  {
    strcpy(category,categoryarr[choice-1]);
  }
  char* vendor::getvendorname()
  {
    return vendorname;
  }
  void vendor::setvendorname()
  {
    vendorvendornamelbl:

    cout<<"\nEnter the company name:\t";
    gets(vendorname);

    if(strlen(vendorname)>20)
    {
      cout<<"\nEnter a string less than 21 characters\n";
      getch();
      goto vendorvendornamelbl;
    }
  }
  int vendor::getmoq()
  {
    return moq;
  }
  void vendor::setmoq()
  {
    cout<<"\nEnter the minimum order quantity of the vendor in this category:\t";
    cin>>moq;
  }
  void vendor::output()
  {
    cout<<setw(30)<<vendorname<<moq;
  }

#endif
