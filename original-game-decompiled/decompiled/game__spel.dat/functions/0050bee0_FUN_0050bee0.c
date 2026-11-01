
/* ==== FUN_0050bee0 @ 0050bee0 ==== 
 * signature: undefined __fastcall FUN_0050bee0(int param_1)
 * body: 0050bee0-0050bf3b
 */

void __fastcall FUN_0050bee0(int param_1)

{
  short sVar1;
  LPVOID pvVar2;
  
  sVar1 = *(short *)(*(int *)(param_1 + 8) + 0x10);
  while (sVar1 != 0) {
    pvVar2 = (LPVOID)FUN_0050bf90(param_1);
    FUN_0054b339(pvVar2);
    sVar1 = *(short *)(*(int *)(param_1 + 8) + 0x10);
  }
  FUN_0054b339(*(LPVOID *)(param_1 + 4));
  pvVar2 = *(LPVOID *)(param_1 + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_0050dfc0((int)pvVar2);
    FUN_0054b339(pvVar2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


