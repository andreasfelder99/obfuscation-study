
undefined4 entry(void)

{
  uint uVar1;
  int iVar2;
  int local_b8;
  uint local_b4;
  string asStack_b0 [40];
  string asStack_88 [24];
  string asStack_70 [28];
  undefined4 local_54;
  undefined1 auStack_50 [56];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_1000040c0;
  local_54 = 0;
  FUN_10000084c(asStack_70);
  _memcpy(auStack_50,&DAT_1000038d0,0x38);
  FUN_100000a80(asStack_88,auStack_50,0x37,asStack_70);
  FUN_100000a34(PTR_cout_100004060,asStack_88);
  std::string::~string(asStack_88);
  FUN_100000b3c();
  FUN_100000b68(PTR_cin_100004058,asStack_b0);
  uVar1 = FUN_100000bc0();
  if ((uVar1 & 1) == 0) {
    iVar2 = FUN_100000c2c(asStack_b0);
    DAT_100008000 = DAT_100008000 + iVar2;
  }
  else {
    local_b4 = 0;
    local_b8 = 0;
    while( true ) {
      uVar1 = FUN_100000bd8(asStack_b0);
      if ((int)((uVar1 & 3) + 100) <= local_b8) break;
      uVar1 = FUN_100000bd8(asStack_b0);
      local_b4 = local_b4 ^ local_b8 * -0x61c8864f ^ uVar1;
      if ((local_b4 & 7) == 5) {
        local_b4 = local_b4 + 3;
      }
      local_b8 = local_b8 + 1;
    }
    DAT_100008000 = DAT_100008000 ^ local_b4;
  }
  uVar1 = FUN_100000cf8(asStack_b0);
  if ((uVar1 & 1) == 0) {
    FUN_100001260();
  }
  else {
    FUN_100001020();
  }
  local_54 = 0;
  std::string::~string(asStack_b0);
  std::string::~string(asStack_70);
  if (*(long *)PTR____stack_chk_guard_1000040c0 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_1000040c0 - local_18);
  }
  return local_54;
}


/* WARNING: Removing unreachable block (ram,0x0001000009f4) */

void FUN_10000084c(undefined8 param_1)

{
  int iVar1;
  
  FUN_100000b3c();
  iVar1 = FUN_100000bc0();
  FUN_100001634(param_1,iVar1 + 0x62);
  iVar1 = FUN_100000bc0();
  FUN_100001634(param_1,iVar1 + 0x61);
  iVar1 = FUN_100000bc0();
  FUN_100001634(param_1,iVar1 + 0x6e);
  iVar1 = FUN_100000bc0();
  FUN_100001634(param_1,iVar1 + 0x61);
  iVar1 = FUN_100000bc0();
  FUN_100001634(param_1,iVar1 + 0x6e);
  iVar1 = FUN_100000bc0();
  FUN_100001634(param_1,iVar1 + 0x65);
  iVar1 = FUN_100000bc0();
  FUN_100001634(param_1,iVar1 + 0x6e);
  iVar1 = FUN_100000bc0();
  FUN_100001634(param_1,iVar1 + 0x62);
  iVar1 = FUN_100000bc0();
  FUN_100001634(param_1,iVar1 + 0x72);
  iVar1 = FUN_100000bc0();
  FUN_100001634(param_1,iVar1 + 0x6f);
  iVar1 = FUN_100000bc0();
  FUN_100001634(param_1,iVar1 + 0x74);
  return;
}


void FUN_100000a80(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined8 local_40;
  
  uVar3 = FUN_100001610(param_4);
  for (local_40 = 0; local_40 < param_3; local_40 = local_40 + 1) {
    bVar1 = *(byte *)(param_2 + local_40);
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = local_40 / uVar3;
    }
    pbVar4 = (byte *)FUN_100001580(param_4,local_40 - uVar2 * uVar3);
    *(byte *)(param_2 + local_40) = bVar1 ^ *pbVar4;
  }
  FUN_100001668(local_40 - param_3,param_1,param_2,param_3);
  return;
}


void FUN_100000a34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_100001828(param_2);
  uVar2 = FUN_100000bd8(param_2);
  FUN_1000027d0(param_1,uVar1,uVar2);
  return;
}


undefined8 FUN_100000b3c(undefined8 param_1)

{
  FUN_100002778();
  return param_1;
}


void FUN_100000b68(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100002e28((long)param_1 + *(long *)(*param_1 + -0x18),10);
  FUN_100002f7c(param_1,param_2,uVar1);
  return;
}


uint FUN_100000bc0(void)

{
  uint uVar1;
  
  uVar1 = FUN_100001454();
  return uVar1 ^ 1;
}


uint FUN_100000c2c(undefined8 param_1)

{
  ulong uVar1;
  byte *pbVar2;
  undefined8 local_28;
  undefined4 local_1c;
  
  local_1c = 0;
  local_28 = 0;
  while( true ) {
    uVar1 = FUN_100000bd8(param_1);
    if (uVar1 <= local_28) break;
    pbVar2 = (byte *)FUN_100001580(local_28 - uVar1,param_1,local_28);
    local_1c = local_1c ^ (uint)*pbVar2 + (int)local_28 * 0x6ddd4177;
    local_1c = ((int)local_1c >> 0x1b | local_1c << 5) ^ 0x9e3779b9;
    local_28 = local_28 + 1;
  }
  DAT_100008000 = DAT_100008000 ^ local_1c;
  return local_1c;
}


undefined8 FUN_100000bd8(undefined8 param_1)

{
  ulong uVar1;
  undefined8 local_28;
  
  uVar1 = FUN_100002614();
  if ((uVar1 & 1) == 0) {
    local_28 = FUN_100002738(param_1);
  }
  else {
    local_28 = FUN_100002720(param_1);
  }
  return local_28;
}


undefined8 FUN_100000bd8(undefined8 param_1)

{
  ulong uVar1;
  undefined8 local_28;
  
  uVar1 = FUN_100002614();
  if ((uVar1 & 1) == 0) {
    local_28 = FUN_100002738(param_1);
  }
  else {
    local_28 = FUN_100002720(param_1);
  }
  return local_28;
}


byte FUN_100000cf8(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  int local_90;
  ulong local_88;
  long local_80;
  string asStack_68 [24];
  string asStack_50 [24];
  undefined8 local_38;
  bool local_29;
  undefined7 local_28;
  undefined1 uStack_21;
  undefined7 uStack_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_1000040c0;
  local_38 = param_1;
  FUN_10000084c(asStack_50);
  local_28 = 0x202d282d1d1801;
  uStack_21 = 0x35;
  uStack_20 = 0x615d5353555a40;
  FUN_100000a80(asStack_68,&local_28,0xe,asStack_50);
  iVar3 = FUN_100000c2c(local_38);
  DAT_100008000 = DAT_100008000 ^ iVar3 << 1;
  uVar4 = FUN_100000bc0();
  if ((uVar4 & 1) == 0) {
    lVar7 = FUN_100001610(local_38);
    lVar8 = FUN_100001610(asStack_68);
    if (lVar7 == lVar8) {
      local_90 = 0;
      while( true ) {
        uVar5 = FUN_100001610(asStack_68);
        if (uVar5 <= (ulong)(long)local_90) break;
        pcVar6 = (char *)FUN_100001580((long)local_90 - uVar5,local_38,(long)local_90);
        cVar1 = *pcVar6;
        pcVar6 = (char *)FUN_1000015c8(asStack_68,(long)local_90);
        if (cVar1 != *pcVar6) {
          local_29 = false;
          goto LAB_100000fac;
        }
        local_90 = local_90 + 1;
      }
      local_29 = true;
    }
    else {
      local_29 = false;
    }
  }
  else {
    local_80 = 0;
    local_88 = 0;
    while( true ) {
      uVar5 = FUN_100000bd8(local_38);
      bVar2 = false;
      if (local_88 < uVar5) {
        uVar5 = FUN_100000bd8(asStack_68);
        bVar2 = local_88 < uVar5;
      }
      if (!bVar2) break;
      pcVar6 = (char *)FUN_100001580(local_38,local_88);
      cVar1 = *pcVar6;
      pcVar6 = (char *)FUN_1000015c8(asStack_68,local_88);
      local_80 = local_80 + (ulong)(cVar1 == *pcVar6);
      local_88 = local_88 + 1;
    }
    DAT_100008000 = DAT_100008000 ^ (uint)local_80;
    lVar7 = FUN_100000bd8(asStack_68);
    local_29 = local_80 == lVar7;
  }
LAB_100000fac:
  std::string::~string(asStack_68);
  std::string::~string(asStack_50);
  if (*(long *)PTR____stack_chk_guard_1000040c0 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_1000040c0 - local_18);
  }
  return local_29 & 1;
}


void FUN_100001260(void)

{
  uint uVar1;
  undefined8 uVar2;
  string asStack_98 [40];
  string asStack_70 [24];
  string asStack_58 [29];
  undefined1 auStack_3b [35];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_1000040c0;
  FUN_100001544(asStack_58,DAT_100008000 & 3,0x20);
  uVar1 = FUN_100000bd8(asStack_58);
  DAT_100008000 = DAT_100008000 ^ uVar1;
  FUN_10000084c(asStack_70);
  _memcpy(auStack_3b,&DAT_100003963,0x23);
  FUN_100000a80(asStack_98,auStack_3b,0x22,asStack_70);
  uVar2 = FUN_100000a34(PTR_cout_100004060,asStack_98);
  FUN_1000013d4(uVar2,FUN_100001400);
  std::string::~string(asStack_98);
  std::string::~string(asStack_70);
  std::string::~string(asStack_58);
  if (*(long *)PTR____stack_chk_guard_1000040c0 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_1000040c0 - local_18);
  }
  return;
}


void FUN_100001020(void)

{
  uint uVar1;
  undefined8 uVar2;
  string asStack_e0 [40];
  string asStack_b8 [24];
  string asStack_a0 [29];
  undefined1 auStack_83 [47];
  undefined1 auStack_54 [44];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_1000040c0;
  FUN_10000084c(asStack_a0);
  _memcpy(auStack_54,&DAT_100003908,0x2c);
  FUN_100000a80(asStack_b8,auStack_54,0x2b,asStack_a0);
  uVar2 = FUN_100000a34(PTR_cout_100004060,asStack_b8);
  FUN_1000013d4(uVar2,FUN_100001400);
  std::string::~string(asStack_b8);
  _memcpy(auStack_83,&DAT_100003934,0x2f);
  FUN_100000a80(asStack_e0,auStack_83,0x2e,asStack_a0);
  uVar1 = FUN_100001454();
  if ((uVar1 & 1) != 0) {
    DAT_100008000 = DAT_100008000 ^ 0x12345;
  }
  uVar2 = FUN_100000a34(uVar2,asStack_e0);
  FUN_1000013d4(uVar2,FUN_100001400);
  std::string::~string(asStack_e0);
  std::string::~string(asStack_a0);
  if (*(long *)PTR____stack_chk_guard_1000040c0 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_1000040c0 - local_28);
  }
  return;
}


