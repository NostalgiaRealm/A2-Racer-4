
/* ==== FUN_0041db70 @ 0041db70 ==== 
 * signature: undefined __stdcall FUN_0041db70(void * param_1, int param_2, undefined4 param_3)
 * body: 0041db70-0041db8a
 */

void FUN_0041db70(void *param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  
  puVar1 = FUN_00416750(param_1,param_2);
  *puVar1 = 1;
  *(undefined4 *)(puVar1 + 4) = param_3;
  return;
}


