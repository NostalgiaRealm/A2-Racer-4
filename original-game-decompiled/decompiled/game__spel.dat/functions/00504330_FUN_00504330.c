
/* ==== FUN_00504330 @ 00504330 ==== 
 * signature: undefined __cdecl FUN_00504330(int * param_1, int param_2, int param_3)
 * body: 00504330-00504572
 */

void __cdecl FUN_00504330(int *param_1,int param_2,int param_3)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  void *this;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  void *pvVar10;
  float10 fVar11;
  undefined4 local_60;
  double local_5c;
  float local_54 [2];
  float local_4c;
  void *local_48;
  void *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  undefined1 local_30 [8];
  undefined2 local_28;
  undefined2 local_26;
  undefined2 *local_24;
  undefined2 local_20 [4];
  undefined2 local_18 [6];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  iVar8 = param_2;
  piVar7 = param_1;
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00573738;
  local_c = ExceptionList;
  iVar2 = *(int *)(param_3 + 0xa4);
  iVar3 = *(int *)(param_2 + 0xa4);
  if (*(int *)(param_2 + 0x80) * 0x1000000 < 0x8000000) {
    piVar9 = *(int **)(iVar2 + 0x1d4);
  }
  else {
    piVar9 = *(int **)(iVar3 + 0x1d4);
  }
  ExceptionList = &local_c;
  piVar9 = FUN_00502820(param_1,&param_1,&local_60,piVar9,(undefined2 *)0x1);
  this = (void *)piVar9[0x10];
  fVar11 = FUN_00504f80((int)piVar9,*(int *)(iVar8 + 0x18));
  FUN_00504790(this,local_54,(float)fVar11,piVar9);
  local_40 = *(undefined4 *)((int)this + 0x10);
  local_3c = *(undefined4 *)((int)this + 0x14);
  local_38 = *(float *)((int)this + 0x18);
  local_28 = 0;
  local_26 = 0;
  local_5c = (double)local_38;
  local_24 = (undefined2 *)0x0;
  local_4 = 0;
  FUN_00505290(local_20,0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00505290(local_18,0);
  local_4 = 2;
  pvVar10 = (void *)FUN_0053f770(param_1,iVar3,iVar2);
  iVar2 = *(int *)(piVar7[10] + 0x18);
  pdVar1 = (double *)(iVar2 + 0x120);
  uVar4 = *(undefined4 *)(iVar2 + 0x124);
  dVar6 = *pdVar1;
  dVar5 = *(double *)((int)pvVar10 + 0x20);
  *(undefined4 *)((int)pvVar10 + 0x20) = *(undefined4 *)pdVar1;
  *(undefined4 *)((int)pvVar10 + 0x24) = uVar4;
  FUN_00504970(local_30,piVar7,(int)param_1,pvVar10,piVar9);
  local_4 = 4;
  FUN_0050bd30(local_18);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_0050bd30(local_20);
  local_4 = 0xffffffff;
  if (local_24 != local_20) {
    if (local_24 != (undefined2 *)0x0) {
      FUN_00559d4e(local_24);
      local_24 = (undefined2 *)0x0;
    }
    local_28 = 0;
  }
  iVar2 = param_2;
  local_26 = 0;
  pvVar10 = *(void **)(param_2 + 0x18);
  local_4c = (float)((float10)dVar6 - (float10)dVar5);
  *(undefined4 *)((int)this + 0x10) = local_40;
  *(undefined4 *)((int)this + 0x14) = local_3c;
  *(float *)((int)this + 0x18) = local_38;
  local_48 = pvVar10;
  local_44 = this;
  FUN_004f8600(pvVar10,&local_4c);
  if ((*(uint *)(iVar2 + 0x80) & 0x2000) != 0) {
    FUN_004f62e0(*(void **)((int)pvVar10 + 0xc),iVar2,&local_4c);
  }
  if ((*(uint *)(param_3 + 0x80) & 0x2000) != 0) {
    FUN_004f62e0(*(void **)((int)pvVar10 + 0xc),param_3,&local_4c);
  }
  ExceptionList = local_c;
  return;
}


