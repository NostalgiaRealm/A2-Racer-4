
/* ==== FUN_00409ac4 @ 00409ac4 ==== 
 * signature: undefined __register FUN_00409ac4(int param_1, int * param_2, double * param_3)
 * body: 00409ac4-00409d24;00409d27-00409dd5
 */

void FUN_00409ac4(int param_1,int *param_2,double *param_3)

{
  bool bVar1;
  WORD WVar2;
  undefined4 uVar3;
  PCNZCH pCVar4;
  undefined2 extraout_var;
  int iVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ushort uVar7;
  uint uVar8;
  undefined4 *in_FS_OFFSET;
  undefined **ppuVar9;
  undefined4 uStack_44;
  code *pcStack_40;
  code *pcStack_3c;
  undefined *local_2c;
  undefined *local_28;
  int local_24;
  undefined *local_20;
  byte local_1c;
  byte local_1b;
  char local_1a;
  byte local_19;
  ushort local_18;
  ushort local_16;
  ushort local_14;
  ushort local_12;
  ushort local_10;
  char local_e;
  undefined1 local_d;
  double *local_c;
  int local_8;
  
  pcStack_3c = (code *)&stack0xfffffffc;
  local_2c = (undefined *)0x0;
  local_28 = (undefined *)0x0;
  local_24 = 0;
  local_20 = (undefined *)0x0;
  pcStack_40 = thunk_FUN_00403434;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  uVar8 = 0;
  local_16 = 0;
  local_18 = 0;
  local_1c = 0;
  local_d = 0;
  local_c = param_3;
  uVar3 = FUN_0040998c((int)DAT_004474f8);
  local_e = (char)uVar3;
  local_8 = 0;
  if (*DAT_004474f8 == 'g') {
    FUN_004099d8(param_1,param_2);
    FUN_00403e40(param_1,1,*param_2 - 1,&local_24);
    FUN_00407bbc(local_24,(int *)&local_20);
    local_8 = FUN_00409a14(local_20);
  }
  else {
    pCVar4 = FUN_0040b3e8(&DAT_00409df0,DAT_004474f8);
    if (0 < (int)pCVar4) {
      local_8 = DAT_004475d4;
    }
  }
  bVar1 = FUN_00409834(param_1,param_2,&local_10,(char *)&local_19);
  if (((bVar1) && (uVar3 = FUN_00409954(param_1,param_2,DAT_004474f5), (char)uVar3 != '\0')) &&
     (bVar1 = FUN_00409834(param_1,param_2,&local_12,&local_1a), bVar1)) {
    uVar3 = FUN_00409954(param_1,param_2,DAT_004474f5);
    if ((char)uVar3 == '\0') {
      WVar2 = FUN_00408c20();
      uVar8 = CONCAT22(extraout_var,WVar2);
      if (local_e == '\x01') {
        local_18 = local_10;
        local_16 = local_12;
      }
      else {
        local_16 = local_10;
        local_18 = local_12;
      }
    }
    else {
      bVar1 = FUN_00409834(param_1,param_2,&local_14,(char *)&local_1b);
      if (!bVar1) goto LAB_00409dbb;
      if (local_e == '\0') {
        uVar8 = (uint)local_14;
        local_1c = local_1b;
        local_16 = local_10;
        local_18 = local_12;
      }
      else if (local_e == '\x01') {
        uVar8 = (uint)local_14;
        local_1c = local_1b;
        local_16 = local_12;
        local_18 = local_10;
      }
      else if (local_e == '\x02') {
        uVar8 = (uint)local_10;
        local_1c = local_19;
        local_16 = local_12;
        local_18 = local_14;
      }
      if (local_8 < 1) {
        if (local_1c < 3) {
          WVar2 = FUN_00408c20();
          uVar7 = (short)uVar8 + (short)((int)((uint)WVar2 - (uint)DAT_004460d4) / 100) * 100;
          uVar8 = (uint)uVar7;
          if ((DAT_004460d4 != 0) && ((int)(uint)uVar7 < (int)((uint)WVar2 - (uint)DAT_004460d4))) {
            uVar8 = (uint)(ushort)(uVar7 + 100);
          }
        }
      }
      else {
        uVar8 = FUN_00409a68(uVar8,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
      }
    }
    FUN_00409954(param_1,param_2,DAT_004474f5);
    FUN_00409810(param_1,param_2);
    if ((DAT_004475b4 != '\0') && (iVar5 = FUN_00403f24("ddd",DAT_004474f8), iVar5 != 0)) {
      if ((byte)(*DAT_0044750c - 0x30U) < 10) {
        FUN_004099d8(param_1,param_2);
      }
      else {
        do {
          while ((iVar5 = FUN_00403c38(param_1), *param_2 <= iVar5 &&
                 (*(char *)(param_1 + -1 + *param_2) != ' '))) {
            *param_2 = *param_2 + 1;
          }
          FUN_00409810(param_1,param_2);
          iVar5 = FUN_00403c38(param_1);
          if (iVar5 < *param_2) break;
          ppuVar9 = &local_28;
          uVar6 = FUN_00403c38((int)DAT_00447504);
          FUN_00403e40(param_1,*param_2,uVar6,(int *)ppuVar9);
          iVar5 = FUN_00407b28(DAT_00447504,local_28);
          if (iVar5 == 0) break;
          ppuVar9 = &local_2c;
          uVar6 = FUN_00403c38((int)DAT_00447508);
          FUN_00403e40(param_1,*param_2,uVar6,(int *)ppuVar9);
          iVar5 = FUN_00407b28(DAT_00447508,local_2c);
        } while (iVar5 != 0);
      }
    }
    local_d = FUN_004089cc(uVar8,local_16,local_18,local_c);
  }
LAB_00409dbb:
  *in_FS_OFFSET = uStack_44;
  pcStack_3c = FUN_00409ddd;
  pcStack_40 = (code *)0x409dd5;
  FUN_004039dc((int *)&local_2c,4);
  return;
}


