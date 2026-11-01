
/* ==== FUN_0045ec30 @ 0045ec30 ==== 
 * signature: undefined __fastcall FUN_0045ec30(int param_1)
 * body: 0045ec30-0045ecdb;0045ecdf-0045ed00
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0045ecdc-0045ecde
 */

void __fastcall FUN_0045ec30(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_40 [12];
  float local_10;
  float local_c;
  float local_8;
  
  piVar6 = *(int **)(param_1 + 0x98);
  if (piVar6 != (int *)0x0) {
    do {
      pfVar4 = (float *)FUN_0045e090((int)piVar6);
      fVar2 = *pfVar4;
      iVar5 = FUN_0045e090((int)piVar6);
      fVar3 = *(float *)(iVar5 + 4);
      iVar5 = FUN_0045e090((int)piVar6);
      fVar1 = *(float *)(iVar5 + 8);
      puVar7 = (undefined4 *)(param_1 + 0x10);
      puVar8 = local_40;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      local_10 = local_10 + fVar2;
      local_c = local_c + fVar3;
      local_8 = local_8 + fVar1;
      puVar7 = local_40;
      puVar8 = &DAT_0073b474;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      iVar5 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
      if (iVar5 != 0) {
        FUN_004bb290(iVar5);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
      }
      FUN_0045e300(piVar6);
      piVar6 = (int *)FUN_0045e0d0((int)piVar6);
    } while (piVar6 != (int *)0x0);
  }
  return;
}


