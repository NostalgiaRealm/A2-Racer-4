
/* ==== FUN_004922b0 @ 004922b0 ==== 
 * signature: undefined __thiscall FUN_004922b0(void * this, int param_1)
 * body: 004922b0-00492320
 */

void __thiscall FUN_004922b0(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_c [3];
  
  if ((param_1 == 0) || (param_1 == 5)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_00492260(this,uVar2);
  puVar1 = (undefined4 *)FUN_00492110(this,local_c);
  FUN_0047bc90(*(void **)((int)this + 0x3c),puVar1);
  puVar1 = (undefined4 *)FUN_00492180(this,local_c);
  FUN_0047bc90(*(void **)((int)this + 0x34),puVar1);
  puVar1 = (undefined4 *)FUN_00492200(this,local_c);
  FUN_0047bc90(*(void **)((int)this + 0x38),puVar1);
  FUN_004919b0((void *)((int)this + 0x18),param_1);
  return;
}


