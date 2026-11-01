
/* ==== FUN_004a1ee0 @ 004a1ee0 ==== 
 * signature: undefined __thiscall FUN_004a1ee0(void * this, undefined4 * param_1)
 * body: 004a1ee0-004a1f0c
 */

void __thiscall FUN_004a1ee0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float local_c [3];
  
  puVar3 = (undefined4 *)FUN_004a1d20(this,local_c);
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  *param_1 = *puVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}


