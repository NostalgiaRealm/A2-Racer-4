
/* ==== FUN_00468310 @ 00468310 ==== 
 * signature: undefined4 __register FUN_00468310(int * param_1)
 * body: 00468310-00468342
 */

undefined4 FUN_00468310(int *param_1)

{
  HWND pHVar1;
  undefined4 uVar2;
  
  pHVar1 = GetFocus();
  uVar2 = (**(code **)(*param_1 + 0xb0))();
  if (((char)uVar2 == '\0') && ((*(char *)((int)param_1 + 0x179) == '\0' || (pHVar1 != (HWND)0x0))))
  {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar2;
}


