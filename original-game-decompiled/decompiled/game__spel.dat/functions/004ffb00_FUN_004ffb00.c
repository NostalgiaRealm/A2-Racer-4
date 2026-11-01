
/* ==== FUN_004ffb00 @ 004ffb00 ==== 
 * signature: undefined __thiscall FUN_004ffb00(void * this, int param_1)
 * body: 004ffb00-004ffc3b
 */

void __thiscall FUN_004ffb00(void *this,int param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int local_18;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0057363b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  do {
    iVar6 = 0;
    local_18 = 0;
    bVar2 = false;
    puVar3 = operator_new(0x24);
    local_4 = 0;
    if (puVar3 == (uint *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_004fffb0(puVar3);
    }
    local_4 = 0xffffffff;
    *piVar4 = CONCAT31((int3)((uint)*piVar4 >> 8),1);
    FUN_00500560(*(void **)(*(int *)(param_1 + 0xc) + 8),piVar4);
    iVar5 = 0;
    iVar7 = iVar6;
    if (*(short *)((int)this + 0xe) != 0) {
      do {
        iVar1 = *(int *)(*(int *)((int)this + 0x10) + iVar5 * 4);
        iVar6 = FUN_0053ebc0(iVar1);
        if (iVar6 == param_1) {
          iVar6 = iVar5;
          if (iVar5 < (int)(*(ushort *)((int)this + 0xe) - 1)) {
            do {
              iVar6 = iVar6 + 1;
              *(undefined4 *)(*(int *)((int)this + 0x10) + -4 + iVar6 * 4) =
                   *(undefined4 *)(*(int *)((int)this + 0x10) + iVar6 * 4);
            } while (iVar6 < (int)(*(ushort *)((int)this + 0xe) - 1));
          }
          *(short *)((int)this + 0xe) = *(short *)((int)this + 0xe) + -1;
          iVar5 = iVar5 + -1;
          if (*(ushort *)(piVar4 + 3) <= *(ushort *)((int)piVar4 + 0xe)) {
            FUN_004f6060((ushort *)(piVar4 + 3));
          }
          *(int *)(piVar4[4] + (uint)*(ushort *)((int)piVar4 + 0xe) * 4) = iVar1;
          *(short *)((int)piVar4 + 0xe) = *(short *)((int)piVar4 + 0xe) + 1;
          *(int **)(iVar1 + 0x1d4) = piVar4;
          iVar6 = local_18;
          iVar1 = local_18;
        }
        else {
          iVar1 = iVar6;
          if ((iVar7 != 0) && (bVar8 = iVar6 != iVar7, iVar6 = iVar7, iVar1 = local_18, bVar8)) {
            bVar2 = true;
          }
        }
        local_18 = iVar1;
        iVar5 = iVar5 + 1;
        iVar7 = iVar6;
      } while (iVar5 < (int)(uint)*(ushort *)((int)this + 0xe));
    }
    FUN_004ff990(piVar4);
    param_1 = iVar6;
  } while (bVar2);
  ExceptionList = local_c;
  return;
}


