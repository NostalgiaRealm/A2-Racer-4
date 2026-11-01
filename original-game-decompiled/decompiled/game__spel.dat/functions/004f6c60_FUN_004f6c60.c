
/* ==== FUN_004f6c60 @ 004f6c60 ==== 
 * signature: undefined4 __thiscall FUN_004f6c60(void * this, int param_1)
 * body: 004f6c60-004f6cd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004f6c60(void *this,int param_1)

{
  undefined2 uVar1;
  undefined2 *this_00;
  undefined2 extraout_var;
  
  this_00 = (undefined2 *)
            FUN_0053eb70(this,*(int *)(*(int *)(param_1 + 0x10) + 0xa4),
                         *(int *)(*(int *)(param_1 + 0x24) + 0xa4));
  if (this_00 == (undefined2 *)0x0) {
    _DAT_00000000 = 0;
  }
  FUN_0053ea80(this_00,param_1);
  uVar1 = FUN_0053e740((int)this_00);
  if (CONCAT22(extraout_var,uVar1) == 0) {
    FUN_0053eb10(this,(int)this_00);
    if (this_00 != (undefined2 *)0x0) {
      FUN_0051ed80(this_00);
      FUN_0054b339(this_00);
    }
    return 1;
  }
  return 0;
}


