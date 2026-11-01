
/* ==== FUN_004e6df0 @ 004e6df0 ==== 
 * signature: undefined1 * __thiscall FUN_004e6df0(void * this, undefined1 * param_1)
 * body: 004e6df0-004e6f3f
 */

undefined1 * __thiscall FUN_004e6df0(void *this,undefined1 *param_1)

{
  undefined1 *puVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00571d9f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)this = *param_1;
  FUN_004028f0(this,'\0');
  FUN_004093c0(this,param_1,0,0xffffffff);
  puVar1 = (undefined1 *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  local_4 = 0;
  *puVar1 = param_1[0x14];
  FUN_004028f0(puVar1,'\0');
  FUN_004093c0(puVar1,param_1 + 0x14,0,0xffffffff);
  local_4._0_1_ = 1;
  *(undefined1 *)((int)this + 0x24) = param_1[0x24];
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  FUN_004093c0((undefined1 *)((int)this + 0x24),param_1 + 0x24,0,0xffffffff);
  puVar1 = (undefined1 *)((int)this + 0x34);
  local_4._0_1_ = 2;
  *puVar1 = param_1[0x34];
  FUN_004028f0(puVar1,'\0');
  FUN_004093c0(puVar1,param_1 + 0x34,0,0xffffffff);
  local_4._0_1_ = 3;
  *(undefined1 *)((int)this + 0x44) = param_1[0x44];
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  FUN_004093c0((undefined1 *)((int)this + 0x44),param_1 + 0x44,0,0xffffffff);
  local_4._0_1_ = 4;
  puVar1 = (undefined1 *)((int)this + 0x54);
  *puVar1 = param_1[0x54];
  FUN_004028f0(puVar1,'\0');
  FUN_004093c0(puVar1,param_1 + 0x54,0,0xffffffff);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)(param_1 + 100);
  local_4 = CONCAT31(local_4._1_3_,5);
  *(undefined1 *)((int)this + 0x68) = param_1[0x68];
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  FUN_004093c0((undefined1 *)((int)this + 0x68),param_1 + 0x68,0,0xffffffff);
  ExceptionList = local_c;
  return this;
}


