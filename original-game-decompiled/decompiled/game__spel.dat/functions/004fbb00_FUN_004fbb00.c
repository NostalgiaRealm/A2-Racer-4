
/* ==== FUN_004fbb00 @ 004fbb00 ==== 
 * signature: undefined4 * __thiscall FUN_004fbb00(void * this, undefined4 param_1, int * param_2)
 * body: 004fbb00-004fbbc5
 */

undefined4 * __thiscall FUN_004fbb00(void *this,undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005734c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004fb9f0(this,param_1,param_2);
  puVar1 = (undefined4 *)((int)this + 0x98);
  local_4 = 0;
  *puVar1 = &PTR_FUN_005784f4;
  *(undefined ***)this = &PTR_FUN_0057851c;
  *puVar1 = &PTR_FUN_00578518;
  pvVar2 = (void *)param_2[6];
  *(void **)((int)this + 0x9c) = pvVar2;
  if (pvVar2 != (void *)0x0) {
    FUN_0050d160(pvVar2,-(uint)(this != (void *)0x0) & (uint)puVar1);
    FUN_004fbbf0(this,*(double *)(*(int *)((int)this + 0x9c) + 0x20));
  }
  pvVar2 = (void *)param_2[4];
  *(void **)((int)this + 0xa0) = pvVar2;
  if (pvVar2 != (void *)0x0) {
    FUN_0050d160(pvVar2,-(uint)(this != (void *)0x0) & (uint)puVar1);
    FUN_0050d610(this,*(double *)(*(int *)((int)this + 0xa0) + 0x20));
  }
  ExceptionList = local_c;
  return this;
}


