
/* ==== FUN_004be340 @ 004be340 ==== 
 * signature: undefined __fastcall FUN_004be340(int * param_1)
 * body: 004be340-004be383;004be387-004be3c1;004be3c5-004be3f3;004be3f7-004be431;004be435-004be492;004be496-004be4f2;004be4f6-004be517;004be51b-004be53b;004be53f-004be579;004be57d-004be581
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004be384-004be386 004be3c2-004be3c4 004be3f4-004be3f6 004be432-004be434 004be493-004be495 004be4f3-004be4f5 004be518-004be51a 004be53c-004be53e 004be57a-004be57c
 */

void __fastcall FUN_004be340(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_0073b525;
  bVar1 = false;
  if (param_1[2] == 1) {
    if (DAT_0073b525 != 2) {
      bVar1 = true;
      if (DAT_0073b4cc != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____device_was_not_initiali_005b106c);
      }
      if (DAT_0073b525 != 2) {
        DAT_0073b525 = 2;
        iVar2 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,8,2);
        if (iVar2 != 0) {
          FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d_____FILL_MODE__error_setti_005b25ec);
        }
      }
    }
  }
  else if ((param_1[2] == 2) && (DAT_0073b525 != 1)) {
    if (DAT_0073b4cc != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____device_was_not_initiali_005b106c);
    }
    if (DAT_0073b525 != 1) {
      DAT_0073b525 = 1;
      iVar2 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,8,1);
      if (iVar2 != 0) {
        FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d_____FILL_MODE__error_setti_005b25ec);
      }
    }
    bVar1 = true;
  }
  if (*param_1 == 1) {
    iVar2 = (**(code **)(*DAT_0073b4b4 + 0x78))
                      (DAT_0073b4b4,4,1,param_1[0x1e],param_1[0x1f],param_1[0x24],param_1[0x25],8);
    if (iVar2 != 0) {
      if (param_1[0x27] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____string_is_not_initialis_005969b0);
      }
      FUN_004bb290(iVar2);
LAB_004be509:
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____D3DError_DrawPrimitive___005b25bc);
    }
  }
  else if (*param_1 == 2) {
    iVar2 = (**(code **)(*DAT_0073b4b4 + 0x78))
                      (DAT_0073b4b4,4,2,param_1[0x20],param_1[0x21],param_1[0x24],param_1[0x25],8);
    if (iVar2 != 0) {
      if (param_1[0x27] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____string_is_not_initialis_005969b0);
      }
      FUN_004bb290(iVar2);
      goto LAB_004be509;
    }
  }
  if (bVar1) {
    if (DAT_0073b4cc != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____device_was_not_initiali_005b106c);
    }
    if (DAT_0073b525 != iVar3) {
      DAT_0073b525 = iVar3;
      iVar3 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,8,iVar3);
      if (iVar3 != 0) {
        FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d_____FILL_MODE__error_setti_005b25ec);
      }
    }
  }
  return;
}


