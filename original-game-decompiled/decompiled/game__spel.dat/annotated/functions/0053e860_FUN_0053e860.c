
/* ==== FUN_0053e860 @ 0053e860 ==== 
 * signature: undefined __thiscall FUN_0053e860(void * this, int * param_1)
 * body: 0053e860-0053e94d
 */

void __thiscall FUN_0053e860(void *this,int *param_1)

{
  byte *this_00;
  byte *this_01;
  undefined2 uVar1;
  int iVar2;
  undefined2 *this_02;
  undefined2 *this_03;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  
  this_00 = *(byte **)(param_1[4] + 0xa4);
  this_01 = *(byte **)(param_1[9] + 0xa4);
  FUN_004f47b0((int)this_00);
  FUN_004f47b0((int)this_01);
  FUN_004f6ce0(this,param_1);
  iVar2 = FUN_004f6c60(this,(int)param_1);
  if (iVar2 == 1) {
    *(uint *)((int)this + 0x44) = *(uint *)((int)this + 0x44) & 0xffffff01 | 1;
  }
  this_02 = (undefined2 *)FUN_004f5240(this_00,(uint)this);
  this_03 = (undefined2 *)FUN_004f5240(this_01,(uint)this);
  FUN_0053ea80(this_02,(int)param_1);
  uVar1 = FUN_0053e740((int)this_02);
  if (CONCAT22(extraout_var,uVar1) == 0) {
    FUN_004f5360(this_00,this_02);
    FUN_004f6e60(this,this_00);
    **(uint **)(this_00 + 0x1d4) = **(uint **)(this_00 + 0x1d4) & 0xfffffdff | 0x100;
  }
  FUN_0053ea80(this_03,(int)param_1);
  uVar1 = FUN_0053e740((int)this_03);
  if (CONCAT22(extraout_var_00,uVar1) == 0) {
    FUN_004f5360(this_01,this_03);
    FUN_004f6e60(this,this_01);
    **(uint **)(this_01 + 0x1d4) = **(uint **)(this_01 + 0x1d4) & 0xfffffdff | 0x100;
  }
  if (param_1 != (int *)0x0) {
    FUN_0053e620((int)param_1);
    FUN_0054b339(param_1);
  }
  return;
}


