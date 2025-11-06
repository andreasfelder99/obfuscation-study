undefined4 entry(void)

{
  uint uVar1;
  int iVar2;
  int local_44;
  uint local_40;
  string asStack_30 [28];
  undefined4 local_14;
  
  local_14 = 0;
  FUN_100000730(PTR_cout_100004060,"Please enter the password to access the secure system: ");
  FUN_100000778();
  FUN_1000007a4(PTR_cin_100004058,asStack_30);
  uVar1 = FUN_1000007fc();
  if ((uVar1 & 1) == 0) {
    iVar2 = FUN_1000008f8(asStack_30);
    DAT_100008000 = DAT_100008000 + iVar2;
  }
  else {
    local_40 = 0;
    local_44 = 0;
    while( true ) {
      uVar1 = FUN_1000008a4(asStack_30);
      if ((int)((uVar1 & 3) + 100) <= local_44) break;
      uVar1 = FUN_1000008a4(asStack_30);
      local_40 = local_40 ^ local_44 * -0x61c8864f ^ uVar1;
      if ((local_40 & 7) == 5) {
        local_40 = local_40 + 3;
      }
      local_44 = local_44 + 1;
    }
    DAT_100008000 = DAT_100008000 ^ local_40;
  }
  uVar1 = FUN_1000009c4(asStack_30);
  if ((uVar1 & 1) == 0) {
    FUN_100000d74();
  }
  else {
    FUN_100000c50();
  }
  local_14 = 0;
  std::string::~string(asStack_30);
  return local_14;
}


void FUN_100000730(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100001f78(param_2);
  FUN_100002058(param_1,param_2,uVar1);
  return;
}


undefined8 FUN_100000778(undefined8 param_1)

{
  FUN_100002804();
  return param_1;
}

void FUN_1000007a4(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1000026b0((long)param_1 + *(long *)(*param_1 + -0x18),10);
  FUN_10000285c(param_1,param_2,uVar1);
  return;
}


uint FUN_1000008f8(undefined8 param_1)

{
  ulong uVar1;
  byte *pbVar2;
  undefined8 local_28;
  undefined4 local_1c;
  
  local_1c = 0;
  local_28 = 0;
  while( true ) {
    uVar1 = FUN_1000008a4(param_1);
    if (uVar1 <= local_28) break;
    pbVar2 = (byte *)FUN_100000f90(local_28 - uVar1,param_1,local_28);
    local_1c = local_1c ^ (uint)*pbVar2 + (int)local_28 * 0x4e67c6a7;
    local_1c = ((int)local_1c >> 0x1b | local_1c << 5) ^ 0x9e3779b9;
    local_28 = local_28 + 1;
  }
  DAT_100008000 = DAT_100008000 ^ local_1c;
  return local_1c;
}


undefined8 FUN_1000008a4(undefined8 param_1)

{
  ulong uVar1;
  undefined8 local_28;
  
  uVar1 = FUN_100001e88();
  if ((uVar1 & 1) == 0) {
    local_28 = FUN_100002018(param_1);
  }
  else {
    local_28 = FUN_100002000(param_1);
  }
  return local_28;
}


undefined8 FUN_1000008a4(undefined8 param_1)

{
  ulong uVar1;
  undefined8 local_28;
  
  uVar1 = FUN_100001e88();
  if ((uVar1 & 1) == 0) {
    local_28 = FUN_100002018(param_1);
  }
  else {
    local_28 = FUN_100002000(param_1);
  }
  return local_28;
}

byte FUN_1000009c4(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  int local_68;
  ulong local_60;
  long local_58;
  string asStack_38 [24];
  undefined8 local_20;
  bool local_11;
  
  local_20 = param_1;
  FUN_100000ebc(asStack_38,"cysLFHNW25!123");
  iVar3 = FUN_1000008f8(local_20);
  DAT_100008000 = DAT_100008000 ^ iVar3 << 1;
  uVar4 = FUN_100000f78();
  if ((uVar4 & 1) == 0) {
    lVar7 = FUN_100000fd8(local_20);
    lVar8 = FUN_100000fd8(asStack_38);
    if (lVar7 == lVar8) {
      local_68 = 0;
      while( true ) {
        uVar5 = FUN_100000fd8(asStack_38);
        if (uVar5 <= (ulong)(long)local_68) break;
        pcVar6 = (char *)FUN_100000f90((long)local_68 - uVar5,local_20,(long)local_68);
        cVar1 = *pcVar6;
        pcVar6 = (char *)FUN_100000f90(asStack_38,(long)local_68);
        if (cVar1 != *pcVar6) {
          local_11 = false;
          goto LAB_100000c2c;
        }
        local_68 = local_68 + 1;
      }
      local_11 = true;
    }
    else {
      local_11 = false;
    }
  }
  else {
    local_58 = 0;
    local_60 = 0;
    while( true ) {
      uVar5 = FUN_1000008a4(local_20);
      bVar2 = false;
      if (local_60 < uVar5) {
        uVar5 = FUN_1000008a4(asStack_38);
        bVar2 = local_60 < uVar5;
      }
      if (!bVar2) break;
      pcVar6 = (char *)FUN_100000f90(local_20,local_60);
      cVar1 = *pcVar6;
      pcVar6 = (char *)FUN_100000f90(asStack_38,local_60);
      local_58 = local_58 + (ulong)(cVar1 == *pcVar6);
      local_60 = local_60 + 1;
    }
    DAT_100008000 = DAT_100008000 ^ (uint)local_58;
    lVar7 = FUN_1000008a4(asStack_38);
    local_11 = local_58 == lVar7;
  }
LAB_100000c2c:
  std::string::~string(asStack_38);
  return local_11 & 1;
}


void FUN_100000d74(void)

{
  uint uVar1;
  undefined8 uVar2;
  string asStack_28 [24];
  
  FUN_100000f3c(asStack_28,DAT_100008000 & 3,0x20);
  uVar1 = FUN_1000008a4(asStack_28);
  DAT_100008000 = DAT_100008000 ^ uVar1;
  uVar2 = FUN_100000ef0(PTR_cout_100004060,asStack_28);
  uVar2 = FUN_100000730(uVar2,"\n[-] Access Denied. Incorrect password.");
  FUN_100000e3c(uVar2,FUN_100000e68);
  std::string::~string(asStack_28);
  return;
}


void FUN_100000c50(void)

{
  uint uVar1;
  undefined8 uVar2;
  string asStack_28 [24];
  
  uVar2 = FUN_100000730(PTR_cout_100004060,"Access Granted. Welcome to the secure area.");
  FUN_100000e3c(uVar2,FUN_100000e68);
  FUN_100000ebc(asStack_28,"The nuclear launch codes are: Hamburger Banana");
  uVar1 = FUN_1000007fc();
  if ((uVar1 & 1) != 0) {
    DAT_100008000 = DAT_100008000 ^ 0x12345;
  }
  uVar2 = FUN_100000730(PTR_cout_100004060,"Secret Information: ");
  uVar2 = FUN_100000ef0(uVar2,asStack_28);
  FUN_100000e3c(uVar2,FUN_100000e68);
  std::string::~string(asStack_28);
  return;
}


