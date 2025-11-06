
undefined4 entry(void)

{
  uint uVar1;
  string asStack_30 [28];
  undefined4 local_14;
  
  local_14 = 0;
  std::TEMPNAMEPLACEHOLDERVALUE<[abi:ne200100]<std::operator<
            ((ostream *)PTR_cout_100004060,"Please enter the password to access the secure system: "
            );
  std::string::string[abi:ne200100](asStack_30);
  std::getline[abi:ne200100]<>((istream *)PTR_cin_100004058,asStack_30);
  uVar1 = checkPassword(asStack_30);
  if ((uVar1 & 1) == 0) {
    accessDenied();
  }
  else {
    accessGranted();
  }
  local_14 = 0;
  std::string::~string(asStack_30);
  return local_14;
}


/* checkPassword(std::string const&) */

byte checkPassword(string *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  int local_40;
  string asStack_38 [24];
  string *local_20;
  byte local_11;
  
  local_20 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1B8ne200100ILi0EEEPKc
            (asStack_38,"cysLFHNW25!123");
  lVar2 = std::string::length[abi:ne200100](local_20);
  lVar3 = std::string::length[abi:ne200100](asStack_38);
  if (lVar2 == lVar3) {
    local_40 = 0;
    while( true ) {
      uVar4 = std::string::length[abi:ne200100](asStack_38);
      if (uVar4 <= (ulong)(long)local_40) break;
      pcVar5 = (char *)std::string::operator[][abi:ne200100](local_20,(long)local_40);
      cVar1 = *pcVar5;
      pcVar5 = (char *)std::string::operator[][abi:ne200100](asStack_38,(long)local_40);
      if (cVar1 != *pcVar5) {
        local_11 = 0;
        goto LAB_100000778;
      }
      local_40 = local_40 + 1;
    }
    local_11 = 1;
  }
  else {
    local_11 = 0;
  }
LAB_100000778:
  std::string::~string(asStack_38);
  return local_11 & 1;
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* accessDenied() */

void accessDenied(void)

{
  ostream *this;
  
  this = std::TEMPNAMEPLACEHOLDERVALUE<[abi:ne200100]<std::operator<
                   ((ostream *)PTR_cout_100004060,"\n[-] Access Denied. Incorrect password.");
  std::ostream::operator<<[abi:ne200100](this,std::endl[abi:ne200100]<>);
  return;
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* accessGranted() */

void accessGranted(void)

{
  undefined *puVar1;
  ostream *poVar2;
  string asStack_28 [24];
  
  puVar1 = PTR_cout_100004060;
  poVar2 = std::TEMPNAMEPLACEHOLDERVALUE<[abi:ne200100]<std::operator<
                     ((ostream *)PTR_cout_100004060,"Access Granted. Welcome to the secure area.");
  std::ostream::operator<<[abi:ne200100](poVar2,std::endl[abi:ne200100]<>);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1B8ne200100ILi0EEEPKc
            (asStack_28,"The nuclear launch codes are: Hamburger Banana");
  poVar2 = std::TEMPNAMEPLACEHOLDERVALUE<[abi:ne200100]<std::operator<
                     ((ostream *)puVar1,"Secret Information: ");
  poVar2 = std::TEMPNAMEPLACEHOLDERVALUE<[abi:ne200100]<char,std::char_traits<char>,std::operator<
                     (poVar2,asStack_28);
  std::ostream::operator<<[abi:ne200100](poVar2,std::endl[abi:ne200100]<>);
  std::string::~string(asStack_28);
  return;
}


