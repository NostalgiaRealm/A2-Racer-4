
/* ==== FUN_0055a4c8 @ 0055a4c8 ==== 
 * signature: undefined4 __cdecl FUN_0055a4c8(char * param_1, ulonglong * param_2)
 * body: 0055a4c8-0055a4e9
 */

undefined4 __cdecl FUN_0055a4c8(char *param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_00562ea1(param_1);
  *param_2 = uVar2;
  uVar1 = 0xffffffff;
  if (((uint)*param_2 & *(uint *)((int)param_2 + 4)) != 0xffffffff) {
    uVar1 = 0;
  }
  return uVar1;
}


