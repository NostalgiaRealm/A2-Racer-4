
/* ==== FUN_00417b60 @ 00417b60 ==== 
 * signature: undefined __fastcall FUN_00417b60(int param_1)
 * body: 00417b60-00417b9c
 */

void __fastcall FUN_00417b60(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = *(LPVOID *)(param_1 + 0x1c);
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_00576460;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_0054b339(*(LPVOID *)((int)pvVar1 + 4));
    *(undefined4 *)((int)pvVar1 + 4) = 0;
    *(undefined4 *)((int)pvVar1 + 8) = 0;
    *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    FUN_0054b339(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


