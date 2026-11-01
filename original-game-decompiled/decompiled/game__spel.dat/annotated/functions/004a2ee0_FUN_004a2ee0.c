
/* ==== FUN_004a2ee0 @ 004a2ee0 ==== 
 * signature: undefined __thiscall FUN_004a2ee0(void * this, undefined4 * param_1, int param_2)
 * body: 004a2ee0-004a2f4c
 */

void __thiscall FUN_004a2ee0(void *this,undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if ((0 < param_2) && (param_2 < 4)) {
    puVar1 = (undefined4 *)((int)this + param_2 * 0xc + 0x44);
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    param_1[2] = puVar1[2];
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


