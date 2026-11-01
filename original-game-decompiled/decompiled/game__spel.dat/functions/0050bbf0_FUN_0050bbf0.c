
/* ==== FUN_0050bbf0 @ 0050bbf0 ==== 
 * signature: undefined4 __thiscall FUN_0050bbf0(void * this, byte * param_1)
 * body: 0050bbf0-0050bc55
 */

undefined4 __thiscall FUN_0050bbf0(void *this,byte *param_1)

{
  void *this_00;
  undefined4 uVar1;
  uint uVar2;
  
  if (*(short *)(param_1 + 0x22) != 0) {
    return 0;
  }
  if (*(short *)(param_1 + 0x1a) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    *(undefined4 *)((int)this + 700) = 0;
  }
  this_00 = *(void **)((int)this + 0x2b4);
  uVar2 = FUN_0050fe90(param_1);
  FUN_005012d0(this_00,param_1,uVar2);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  if (param_1 != (byte *)0x0) {
    FUN_0050acb0((int)param_1);
    FUN_0054b339(param_1);
  }
  return uVar1;
}


