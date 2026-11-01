
/* ==== FUN_005110a0 @ 005110a0 ==== 
 * signature: float10 __fastcall FUN_005110a0(double * param_1)
 * body: 005110a0-0051118f
 */

float10 __fastcall FUN_005110a0(double *param_1)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  uint uVar5;
  double local_78;
  double local_68;
  double local_60;
  double local_58;
  double local_48;
  double local_40;
  double local_38;
  double local_28;
  double local_20;
  double local_18;
  
  uVar5 = (uint)*(ushort *)((int)param_1 + 0x22);
  local_78 = 0.0;
  pdVar1 = (double *)**(undefined4 **)((int)param_1 + 0x24);
  iVar4 = 0;
  if (uVar5 != 0) {
    do {
      iVar4 = iVar4 + 1;
      pdVar2 = *(double **)(*(int *)((int)param_1 + 0x24) + -4 + iVar4 * 4);
      pdVar3 = *(double **)(*(int *)((int)param_1 + 0x24) + (iVar4 % (int)uVar5) * 4);
      local_40 = pdVar3[1] - pdVar2[1];
      local_38 = pdVar3[2] - pdVar2[2];
      local_48 = *pdVar3 - *pdVar2;
      local_60 = pdVar2[1] - pdVar1[1];
      local_58 = pdVar2[2] - pdVar1[2];
      local_68 = *pdVar2 - *pdVar1;
      FUN_004f99d0(&local_28,&local_48,&local_68);
      uVar5 = (uint)*(ushort *)((int)param_1 + 0x22);
      local_78 = local_20 * param_1[1] + local_28 * *param_1 + local_18 * param_1[2] + local_78;
    } while (iVar4 < (int)uVar5);
  }
  return (float10)local_78;
}


