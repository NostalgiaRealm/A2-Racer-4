
/* ==== FUN_0050e6f0 @ 0050e6f0 ==== 
 * signature: undefined4 __thiscall FUN_0050e6f0(void * this, int param_1, void * param_2, int param_3, int param_4)
 * body: 0050e6f0-0050e922
 */

undefined4 __thiscall FUN_0050e6f0(void *this,int param_1,void *param_2,int param_3,int param_4)

{
  ushort *puVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 *this_00;
  undefined4 uVar4;
  int iVar5;
  int *local_14;
  undefined4 *local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00573c51;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)((int)this + 0x74) = param_1;
  pvVar2 = operator_new(0x90);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_0050e390(pvVar2,(int)this,(int)param_2,(void *)0x0,(float *)0x0);
  }
  puVar1 = (ushort *)((int)this + 0x90);
  *(int **)((int)this + 0x98) = piVar3;
  local_4 = 0xffffffff;
  uVar4 = *(undefined4 *)((int)param_2 + 0xa4);
  if (*puVar1 <= *(ushort *)((int)this + 0x92)) {
    FUN_004f6060(puVar1);
  }
  *(undefined4 *)(*(int *)((int)this + 0x94) + (uint)*(ushort *)((int)this + 0x92) * 4) = uVar4;
  *(short *)((int)this + 0x92) = *(short *)((int)this + 0x92) + 1;
  iVar5 = 0;
  if (*(short *)(param_3 + 2) != 0) {
    local_10 = (undefined4 *)((int)this + 0x44);
    do {
      pvVar2 = operator_new(0x90);
      local_4 = 1;
      if (pvVar2 == (void *)0x0) {
        local_14 = (int *)0x0;
      }
      else {
        local_14 = FUN_0050e390(pvVar2,(int)this,*(int *)(*(int *)(param_3 + 4) + iVar5 * 4),param_2
                                ,*(float **)(*(int *)(param_4 + 4) + iVar5 * 4));
      }
      local_4 = 0xffffffff;
      if (*(ushort *)((int)this + 0x9c) <= *(ushort *)((int)this + 0x9e)) {
        FUN_004f6060((ushort *)((int)this + 0x9c));
      }
      *(int **)(*(int *)((int)this + 0xa0) + (uint)*(ushort *)((int)this + 0x9e) * 4) = local_14;
      *(short *)((int)this + 0x9e) = *(short *)((int)this + 0x9e) + 1;
      uVar4 = *(undefined4 *)(*(int *)(*(int *)(param_3 + 4) + iVar5 * 4) + 0xa4);
      if (*puVar1 <= *(ushort *)((int)this + 0x92)) {
        FUN_004f6060(puVar1);
      }
      *(undefined4 *)(*(int *)((int)this + 0x94) + (uint)*(ushort *)((int)this + 0x92) * 4) = uVar4;
      *(short *)((int)this + 0x92) = *(short *)((int)this + 0x92) + 1;
      *local_10 = 0;
      local_10 = local_10 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)*(ushort *)(param_3 + 2));
  }
  FUN_005001a0(*(void **)(param_1 + 0xa0),this);
  pvVar2 = operator_new(0x30);
  local_4 = 2;
  if (pvVar2 == (void *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = FUN_0050f220(pvVar2,(int)this);
  }
  local_4 = 0xffffffff;
  FUN_0050f270(this_00,*(int *)((int)this + 0x84));
  FUN_0050f270(this_00,*(int *)((int)this + 0x80) + 3);
  FUN_0050f270(this_00,*(int *)((int)this + 0x84) + 3);
  FUN_0050f270(this_00,*(int *)((int)this + 0x88) + 3);
  uVar4 = FUN_0050f7f0(this_00);
  FUN_0054b339(this_00);
  ExceptionList = local_c;
  return uVar4;
}


