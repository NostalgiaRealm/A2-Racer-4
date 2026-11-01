
/* ==== FUN_00506440 @ 00506440 ==== 
 * signature: undefined __thiscall FUN_00506440(void * this, undefined4 * param_1)
 * body: 00506440-00506464
 */

void __thiscall FUN_00506440(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 8) = uVar2;
  return;
}


