
/* ==== FUN_00459b00 @ 00459b00 ==== 
 * signature: undefined __fastcall FUN_00459b00(int param_1)
 * body: 00459b00-00459bce;00459bd2-00459bf6
 */

void __fastcall FUN_00459b00(int param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 auStack_114 [11];
  undefined4 uStack_e8;
  undefined4 local_c0 [12];
  float local_90;
  undefined4 local_8c;
  float local_88;
  undefined4 local_80 [16];
  float local_40 [16];
  
  piVar3 = *(int **)(param_1 + 0xac);
  if (piVar3 != (int *)0x0) {
    do {
      puVar2 = (undefined4 *)(param_1 + 0x10);
      puVar5 = local_c0;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      pfVar1 = (float *)FUN_0045e090((int)piVar3);
      local_90 = local_90 + *pfVar1;
      iVar4 = FUN_0045e090((int)piVar3);
      local_8c = *(undefined4 *)(iVar4 + 4);
      iVar4 = FUN_0045e090((int)piVar3);
      local_88 = local_88 + *(float *)(iVar4 + 8);
      FUN_0045e0a0((int)piVar3);
      puVar2 = local_c0;
      puVar5 = auStack_114;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar2 = (undefined4 *)FUN_00460730(local_40);
      puVar5 = local_80;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar2 = local_80;
      puVar5 = &DAT_0073b474;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      iVar4 = (**(code **)(*DAT_0073b4b4 + 0x68))();
      if (iVar4 != 0) {
        FUN_004bb290(iVar4);
                    /* WARNING: Subroutine does not return */
        uStack_e8 = 0x459bcf;
        FUN_004c4150((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
      }
      FUN_00459d90(piVar3);
      piVar3 = (int *)FUN_0045e0d0((int)piVar3);
    } while (piVar3 != (int *)0x0);
  }
  return;
}


