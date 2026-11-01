
/* ==== FUN_004d4770 @ 004d4770 ==== 
 * signature: uint __thiscall FUN_004d4770(void * this, char param_1)
 * body: 004d4770-004d4937
 */

uint __thiscall FUN_004d4770(void *this,char param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  void *this_00;
  undefined4 *puVar6;
  facet *pfVar7;
  int iVar8;
  undefined4 local_28 [3];
  facet *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_0056ff7b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &local_10;
  local_18 = this;
  puVar2 = &stack0xffffffcc;
  if (*(int *)(*(int *)(*(int *)this + 4) + 4 + (int)this) == 0) {
    piVar4 = *(int **)((int)this + *(int *)(*(int *)this + 4) + 0x2c);
    ExceptionList = &local_10;
    puVar2 = &stack0xffffffcc;
    if (piVar4 != (int *)0x0) {
      iVar8 = 0;
      ExceptionList = &local_10;
      puVar2 = &stack0xffffffcc;
      if (((*(byte *)((int)piVar4 + *(int *)(*piVar4 + 4) + 4) & 6) == 0) &&
         (ExceptionList = &local_10,
         iVar3 = (**(code **)(**(int **)((int)piVar4 + *(int *)(*piVar4 + 4) + 0x28) + 0x2c))(),
         puVar2 = local_14, iVar3 == -1)) {
        iVar8 = 4;
      }
      local_14 = puVar2;
      FUN_004d4c00(iVar8);
      puVar2 = local_14;
    }
    local_14 = puVar2;
    if ((param_1 == '\0') && ((*(uint *)(*(int *)(*(int *)this + 4) + 0xc + (int)this) & 1) != 0)) {
      piVar4 = (int *)FUN_004d4370((void *)(*(int *)(*(int *)this + 4) + (int)this),(int *)&local_1c
                                  );
      local_8 = 1;
      uVar5 = FUN_004d4350(&DAT_0074db0c);
      _param_1 = FUN_0054ca8b(piVar4,uVar5,'\x01');
      if (_param_1 == 0) {
        iVar8 = FUN_0054caca(piVar4);
        if ((char)iVar8 == '\0') {
          FUN_004d1030(local_28);
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(local_28,&DAT_00584188);
        }
        _param_1 = DAT_0074b898;
        if (DAT_0074b898 == 0) {
          this_00 = operator_new(0x18);
          local_8._0_1_ = 2;
          if (this_00 == (void *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            puVar6 = FUN_004d49e0(this_00,0,0,0);
          }
          local_8 = CONCAT31(local_8._1_3_,1);
          DAT_0074b898 = FUN_004d6520((int)puVar6);
          _param_1 = DAT_0074b898;
        }
      }
      local_8 = 0xffffffff;
      if ((local_1c != (facet *)0x0) &&
         (pfVar7 = std::locale::facet::_Decref(local_1c), pfVar7 != (facet *)0x0)) {
        (*(code *)**(undefined4 **)pfVar7)(1);
      }
      local_8 = 3;
      piVar4 = *(int **)(*(int *)(*(int *)this + 4) + 0x28 + (int)this);
      pbVar1 = *(byte **)piVar4[7];
      if ((pbVar1 == (byte *)0x0) || (pbVar1 + *(int *)piVar4[0xb] <= pbVar1)) {
        uVar5 = (**(code **)(*piVar4 + 0x10))();
      }
      else {
        uVar5 = (uint)*pbVar1;
      }
      while ((uVar5 != 0xffffffff &&
             ((*(byte *)(*(int *)(_param_1 + 0x10) + (uVar5 & 0xff) * 2) & 0x48) != 0))) {
        piVar4 = *(int **)(*(int *)(*(int *)this + 4) + 0x28 + (int)this);
        uVar5 = *(uint *)piVar4[7];
        if (uVar5 == 0) {
LAB_004d491f:
          uVar5 = (**(code **)(*piVar4 + 0x14))();
        }
        else {
          iVar8 = *(int *)piVar4[0xb];
          if (iVar8 + uVar5 <= uVar5) goto LAB_004d491f;
          *(int *)piVar4[0xb] = iVar8 + -1;
          pbVar1 = *(byte **)piVar4[7];
          *(byte **)piVar4[7] = pbVar1 + 1;
          uVar5 = (uint)*pbVar1;
        }
        if (uVar5 == 0xffffffff) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = FUN_004d4c30(piVar4);
        }
      }
      local_8 = 0xffffffff;
    }
    puVar2 = local_14;
    if (*(int *)(*(int *)(*(int *)this + 4) + 4 + (int)this) == 0) {
      ExceptionList = local_10;
      return 1;
    }
  }
  local_14 = puVar2;
  uVar5 = FUN_0054c6db();
  ExceptionList = local_10;
  return uVar5 & 0xffffff00;
}


