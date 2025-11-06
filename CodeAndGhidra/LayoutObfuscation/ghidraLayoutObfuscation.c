//Entry
undefined4 entry(void)

{
  uint uVar1;
  string asStack_30 [28];
  undefined4 local_14;
  
  local_14 = 0;
  FUN_10000059c(PTR_cout_100004060,"Please enter the password to access the secure system: ");
  FUN_1000005e4();
  FUN_100000610(PTR_cin_100004058,asStack_30);
  uVar1 = FUN_100000668(asStack_30);
  if ((uVar1 & 1) == 0) {
    FUN_100000848();
  }
  else {
    FUN_100000794();
  }
  local_14 = 0;
  std::string::~string(asStack_30);
  return local_14;
}

// checkPassword
byte FUN_100000668(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  int local_40;
  string asStack_38 [24];
  undefined8 local_20;
  byte local_11;
  
  local_20 = param_1;
  FUN_1000008f8(asStack_38,"cysLFHNW25!123");
  lVar2 = FUN_100000978(local_20);
  lVar3 = FUN_100000978(asStack_38);
  if (lVar2 == lVar3) {
    local_40 = 0;
    while( true ) {
      uVar4 = FUN_100000978(asStack_38);
      if (uVar4 <= (ulong)(long)local_40) break;
      pcVar5 = (char *)FUN_10000099c((long)local_40 - uVar4,local_20,(long)local_40);
      cVar1 = *pcVar5;
      pcVar5 = (char *)FUN_10000099c(asStack_38,(long)local_40);
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

//accessGranted
void FUN_100000794(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  string asStack_28 [24];
  
  puVar1 = PTR_cout_100004060;
  uVar2 = FUN_10000059c(PTR_cout_100004060,"Access Granted. Welcome to the secure area.");
  FUN_100000878(uVar2,FUN_1000008a4);
  FUN_1000008f8(asStack_28,"The nuclear launch codes are: Hamburger Banana");
  uVar2 = FUN_10000059c(puVar1,"Secret Information: ");
  uVar2 = FUN_10000092c(uVar2,asStack_28);
  FUN_100000878(uVar2,FUN_1000008a4);
  std::string::~string(asStack_28);
  return;
}

//accessDenied

void FUN_100000848(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10000059c(PTR_cout_100004060,"\n[-] Access Denied. Incorrect password.");
  FUN_100000878(uVar1,FUN_1000008a4);
  return;
}



