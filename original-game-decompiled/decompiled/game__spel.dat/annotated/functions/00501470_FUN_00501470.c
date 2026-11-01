
/* ==== FUN_00501470 @ 00501470 ==== 
 * signature: undefined __fastcall FUN_00501470(int param_1)
 * body: 00501470-00501492
 */

void __fastcall FUN_00501470(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = *(LPVOID *)(param_1 + 0xc);
  if ((pvVar1 != *(LPVOID *)(param_1 + 0x10)) && (pvVar1 != (LPVOID)0x0)) {
    FUN_00559d4e(pvVar1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


