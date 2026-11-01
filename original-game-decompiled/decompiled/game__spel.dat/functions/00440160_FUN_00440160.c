
/* ==== FUN_00440160 @ 00440160 ==== 
 * signature: undefined __stdcall FUN_00440160(void)
 * body: 00440160-00440205;00440209-004402b8;004402bc-004402eb;004402ef-00440376;0044037a-0044037e
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00440206-00440208 004402b9-004402bb 004402ec-004402ee 00440377-00440379
 */

void FUN_00440160(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_40 [16];
  
  iVar3 = DAT_006c9424;
  if ((DAT_006fb908 != 0) && (DAT_006cbef0 != 0)) {
    iVar1 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
    *(int *)(iVar1 + 0x60) = DAT_006c9424;
    uVar2 = *(undefined4 *)(DAT_0073b1b0 + iVar3 * 0x48);
    *(undefined4 *)(iVar1 + 0x58) = 1;
    *(undefined4 *)(iVar1 + 0x48) = uVar2;
    if (*(int *)(iVar1 + 0x5c) == 1) {
      FUN_00440430(iVar1);
    }
    if (DAT_0073b4ec != DAT_006c9424) {
      DAT_0073b4ec = DAT_006c9424;
      iVar3 = (**(code **)(*DAT_0073b4b4 + 0x5c))
                        (DAT_0073b4b4,1,*(undefined4 *)(DAT_0073b1b0 + DAT_006c9424 * 0x48));
      if (iVar3 != 0) {
        FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d_____TEXTURE__error_setting_0059be94);
      }
    }
    if ((DAT_006fb894 == 0) && (DAT_006fb940 != 0)) {
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,1);
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x13,5);
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x14,6);
    }
    if ((DAT_006fb900 == 2) && (DAT_006fb8d0 != 0)) {
      FUN_004bc200(&DAT_0073b258,0);
    }
    FUN_0043ff60();
    puVar4 = &DAT_006c9428;
    puVar5 = auStack_40;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = auStack_40;
    puVar5 = &DAT_0073b474;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    iVar3 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
    if (iVar3 != 0) {
      FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
    }
    puVar4 = &DAT_006c9468;
    do {
      iVar3 = (**(code **)(*DAT_0073b4b4 + 0x74))(DAT_0073b4b4,5,2,puVar4,0x22,1);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s___d__DramPrimitive_error_0059c130);
      }
      puVar4 = puVar4 + 0x110;
    } while ((int)puVar4 < 0x6cbee8);
    if ((DAT_006fb894 == 0) && (DAT_006fb940 != 0)) {
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,0);
    }
    if ((DAT_006fb900 == 2) && (DAT_006fb8d0 != 0)) {
      FUN_004bc200(&DAT_0073b258,1);
    }
    if (DAT_0073b4fd != 1) {
      DAT_0073b4fd = 1;
      iVar3 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,7,1);
      if (iVar3 != 0) {
        FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d_____ZBUFFER__error_setting_0059c150);
      }
    }
  }
  return;
}


