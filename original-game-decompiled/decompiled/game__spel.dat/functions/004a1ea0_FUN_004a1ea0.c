
/* ==== FUN_004a1ea0 @ 004a1ea0 ==== 
 * signature: undefined __thiscall FUN_004a1ea0(void * this, undefined4 * param_1)
 * body: 004a1ea0-004a1edc
 */

void __thiscall FUN_004a1ea0(void *this,undefined4 *param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float local_c [3];
  
  puVar3 = (undefined4 *)FUN_004a1cb0(this,local_c);
  fVar1 = (float)puVar3[1];
  uVar2 = puVar3[2];
  *param_1 = *puVar3;
  param_1[1] = -fVar1;
  param_1[2] = uVar2;
  return;
}


