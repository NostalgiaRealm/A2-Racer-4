
/* ==== FUN_0040ee10 @ 0040ee10 ==== 
 * signature: undefined __fastcall FUN_0040ee10(undefined1 * param_1)
 * body: 0040ee10-0040ee3d
 */

void __fastcall FUN_0040ee10(undefined1 *param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = DAT_005d1b0c;
  if (DAT_005d1b0c != (LPVOID)0x0) {
    FUN_0040ea90((int)DAT_005d1b0c);
    FUN_0054b339(pvVar1);
    DAT_005d1b0c = (LPVOID)0x0;
  }
  *param_1 = 0;
  return;
}


