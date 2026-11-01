
/* ==== FUN_0050bfc0 @ 0050bfc0 ==== 
 * signature: undefined __thiscall FUN_0050bfc0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 0050bfc0-0050bff5
 */

void __thiscall
FUN_0050bfc0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  (**(code **)**(undefined4 **)((int)this + 4))(param_1,param_2,param_3,param_4,local_8 | 0x300);
  return;
}


