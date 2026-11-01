
/* ==== FUN_0050b810 @ 0050b810 ==== 
 * signature: undefined __thiscall FUN_0050b810(void * this, int param_1, int param_2, int * param_3)
 * body: 0050b810-0050b9a5
 */

void __thiscall FUN_0050b810(void *this,int param_1,int param_2,int *param_3)

{
  int iVar1;
  ushort *puVar2;
  undefined4 uVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  bool bVar10;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar11;
  
  iVar9 = param_2;
  uVar11 = (uint)*(ushort *)(param_2 + 0x22);
  while (uVar11 = uVar11 - 1, -1 < (int)uVar11) {
    iVar1 = *(int *)(*(int *)(param_2 + 0x24) + uVar11 * 4);
    fVar5 = *(float *)(iVar1 + 0x10) - *(float *)(param_1 + 0x10);
    fVar8 = *(float *)(iVar1 + 0x14) - *(float *)(param_1 + 0x14);
    fVar7 = *(float *)(iVar1 + 0x18) - *(float *)(param_1 + 0x18);
    fVar6 = *(float *)(iVar1 + 0x20) + *(float *)(param_1 + 0x20);
    if (fVar5 * fVar5 + fVar8 * fVar8 + fVar7 * fVar7 <= fVar6 * fVar6) {
      puVar2 = *(ushort **)((int)this + 0x2b0);
      if (*puVar2 <= puVar2[1]) {
        FUN_004f6060(puVar2);
      }
      *(int *)(*(int *)(puVar2 + 2) + (uint)puVar2[1] * 4) = iVar1;
      puVar2[1] = puVar2[1] + 1;
    }
  }
  if (param_3[4] < *(int *)(param_2 + 0x10) + -1) {
    uVar3 = *(undefined4 *)(param_2 + 0xc);
    iVar1 = param_3[3];
    param_2 = 0;
    if (*(short *)(iVar9 + 0x1a) != 0) {
      do {
        piVar4 = *(int **)(*(int *)(iVar9 + 0x1c) + param_2 * 4);
        if (piVar4 == param_3) {
          FUN_0050b750(this,param_1,(int)piVar4);
        }
        else {
          bVar10 = FUN_0050b250(piVar4,param_3,((char)uVar3 - (char)iVar1) - 1);
          if (CONCAT31(extraout_var,bVar10) == 1) {
            FUN_0050b810(this,param_1,(int)piVar4,param_3);
          }
        }
        param_2 = param_2 + 1;
      } while (param_2 < (int)(uint)*(ushort *)(iVar9 + 0x1a));
      return;
    }
  }
  else {
    iVar1 = param_3[3];
    uVar3 = *(undefined4 *)(param_2 + 0xc);
    param_2 = 0;
    if (*(short *)(iVar9 + 0x1a) != 0) {
      do {
        piVar4 = *(int **)(*(int *)(iVar9 + 0x1c) + param_2 * 4);
        if (piVar4 == param_3) {
          FUN_0050b750(this,param_1,(int)piVar4);
        }
        else {
          bVar10 = FUN_0050b250(param_3,piVar4,((char)iVar1 - (char)uVar3) + 1);
          if (CONCAT31(extraout_var_00,bVar10) == 1) {
            FUN_0050b810(this,param_1,(int)piVar4,param_3);
          }
        }
        param_2 = param_2 + 1;
      } while (param_2 < (int)(uint)*(ushort *)(iVar9 + 0x1a));
    }
  }
  return;
}


