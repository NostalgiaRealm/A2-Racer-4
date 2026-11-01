
/* ==== FUN_00448fd0 @ 00448fd0 ==== 
 * signature: undefined __thiscall FUN_00448fd0(void * this, undefined4 * param_1)
 * body: 00448fd0-00448fde
 */

void __thiscall FUN_00448fd0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)this;
  *(undefined4 *)this = *puVar1;
  *param_1 = puVar1;
  return;
}


