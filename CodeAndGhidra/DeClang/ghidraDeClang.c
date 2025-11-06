
byte entry(void)

{
  char ****ppppcVar1;
  char ***pppcVar2;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  bool bVar6;
  char *extraout_x0;
  int iStack_1b0;
  byte bStack_1ab;
  byte bStack_1aa;
  char *pcStack_1a0;
  int local_114;
  _Unwind_Exception *local_110;
  long *local_f8;
  char local_e9;
  char *local_e8;
  char local_d9;
  char ***local_d8;
  char ***local_d0;
  _Unwind_Exception *local_b8;
  char ***local_a8;
  char **local_a0;
  undefined8 uStack_98;
  id aiStack_90 [48];
  
  FUN_1000013b0(PTR_cout_100004058,"Please enter the password to access the secure system: ",0x37);
  local_a0 = (char **)0x0;
  uStack_98 = 0;
  local_a8 = (char ***)0x0;
  local_114 = 0x4a101d23;
LAB_1000005c4:
  if (local_114 < 0x29eb219b) {
    if (local_114 < -0x1d22164a) {
      if (-0x4dd5608c < local_114) {
        if (local_114 < -0x2b84755d) {
          if (local_114 == -0x4dd5608b) goto LAB_100000938;
          if (local_114 == -0x4cc6099e) {
            return 0;
          }
        }
        else {
          if (local_114 == -0x2b84755d) goto LAB_1000008ac;
          if (local_114 == -0x240ab61c) {
            operator.delete(local_a8);
            local_114 = -0x4cc6099e;
          }
        }
        goto LAB_1000005c4;
      }
      if (local_114 == -0x5de4b0af) {
        ppppcVar1 = (char ****)local_d0;
        if (local_d9 == '\0') {
          ppppcVar1 = &local_a8;
        }
        bVar6 = *(char *)((long)ppppcVar1 + 1) == 'y';
        local_114 = 0x760c0900;
        goto LAB_1000005bc;
      }
      if (local_114 != -0x59350a72) {
        if (local_114 == -0x4fc03cf8) {
LAB_100000938:
          local_114 = -0x1d22164a;
        }
        goto LAB_1000005c4;
      }
      ppppcVar1 = (char ****)local_d0;
      if (local_d9 == '\0') {
        ppppcVar1 = &local_a8;
      }
      bVar6 = *(char *)((long)ppppcVar1 + 10) == '!';
      local_114 = -0x135ae6d7;
    }
    else {
      if (local_114 < 0x1295579) {
        if (local_114 < -0x135ae6d7) {
          if (local_114 == -0x1d22164a) {
            FUN_1000012b8();
LAB_100000988:
            local_114 = -0x240ab61c;
            if (-1 < *local_e8) {
              local_114 = -0x4cc6099e;
            }
          }
          else if (local_114 == -0x1cc141be) {
            operator.delete(local_a8);
            local_114 = 0x2472e042;
            local_110 = local_b8;
          }
        }
        else {
          if (local_114 == -0x135ae6d7) {
            ppppcVar1 = (char ****)local_d0;
            if (local_d9 == '\0') {
              ppppcVar1 = &local_a8;
            }
            bVar6 = *(char *)((long)ppppcVar1 + 0xb) == '1';
            local_114 = 0x6e5d2007;
            goto LAB_1000005bc;
          }
          if (local_114 == -0xb30629d) goto LAB_100000938;
        }
        goto LAB_1000005c4;
      }
      if (0xeb882f1 < local_114) {
        if (local_114 == 0xeb882f2) {
          FUN_100000f68();
          goto LAB_100000988;
        }
        if (local_114 == 0x2472e042) {
          __Unwind_Resume(local_110);
          iVar5 = 0x1295579;
          bVar4 = extraout_x0[0x17];
          uVar3 = *(ulong *)(extraout_x0 + 8);
          if (-1 < (char)bVar4) {
            uVar3 = (ulong)bVar4;
          }
          iStack_1b0 = 0x4a101d23;
          goto LAB_100000d00;
        }
        goto LAB_1000005c4;
      }
      if (local_114 == 0x1295579) {
        ppppcVar1 = (char ****)local_d0;
        if (local_d9 == '\0') {
          ppppcVar1 = &local_a8;
        }
        bVar6 = *(char *)((long)ppppcVar1 + 9) == '5';
        local_114 = -0x59350a72;
      }
      else {
        if (local_114 != 0x41f0b23) goto LAB_1000005c4;
        ppppcVar1 = (char ****)local_d0;
        if (local_d9 == '\0') {
          ppppcVar1 = &local_a8;
        }
        bVar6 = *(char *)((long)ppppcVar1 + 6) == 'N';
        local_114 = 0x7353afcd;
      }
    }
  }
  else if (local_114 < 0x6a73ec0b) {
    if (local_114 < 0x44f32e53) {
      if (local_114 == 0x29eb219b) {
        ppppcVar1 = (char ****)local_d0;
        if (local_d9 == '\0') {
          ppppcVar1 = &local_a8;
        }
        bVar6 = *(char *)((long)ppppcVar1 + 3) == 'L';
        local_114 = 0x44f32e53;
      }
      else {
        if (local_114 != 0x32c7f423) {
          if (local_114 == 0x43e7d6d0) {
LAB_1000007b8:
            local_f8 = (long *)std::locale::use_facet(aiStack_90);
LAB_100000878:
            local_e9 = (**(code **)(*local_f8 + 0x38))(local_f8,10);
            goto LAB_100000890;
          }
          goto LAB_1000005c4;
        }
        ppppcVar1 = (char ****)local_d0;
        if (local_d9 == '\0') {
          ppppcVar1 = &local_a8;
        }
        bVar6 = *(char *)((long)ppppcVar1 + 0xd) == '3';
        local_114 = 0xeb882f2;
      }
    }
    else if (local_114 < 0x53967c7c) {
      if (local_114 != 0x44f32e53) {
        if (local_114 == 0x4a101d23) {
          std::ios_base::getloc();
          goto LAB_1000007b8;
        }
        goto LAB_1000005c4;
      }
      ppppcVar1 = (char ****)local_d0;
      if (local_d9 == '\0') {
        ppppcVar1 = &local_a8;
      }
      bVar6 = *(char *)((long)ppppcVar1 + 4) == 'F';
      local_114 = 0x53967c7c;
    }
    else {
      if (local_114 != 0x53967c7c) {
        if (local_114 == 0x62977dbc) goto LAB_100000878;
        goto LAB_1000005c4;
      }
      ppppcVar1 = (char ****)local_d0;
      if (local_d9 == '\0') {
        ppppcVar1 = &local_a8;
      }
      bVar6 = *(char *)((long)ppppcVar1 + 5) == 'H';
      local_114 = 0x41f0b23;
    }
  }
  else if (local_114 < 0x75989538) {
    if (local_114 == 0x6a73ec0b) {
LAB_100000890:
      std::locale::~locale((locale *)aiStack_90);
      FUN_100001d94(PTR_cin_100004050,&local_a8,(long)local_e9);
LAB_1000008ac:
      local_e8 = (char *)((long)&uStack_98 + 7);
      local_d9 = (long)uStack_98 < 0;
      local_d8 = &local_a0;
      pppcVar2 = (char ***)local_a0;
      if (!(bool)local_d9) {
        pppcVar2 = (char ***)(uStack_98 >> 0x38);
      }
      local_114 = 0x76ef481c;
      if (pppcVar2 != (char ***)0xe) {
        local_114 = -0x4dd5608b;
      }
      goto LAB_1000005c4;
    }
    if (local_114 == 0x6e5d2007) {
      ppppcVar1 = (char ****)local_d0;
      if (local_d9 == '\0') {
        ppppcVar1 = &local_a8;
      }
      bVar6 = *(char *)((long)ppppcVar1 + 0xc) == '2';
      local_114 = 0x32c7f423;
    }
    else {
      if (local_114 != 0x7353afcd) goto LAB_1000005c4;
      ppppcVar1 = (char ****)local_d0;
      if (local_d9 == '\0') {
        ppppcVar1 = &local_a8;
      }
      bVar6 = *(char *)((long)ppppcVar1 + 7) == 'W';
      local_114 = 0x75989538;
    }
  }
  else {
    if (0x76ef481b < local_114) {
      if (local_114 == 0x76ef481c) {
        local_d0 = local_a8;
        ppppcVar1 = (char ****)local_a8;
        if (local_d9 == '\0') {
          ppppcVar1 = &local_a8;
        }
        local_114 = -0x5de4b0af;
        if (*(char *)ppppcVar1 != 'c') {
          local_114 = -0x4fc03cf8;
        }
      }
      else if (local_114 == 0x7f0796b4) goto LAB_100000988;
      goto LAB_1000005c4;
    }
    if (local_114 == 0x75989538) {
      ppppcVar1 = (char ****)(local_d0 + 1);
      if (local_d9 == '\0') {
        ppppcVar1 = (char ****)local_d8;
      }
      bVar6 = *(char *)ppppcVar1 == '2';
      local_114 = 0x1295579;
    }
    else {
      if (local_114 != 0x760c0900) goto LAB_1000005c4;
      ppppcVar1 = (char ****)local_d0;
      if (local_d9 == '\0') {
        ppppcVar1 = &local_a8;
      }
      bVar6 = *(char *)((long)ppppcVar1 + 2) == 's';
      local_114 = 0x29eb219b;
    }
  }
LAB_1000005bc:
  if (!bVar6) {
    local_114 = -0xb30629d;
  }
  goto LAB_1000005c4;
LAB_100000d00:
  if (iStack_1b0 < 0x4a101d23) {
    if (iStack_1b0 < 0x41f0b23) {
      if (iStack_1b0 < -0x2b84755d) {
        if (iStack_1b0 == -0x5de4b0af) {
          iStack_1b0 = 0x760c0900;
          if (pcStack_1a0[6] != 'N') {
            iStack_1b0 = iVar5;
          }
          goto LAB_100000cf8;
        }
        if (iStack_1b0 == -0x4dd5608b) {
          iStack_1b0 = 0x76ef481c;
          if (pcStack_1a0[4] != 'F') {
            iStack_1b0 = iVar5;
          }
          goto LAB_100000cf8;
        }
        if (iStack_1b0 == -0x59350a72) {
          return bStack_1aa;
        }
      }
      else {
        if (iStack_1b0 == -0x2b84755d) {
          iStack_1b0 = -0x4dd5608b;
          if (pcStack_1a0[3] != 'L') {
            iStack_1b0 = iVar5;
          }
          goto LAB_100000cf8;
        }
        if (iStack_1b0 == 0x1295579) {
          bStack_1aa = (bStack_1ab ^ 0xff) & 1;
          iStack_1b0 = -0x59350a72;
        }
      }
      goto LAB_100000d00;
    }
    if (iStack_1b0 < 0x43e7d6d0) {
      if (iStack_1b0 == 0x41f0b23) {
        iStack_1b0 = 0x7353afcd;
        if (pcStack_1a0[0xb] != '1') {
          iStack_1b0 = iVar5;
        }
        goto LAB_100000cf8;
      }
      if (iStack_1b0 != 0x29eb219b) goto LAB_100000d00;
      iStack_1b0 = 0x44f32e53;
      if (pcStack_1a0[8] != '2') {
        iStack_1b0 = iVar5;
      }
    }
    else if (iStack_1b0 == 0x43e7d6d0) {
      pcStack_1a0 = *(char **)extraout_x0;
      if (-1 < (char)bVar4) {
        pcStack_1a0 = extraout_x0;
      }
      iStack_1b0 = 0x62977dbc;
      if (*pcStack_1a0 != 'c') {
        iStack_1b0 = iVar5;
      }
    }
    else {
      if (iStack_1b0 != 0x44f32e53) goto LAB_100000d00;
      iStack_1b0 = 0x53967c7c;
      if (pcStack_1a0[9] != '5') {
        iStack_1b0 = iVar5;
      }
    }
  }
  else if (iStack_1b0 < 0x7353afcd) {
    if (iStack_1b0 < 0x62977dbc) {
      if (iStack_1b0 == 0x4a101d23) {
        iStack_1b0 = 0x43e7d6d0;
        if (uVar3 != 0xe) {
          iStack_1b0 = -0x59350a72;
        }
        bStack_1aa = 0;
        goto LAB_100000d00;
      }
      if (iStack_1b0 != 0x53967c7c) goto LAB_100000d00;
      iStack_1b0 = 0x41f0b23;
      if (pcStack_1a0[10] != '!') {
        iStack_1b0 = iVar5;
      }
    }
    else if (iStack_1b0 == 0x62977dbc) {
      iStack_1b0 = 0x6a73ec0b;
      if (pcStack_1a0[1] != 'y') {
        iStack_1b0 = iVar5;
      }
    }
    else {
      if (iStack_1b0 != 0x6a73ec0b) goto LAB_100000d00;
      iStack_1b0 = -0x2b84755d;
      if (pcStack_1a0[2] != 's') {
        iStack_1b0 = iVar5;
      }
    }
  }
  else if (iStack_1b0 < 0x760c0900) {
    if (iStack_1b0 != 0x7353afcd) {
      if (iStack_1b0 == 0x75989538) {
        bStack_1ab = pcStack_1a0[0xd] != '3';
        iStack_1b0 = 0x1295579;
      }
      goto LAB_100000d00;
    }
    iStack_1b0 = 0x75989538;
    if (pcStack_1a0[0xc] != '2') {
      iStack_1b0 = iVar5;
    }
  }
  else if (iStack_1b0 == 0x760c0900) {
    iStack_1b0 = 0x29eb219b;
    if (pcStack_1a0[7] != 'W') {
      iStack_1b0 = iVar5;
    }
  }
  else {
    if (iStack_1b0 != 0x76ef481c) goto LAB_100000d00;
    iStack_1b0 = -0x5de4b0af;
    if (pcStack_1a0[5] != 'H') {
      iStack_1b0 = iVar5;
    }
  }
LAB_100000cf8:
  bStack_1ab = 1;
  goto LAB_100000d00;
}


ostream * FUN_1000013b0(ostream *param_1,long param_2,long param_3,long param_4,ostream *param_5,
                       long param_6)

{
  int iVar1;
  ostream *poVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  int iStack_264;
  undefined8 ***pppuStack_260;
  ostream *poStack_258;
  long lStack_248;
  ostream *poStack_240;
  ulong uStack_238;
  long lStack_230;
  long lStack_228;
  char *pcStack_218;
  ulong uStack_210;
  char cStack_201;
  ulong uStack_200;
  _Unwind_Exception *p_Stack_1f8;
  undefined8 ***pppuStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  ostream *poStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  long local_160;
  int local_154;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  ostream *local_130;
  undefined8 uStack_128;
  uint local_11c;
  ostream *local_118;
  int local_10c;
  long *local_108;
  char local_fd;
  int local_fc;
  long local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  _Unwind_Exception *local_a0;
  int local_8c;
  sentry local_88 [16];
  id aiStack_78 [24];
  
  local_8c = 0x4a101d23;
  lVar3 = param_2 + param_3;
  local_160 = param_2;
LAB_100001470:
  do {
    while (iVar6 = (int)param_6, 0x4a101d22 < local_8c) {
      if (local_8c < 0x7353afcd) {
        if (local_8c < 0x62977dbc) {
          if (local_8c == 0x4a101d23) {
            std::ostream::sentry::sentry(local_88,param_1);
LAB_100001670:
            local_8c = 0x44f32e53;
            if (local_88[0] != (sentry)0x0) {
              local_8c = 0x62977dbc;
            }
          }
          else if (local_8c == 0x53967c7c) {
            local_f0 = local_150;
            local_e8 = local_148;
            std::ostream::sentry::~sentry(local_88);
            local_8c = 0x41f0b23;
            local_138 = local_e8;
            local_140 = local_f0;
          }
        }
        else if (local_8c == 0x62977dbc) {
          local_130 = param_1 + *(long *)(*(long *)param_1 + -0x18);
          uStack_128 = *(undefined8 *)(local_130 + 0x28);
          local_11c = *(uint *)(local_130 + 8);
          local_118 = local_130 + 0x90;
          local_154 = *(int *)local_118;
          local_10c = local_154;
          local_8c = 0x6a73ec0b;
          if (local_154 != -1) {
            local_8c = -0x5de4b0af;
          }
        }
        else if (local_8c == 0x6a73ec0b) {
          std::ios_base::getloc();
LAB_100001614:
          local_108 = (long *)std::locale::use_facet(aiStack_78);
          goto LAB_100001628;
        }
      }
      else if (local_8c < 0x760c0900) {
        if (local_8c == 0x7353afcd) goto LAB_10000169c;
        if (local_8c == 0x75989538) {
          return param_1;
        }
      }
      else {
        if (local_8c == 0x760c0900) goto LAB_100001458;
        if (local_8c == 0x76ef481c) goto LAB_100001640;
      }
    }
    if (0x41f0b22 < local_8c) {
      if (local_8c < 0x43e7d6d0) {
        if (local_8c != 0x41f0b23) {
          if (local_8c == 0x29eb219b) {
            std::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
            goto LAB_1000015d4;
          }
          goto LAB_100001470;
        }
        ___cxa_begin_catch(local_140);
        std::ios_base::__set_badbit_and_consider_rethrow();
LAB_10000169c:
        ___cxa_end_catch();
      }
      else {
        if (local_8c == 0x43e7d6d0) goto LAB_100001670;
        if (local_8c != 0x44f32e53) goto LAB_100001470;
LAB_1000015d4:
        std::ostream::sentry::~sentry(local_88);
      }
      local_8c = 0x75989538;
      goto LAB_100001470;
    }
    if (local_8c < -0x2b84755d) {
      if (local_8c == -0x5de4b0af) {
        param_6 = (long)(char)local_154;
        param_3 = lVar3;
        if ((local_11c & 0xb0) != 0x20) {
          param_3 = local_160;
        }
        param_4 = lVar3;
        param_5 = local_130;
        local_f8 = FUN_1000017d4(uStack_128);
LAB_100001458:
        local_8c = 0x29eb219b;
        if (local_f8 != 0) {
          local_8c = 0x44f32e53;
        }
      }
      else if (local_8c == -0x4dd5608b) {
LAB_100001628:
        local_fd = (**(code **)(*local_108 + 0x38))(local_108,0x20);
LAB_100001640:
        std::locale::~locale((locale *)aiStack_78);
        local_fc = (int)local_fd;
        *(int *)local_118 = local_fc;
        local_8c = -0x5de4b0af;
        local_154 = (int)local_fd;
      }
    }
    else {
      if (local_8c == -0x2b84755d) goto LAB_100001614;
      if (local_8c == 0x1295579) {
        __Unwind_Resume(local_a0);
        auVar8 = FUN_1000013a0();
        lVar5 = auVar8._8_8_;
        poVar2 = auVar8._0_8_;
        uStack_1c0 = 0x62977dbc;
        uStack_1b8 = 0x43e7d6cf;
        uStack_1b0 = 0x44f32e53;
        uStack_1a8 = 0x62977dbb;
        uStack_1a0 = 0xa21b4f51;
        uStack_198 = 0x4a101d22;
        uStack_190 = 0x41f0b22;
        uStack_180 = 0x7353afcc;
        pcStack_168 = FUN_1000017d4;
        iVar1 = 0x6e5d2007;
        iStack_264 = 0x4a101d23;
        lStack_188 = lVar3;
        poStack_178 = param_1;
        puStack_170 = &stack0xfffffffffffffff0;
        break;
      }
    }
  } while( true );
LAB_100001894:
  if (iStack_264 < 0x44f32e53) {
    if (iStack_264 < 0x1295579) {
      if (-0x4dd5608c < iStack_264) {
        if (iStack_264 == -0x2b84755d) {
          iStack_264 = -0x4dd5608b;
          if (uStack_238 < 0x7ffffffffffffff0) {
            iStack_264 = 0x76ef481c;
          }
        }
        else if (iStack_264 == -0x135ae6d7) {
          *(undefined8 *)poStack_240 = 0;
          iStack_264 = 0x6e5d2007;
          poStack_258 = poVar2;
        }
        else if (iStack_264 == -0x4dd5608b) {
          FUN_100001cd4(&pppuStack_1e8);
          goto LAB_100001ccc;
        }
        goto LAB_100001894;
      }
      if (iStack_264 == -0x5de4b0af) {
        uVar4 = (uStack_238 | 0xf) + 1;
        pppuStack_260 = (undefined8 ***)operator.new(uVar4);
        uStack_1d8 = uVar4 | 0x8000000000000000;
        uStack_1e0 = uStack_238;
        iStack_264 = 0x29eb219b;
        pppuStack_1e8 = pppuStack_260;
        goto LAB_100001894;
      }
      if (iStack_264 != -0x59350a72) goto LAB_100001894;
      uVar4 = (**(code **)(*(long *)poVar2 + 0x60))(poVar2,param_3,uStack_200);
      iStack_264 = -0x135ae6d7;
      if (uVar4 != uStack_200) {
        iStack_264 = iVar1;
      }
    }
    else {
      if (0x29eb219a < iStack_264) {
        if (iStack_264 == 0x29eb219b) {
          _memset(pppuStack_260,iVar6,uStack_238);
          *(undefined1 *)((long)pppuStack_260 + uStack_238) = 0;
          pcStack_218 = (char *)((long)&uStack_1d8 + 7);
          uStack_210 = (**(code **)(*(long *)poVar2 + 0x60))(poVar2,&pppuStack_1e8);
LAB_100001bf8:
          cStack_201 = uStack_210 == uStack_238;
          iStack_264 = 0x53967c7c;
          if (-1 < *pcStack_218) {
            iStack_264 = 0x41f0b23;
          }
        }
        else if (iStack_264 == 0x43e7d6d0) {
          poStack_240 = param_5 + 0x18;
          uStack_238 = *(long *)poStack_240 - (param_4 - lVar5);
          if (uStack_238 == 0 || *(long *)poStack_240 < param_4 - lVar5) {
            uStack_238 = 0;
          }
          lStack_228 = param_3 - lVar5;
          iStack_264 = 0x62977dbc;
          lStack_248 = param_4;
          lStack_230 = param_3;
          if (lStack_228 < 1) {
            iStack_264 = 0x6a73ec0b;
          }
        }
        goto LAB_100001894;
      }
      if (iStack_264 == 0x1295579) {
        uVar4 = lStack_248 - lStack_230;
        iVar7 = -0x135ae6d7;
        iStack_264 = -0x59350a72;
        uStack_200 = uVar4;
        goto LAB_100001b3c;
      }
      if (iStack_264 != 0x41f0b23) goto LAB_100001894;
      iStack_264 = 0x1295579;
      if (cStack_201 == '\0') {
        iStack_264 = iVar1;
      }
    }
  }
  else {
    if (0x6a73ec0a < iStack_264) {
      if (iStack_264 < 0x75989538) {
        if (iStack_264 == 0x6a73ec0b) {
          iVar7 = 0x1295579;
          iStack_264 = -0x2b84755d;
          uVar4 = uStack_238;
LAB_100001b3c:
          if ((long)uVar4 < 1) {
            iStack_264 = iVar7;
          }
        }
        else if (iStack_264 == 0x7353afcd) {
          operator.delete(pppuStack_1e8);
          iStack_264 = 0x75989538;
        }
        else if (iStack_264 == 0x6e5d2007) {
          return poStack_258;
        }
      }
      else if (iStack_264 == 0x760c0900) {
        uStack_1d8 = CONCAT17((char)uStack_238,(undefined7)uStack_1d8);
        iStack_264 = 0x29eb219b;
        pppuStack_260 = &pppuStack_1e8;
      }
      else if (iStack_264 == 0x76ef481c) {
        iStack_264 = 0x760c0900;
        if (0x16 < uStack_238) {
          iStack_264 = -0x5de4b0af;
        }
      }
      else if (iStack_264 == 0x75989538) {
LAB_100001ccc:
        __Unwind_Resume(p_Stack_1f8);
                    /* WARNING: Subroutine does not return */
        FUN_100001cec("basic_string");
      }
      goto LAB_100001894;
    }
    if (iStack_264 < 0x53967c7c) {
      if (iStack_264 == 0x44f32e53) goto LAB_100001bf8;
      if (iStack_264 == 0x4a101d23) {
        iStack_264 = iVar1;
        if (poVar2 != (ostream *)0x0) {
          iStack_264 = 0x43e7d6d0;
        }
        goto LAB_10000188c;
      }
      goto LAB_100001894;
    }
    if (iStack_264 == 0x53967c7c) {
      operator.delete(pppuStack_1e8);
      iStack_264 = 0x41f0b23;
      goto LAB_100001894;
    }
    if (iStack_264 != 0x62977dbc) goto LAB_100001894;
    lVar3 = (**(code **)(*(long *)poVar2 + 0x60))(poVar2,lVar5,lStack_228);
    iStack_264 = 0x6a73ec0b;
    if (lVar3 != lStack_228) {
      iStack_264 = iVar1;
    }
  }
LAB_10000188c:
  poStack_258 = (ostream *)0x0;
  goto LAB_100001894;
}


void FUN_1000012b8(void)

{
  char cVar1;
  long *plVar2;
  id aiStack_30 [16];
  
  cVar1 = FUN_1000013b0(PTR_cout_100004058,"\n[-] Access Denied. Incorrect password.",0x27);
  std::ios_base::getloc();
  plVar2 = (long *)std::locale::use_facet(aiStack_30);
  (**(code **)(*plVar2 + 0x38))(plVar2,10);
  std::locale::~locale((locale *)aiStack_30);
  std::ostream::put(cVar1);
  std::ostream::flush();
  return;
}


void FUN_100000f68(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  long *plVar4;
  id aiStack_160 [16];
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  uint local_12c;
  _Unwind_Exception *local_128;
  undefined4 local_120;
  _Unwind_Exception *local_118;
  undefined4 local_110;
  long *local_108;
  long local_100;
  long *local_f8;
  undefined1 local_e9;
  char *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long *local_d0;
  undefined1 local_c1;
  _Unwind_Exception *local_c0;
  undefined4 local_b8;
  id aiStack_80 [8];
  id aiStack_78 [24];
  
  puVar1 = PTR_cout_100004058;
  local_108 = (long *)FUN_1000013b0(PTR_cout_100004058,"Access Granted. Welcome to the secure area."
                                    ,0x2b);
  puVar2 = PTR_id_100004060;
  local_100 = (long)local_108 + *(long *)(*local_108 + -0x18);
  local_12c = 0x4a101d23;
LAB_100000ffc:
  while (local_12c < 0x4a101d23) {
    if (local_12c < 0x29eb219b) {
      if (local_12c == 0xa21b4f51) goto LAB_1000011b8;
      if (local_12c == 0xb22a9f75) goto LAB_100001190;
      if (local_12c == 0xd47b8aa3) goto LAB_100001180;
    }
    else {
      if (local_12c == 0x29eb219b) goto LAB_1000011e4;
      if (local_12c == 0x43e7d6d0) goto LAB_100001118;
      if (local_12c == 0x44f32e53) {
LAB_100001288:
        operator.delete(local_e8);
        return;
      }
    }
  }
  if (local_12c < 0x6a73ec0b) {
    if (local_12c != 0x4a101d23) {
      if (local_12c == 0x53967c7c) {
        local_c0 = local_118;
        local_b8 = local_110;
        operator.delete(local_e8);
        local_12c = 0x62977dbc;
        local_120 = local_b8;
        local_128 = local_c0;
      }
      else if (local_12c == 0x62977dbc) {
        __Unwind_Resume(local_128);
        puStack_150 = puVar2;
        puStack_148 = puVar1;
        pcStack_138 = FUN_1000012b8;
        puStack_140 = &stack0xfffffffffffffff0;
        cVar3 = FUN_1000013b0(PTR_cout_100004058,"\n[-] Access Denied. Incorrect password.",0x27);
        std::ios_base::getloc();
        plVar4 = (long *)std::locale::use_facet(aiStack_160);
        (**(code **)(*plVar4 + 0x38))(plVar4,10);
        std::locale::~locale((locale *)aiStack_160);
        std::ostream::put(cVar3);
        std::ostream::flush();
        return;
      }
      goto LAB_100000ffc;
    }
    std::ios_base::getloc();
    local_f8 = (long *)std::locale::use_facet(aiStack_80);
LAB_100001118:
    local_e9 = (**(code **)(*local_f8 + 0x38))(local_f8,10);
LAB_100001130:
    std::locale::~locale((locale *)aiStack_80);
    std::ostream::put((char)local_108);
    std::ostream::flush();
    local_e8 = (char *)operator.new(0x30);
    builtin_strncpy(local_e8,"The nuclear launch codes are: Hamburger Banana",0x2f);
    local_e0 = FUN_1000013b0(puVar1,"Secret Information: ",0x14);
LAB_100001180:
    local_d8 = FUN_1000013b0(local_e0,local_e8,0x2e);
LAB_100001190:
    std::ios_base::getloc();
LAB_1000011a8:
    local_d0 = (long *)std::locale::use_facet(aiStack_78);
LAB_1000011b8:
    local_c1 = (**(code **)(*local_d0 + 0x38))(local_d0,10);
  }
  else {
    if (local_12c == 0x6a73ec0b) goto LAB_100001130;
    if (local_12c != 0x760c0900) {
      if (local_12c == 0x76ef481c) goto LAB_1000011a8;
      goto LAB_100000ffc;
    }
  }
  std::locale::~locale((locale *)aiStack_78);
  std::ostream::put((char)local_d8);
LAB_1000011e4:
  std::ostream::flush();
  goto LAB_100001288;
}


