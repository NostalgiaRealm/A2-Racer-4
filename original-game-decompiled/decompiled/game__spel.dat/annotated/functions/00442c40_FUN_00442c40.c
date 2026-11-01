
/* ==== FUN_00442c40 @ 00442c40 ==== 
 * signature: undefined __fastcall FUN_00442c40(int param_1)
 * body: 00442c40-00442c85
 */

void __fastcall FUN_00442c40(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = *(LPVOID *)(param_1 + 0xcc);
  *(undefined ***)(param_1 + 200) = &PTR_FUN_00576748;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_0054b339(*(LPVOID *)((int)pvVar1 + 4));
    *(undefined4 *)((int)pvVar1 + 4) = 0;
    *(undefined4 *)((int)pvVar1 + 8) = 0;
    *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    FUN_0054b339(pvVar1);
  }
  *(undefined4 *)(param_1 + 0xcc) = 0;
  return;
}


